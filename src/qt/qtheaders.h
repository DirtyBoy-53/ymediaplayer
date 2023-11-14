#pragma once

#include "ygl.h"
#include "hv.h"
#include <QtCore/QtCore>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <ylog.h>
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

#define DATE qPrintable(QDate::currentDate().toString("yyyy-MM-dd"))
#define TIME qPrintable(QTime::currentTime().toString("hh:mm:ss"))
#define DATETIME qPrintable(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"))

#define TIMEMS qPrintable(QTime::currentTime().toString("hh:mm:ss zzz"))
#define DATETIMENBSP qPrintable(QDateTime::currentDateTime().toString("yyyy-MM-dd-hh-mm-ss"))
#define DATETIMEMSNBSP qPrintable(QDateTime::currentDateTime().toString("yyyy-MM-dd-hh-mm-ss-zzz"))

#define DESKTOP_WIDTH   qApp->desktop()->availableGeometry().width()
#define DESKTOP_HEIGHT  qApp->desktop()->availableGeometry().height()

#include "qtfunctions.h"