#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>

namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();

private slots:
    void on_btn_updateAllMacs_clicked();

    void on_btn_calcCode_clicked();

    void on_btn_calcParam_clicked();

    void on_btn_check_clicked();

private:
    Ui::MainWidget *ui;
};

#endif // MAINWIDGET_H
