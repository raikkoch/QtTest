#-------------------------------------------------
#
# Project created by QtCreator 2015-11-01T18:39:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtTest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    person.cpp \
    dateneingabe.cpp

HEADERS  += mainwindow.h \
    person.h \
    dateneingabe.h

FORMS    += mainwindow.ui \
    dateneingabe.ui
