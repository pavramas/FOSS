#-------------------------------------------------
#
# Project created by QtCreator 2015-09-01T16:10:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DataVisualizer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    stackform.cpp \
    queueform.cpp

HEADERS  += mainwindow.h \
    stackform.h \
    queueform.h

FORMS    += mainwindow.ui \
    stackform.ui \
    queueform.ui
