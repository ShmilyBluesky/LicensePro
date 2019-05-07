#include "mainwidget.h"
#include "ui_mainwidget.h"
#include "licenseparamgenerator.h"
#include "licensetool.h"
#include <QMessageBox>

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::on_btn_updateAllMacs_clicked()
{
    LicenseParamGenerator licenseGenerator;
    QList<QString> listMacs = licenseGenerator.getEthernetMacs();

    ui->comb_allMacs->clear();
    for (int i=0; i<listMacs.size(); i++)
    {
        ui->comb_allMacs->addItem(listMacs.at(i));
    }
}

void MainWidget::on_btn_calcCode_clicked()
{
    LicenseTool tool;
    QString code = tool.gennerateCode(ui->edit_param->text());
    ui->edit_code->setText(code);
}

void MainWidget::on_btn_calcParam_clicked()
{
    LicenseTool tool;
    QString param = tool.reverseCalcParam(ui->edit_code->text());
    ui->edit_param->setText(param);
}

void MainWidget::on_btn_check_clicked()
{
    LicenseTool tool;
    if (tool.checkout(ui->edit_param->text(), ui->edit_code->text()))
    {
        QMessageBox::information(0, tr("Tip"), tr("Checkout Successfully!"));
    }
    else
    {
        QMessageBox::information(0, tr("Tip"), tr("Checkout Failure!"));
    }
}
