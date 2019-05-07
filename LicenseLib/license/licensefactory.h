#ifndef LICENSEFACTORY_H
#define LICENSEFACTORY_H

#include <QObject>

class LicenseAbstract;

enum LicenseAlgorith
{
    License_a1,             //
};

class LicenseFactory : public QObject
{
    Q_OBJECT
protected:
    explicit LicenseFactory(QObject *parent = 0);

public:
    static LicenseFactory* instance();

    // 生成License
    LicenseAbstract *create(LicenseAlgorith algorith);

signals:

public slots:

private:
    static LicenseFactory* m_instance;
};

#endif // LICENSEFACTORY_H
