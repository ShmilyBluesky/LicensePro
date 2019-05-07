#include "licenseparamgenerator.h"
#include <QNetworkInterface>

LicenseParamGenerator::LicenseParamGenerator(QObject *parent) :
    QObject(parent)
{

}

QList<QString> LicenseParamGenerator::getEthernetMacs() const
{
    QList<QString> listMacs;

    QList<QNetworkInterface> listNets = QNetworkInterface::allInterfaces();
    for (int i=0; i<listNets.size(); i++)
    {
        // 如果此网络接口被激活并且正在运行并且不是回环地址，则就是有效的Mac地址
        if (listNets[i].flags().testFlag(QNetworkInterface::IsUp) &&
                listNets[i].flags().testFlag(QNetworkInterface::IsRunning) &&
                !listNets[i].flags().testFlag(QNetworkInterface::IsLoopBack))
        {
            QString mac = listNets[i].hardwareAddress();
            if (mac.length() > 0)
                listMacs.push_back(mac);
        }
    }

    return listMacs;
}
