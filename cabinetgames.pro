#-------------------------------------------------
#
# Project created by QtCreator 2017-10-31T23:15:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cabinetgames
TEMPLATE = app


SOURCES += main.cpp\
    mainwindow.cpp \
    tetrisgridview.cpp \
    tetrisgrid.cpp

HEADERS  += \
    mainwindow.h \
    view/tetrisgrid.h \
    tetrisgridview.h \
    tetrisgrid.h

FORMS    += \
    mainwindow.ui \
    tetrisgridview.ui
