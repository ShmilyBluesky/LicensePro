#include "licensetool.h"
#include "licensefactory.h"
#include "licenseabstract.h"

LicenseTool::LicenseTool(QObject *parent) :
    QObject(parent)
{

}

bool LicenseTool::checkout(const QString &param, const QString &code)
{
    LocalLicense localLi(LicenseFactory::instance()->create(License_a1));
    if (localLi.isValid())
    {
        return localLi.license()->checkout(param, code);
    }

    return false;
}

QString LicenseTool::gennerateCode(const QString &param)
{
    LocalLicense localLi(LicenseFactory::instance()->create(License_a1));
    if (localLi.isValid())
    {
        return localLi.license()->gennerateCode(param);
    }

    return QString("");
}

QString LicenseTool::reverseCalcParam(const QString &code)
{
    LocalLicense localLi(LicenseFactory::instance()->create(License_a1));
    if (localLi.isValid())
    {
        return localLi.license()->reverseCalcParam(code);
    }

    return QString("");
}
