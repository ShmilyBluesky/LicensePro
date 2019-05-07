#ifndef LICENSEABSTRACT_H
#define LICENSEABSTRACT_H

#include <QString>

class LicenseAbstract;

class LocalLicense
{
public:
    LocalLicense(LicenseAbstract* license = 0) :
        m_license(license)
    {

    }

    ~LocalLicense()
    {
        if (0 != m_license)
        {
            delete m_license;
            m_license = 0;
        }
    }

    // license是否有效
    bool isValid() const
    {
        if (0 == m_license)
            return false;
        else
            return true;
    }

    // 获取license
    LicenseAbstract* license()
    {
        return m_license;
    }

private:
    LicenseAbstract *m_license;
};

class LicenseAbstract
{
public:
    // 构造
    LicenseAbstract()
    {
    }

    // 析构
    virtual ~LicenseAbstract()
    {
    }

public:
    // 校验参数与验证码
    virtual bool checkout(const QString& param, const QString& code) = 0;
    // 由参数计算出验证码
    virtual QString gennerateCode(const QString& param) = 0;
    // 由验证码反向计算出参数
    virtual QString reverseCalcParam(const QString& code) = 0;
};

#endif // LICENSEABSTRACT_H
