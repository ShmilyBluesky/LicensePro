#include "licensealgorithm1.h"

LicenseAlgorithm1::LicenseAlgorithm1()
{

}

bool LicenseAlgorithm1::checkout(const QString &param, const QString &code)
{
    bool result = false;

    QString newCode = gennerateCode(param);
    QString newParam = reverseCalcParam(code);

    if (param == newParam && code == newCode)
        result = true;
    else
        result = false;

    return result;
}

QString LicenseAlgorithm1::gennerateCode(const QString &param)
{
    QString code("");

    code = QString(param.toLocal8Bit().toHex());

    return code;
}

QString LicenseAlgorithm1::reverseCalcParam(const QString &code)
{
    QString param("");

    param = QString(QByteArray::fromHex(code.toLocal8Bit()));

    return param;
}
