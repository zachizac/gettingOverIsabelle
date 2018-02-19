#-------------------------------------------------
#
# Project created by QtCreator 2014-10-30T20:23:44
#
#-------------------------------------------------

QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FlappyBird
TEMPLATE = app

INCLUDEPATH += "C:\Program Files\Immersion Corporation\IFC23\inc"

LIBS += "C:\Program Files\Immersion Corporation\IFC23\lib\IFC23.lib"


SOURCES += main.cpp\
        mainwindow.cpp \
    gameelement.cpp \
    elebackground.cpp \
    eleground.cpp \
    elepipe.cpp \
    elebird.cpp \
    elescoreboard.cpp \
    elereadyboard.cpp \
    eleoverboard.cpp \
    eletitleboard.cpp \
    gestion_haptique.cpp

HEADERS  += mainwindow.h \
    gameelement.h \
    elebackground.h \
    eleground.h \
    elepipe.h \
    elebird.h \
    elescoreboard.h \
    elereadyboard.h \
    eleoverboard.h \
    eletitleboard.h \
    gestion_haptique.h

RESOURCES += \
    resource/image.qrc \
    resource/sounds.qrc

OTHER_FILES +=
