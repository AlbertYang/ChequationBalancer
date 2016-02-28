#-------------------------------------------------
#
# Project created by QtCreator 2013-03-23T14:29:25
#
#-------------------------------------------------

QT       += core gui

TARGET = Chemistry
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    keyboard.cpp \
    warnningbox.cpp \
    help_dlg.cpp

HEADERS  += mainwindow.h \
    keyboard.h \
    warnningbox.h \
    help_dlg.h

FORMS    += mainwindow.ui \
    keyboard.ui \
    warnningbox.ui \
    help_dlg.ui

RESOURCES += \
    background.qrc
	
RC_FILE += appIcon.rc
