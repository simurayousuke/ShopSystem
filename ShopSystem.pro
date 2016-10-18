#-------------------------------------------------
#
# Project created by QtCreator 2016-10-17T20:45:38
#
#-------------------------------------------------

QT       += core gui
QT += network
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ShopSystem
TEMPLATE = app


SOURCES += main.cpp\
        loginwindow.cpp \
    Manager/databasemanager.cpp

HEADERS  += loginwindow.h \
    Manager/databasemanager.h

FORMS    += loginwindow.ui
