#ifndef LICENSETOOL_H
#define LICENSETOOL_H

#include <QObject>
#include "licenselib_global.h"

class LICENSELIBSHARED_EXPORT LicenseTool : public QObject
{
    Q_OBJECT
public:
    explicit LicenseTool(QObject *parent = 0);

public:
    // 校验参数与验证码
    bool checkout(const QString& param, const QString& code);
    // 由参数计算出验证码
    QString gennerateCode(const QString& param);
    // 由验证码反向计算出参数
    QString reverseCalcParam(const QString& code);

signals:

public slots:

};

#endif // LICENSETOOL_H
