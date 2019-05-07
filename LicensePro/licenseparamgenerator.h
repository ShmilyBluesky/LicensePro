#ifndef LICENSEPARAMGENERATOR_H
#define LICENSEPARAMGENERATOR_H

#include <QObject>
#include <QString>
#include <QList>

class LicenseParamGenerator : public QObject
{
    Q_OBJECT
public:
    explicit LicenseParamGenerator(QObject *parent = 0);

    // 获取所有的网口mac地址
    QList<QString> getEthernetMacs() const;

signals:

public slots:

};

#endif // LICENSEPARAMGENERATOR_H
