#include "licensefactory.h"
#include "licensealgorithm1.h"

LicenseFactory *LicenseFactory::m_instance = 0;

LicenseFactory::LicenseFactory(QObject *parent) :
    QObject(parent)
{

}

LicenseFactory *LicenseFactory::instance()
{
    if (0 == LicenseFactory::m_instance)
        LicenseFactory::m_instance = new LicenseFactory();

    return LicenseFactory::m_instance;
}

LicenseAbstract *LicenseFactory::create(LicenseAlgorith algorith)
{
    LicenseAbstract *license = 0;

    if (License_a1 == algorith)
        license = new LicenseAlgorithm1();

    return license;
}
