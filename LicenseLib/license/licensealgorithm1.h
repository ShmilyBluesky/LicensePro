#ifndef LICENSEALGORITHM1_H
#define LICENSEALGORITHM1_H

#include "licenseabstract.h"

class LicenseAlgorithm1 : public LicenseAbstract
{
public:
    LicenseAlgorithm1();

public:
    // 校验参数与验证码
    bool checkout(const QString& param, const QString& code);
    // 由参数计算出验证码
    QString gennerateCode(const QString& param);
    // 由验证码反向计算出参数
    QString reverseCalcParam(const QString& code);
};

#endif // LICENSEALGORITHM1_H
