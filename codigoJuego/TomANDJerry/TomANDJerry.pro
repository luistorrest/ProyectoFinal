QT       += core gui
QT       += core gui multimedia  serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    menu.cpp \
    mostrarenemigos.cpp \
    mostrarobstaculos.cpp \
    mostrarpersonaje.cpp \
    mostrarresultados.cpp \
    moverobstaculos.cpp \
    moverpersonaje.cpp \
    opcion.cpp


HEADERS += \
    mainwindow.h \
    menu.h \
    mostrarenemigos.h \
    mostrarobstaculos.h \
    mostrarpersonaje.h \
    mostrarresultados.h \
    moverobstaculos.h \
    moverpersonaje.h \
    opcion.h





FORMS += \
    mainwindow.ui \
    menu.ui \
    mostrarenemigos.ui \
    mostrarresultados.ui \
    opcion.ui





# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Imagenes.qrc \
    sonidos.qrc

DISTFILES +=
