#ifndef LICENSELIB_GLOBAL_H
#define LICENSELIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LICENSELIB_LIBRARY)
#  define LICENSELIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define LICENSELIBSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // LICENSELIB_GLOBAL_H
