#-------------------------------------------------
#
# Project created by QtCreator 2018-02-12T14:15:41
#
#-------------------------------------------------

QT += core gui

QT += sql

QT += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Calendar
TEMPLATE = app
RC_FILE = MyTime.rc

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    mainwindowtabbed.cpp \
    event.cpp \
    daycalendar.cpp \
    dayview.cpp \
    thedb.cpp \
    login.cpp \
    addeventbutton.cpp \
    activitystats.cpp \
    location.cpp \
    forgotpassword.cpp \
    register.cpp

HEADERS += \
    mainwindowtabbed.h \
    event.h \
    daycalendar.h \
    dayview.h \
    thedb.h \
    login.h \
    addeventbutton.h \
    activitystats.h \
    location.h \
    forgotpassword.h \
    register.h

FORMS += \
    mainwindowtabbed.ui \
    dayview.ui \
    login.ui \
    addeventbutton.ui \
    forgotpassword.ui \
    register.ui

RESOURCES += \
    resources.qrc

DISTFILES += \
    images.png \
    images.png \
    MyTime.rc \
    time_and_date.ico
