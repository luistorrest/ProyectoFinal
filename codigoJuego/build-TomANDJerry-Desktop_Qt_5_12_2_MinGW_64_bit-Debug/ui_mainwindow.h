/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionIniciar;
    QAction *actionDetener;
    QAction *actionReincicar;
    QAction *actionRegresar_al_menu;
    QAction *actionGuardar;
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QLabel *label_2;
    QLCDNumber *Vida;
    QLabel *label_3;
    QLabel *label_5;
    QLCDNumber *Distancia;
    QLabel *label_6;
    QLCDNumber *Monedas;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QMenuBar *menuBar;
    QMenu *menuWar_Fly;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1449, 719);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(98, 161, 232, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(201, 226, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(149, 193, 243, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(49, 81, 116, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(65, 107, 155, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(176, 208, 243, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        MainWindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ImagenesJuego/Extras/B1.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionIniciar = new QAction(MainWindow);
        actionIniciar->setObjectName(QString::fromUtf8("actionIniciar"));
        actionIniciar->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ImagenesJuego/Icono/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionIniciar->setIcon(icon1);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        actionIniciar->setFont(font);
        actionDetener = new QAction(MainWindow);
        actionDetener->setObjectName(QString::fromUtf8("actionDetener"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ImagenesJuego/Icono/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDetener->setIcon(icon2);
        actionDetener->setFont(font);
        actionReincicar = new QAction(MainWindow);
        actionReincicar->setObjectName(QString::fromUtf8("actionReincicar"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ImagenesJuego/Icono/reiniciar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReincicar->setIcon(icon3);
        actionReincicar->setFont(font);
        actionRegresar_al_menu = new QAction(MainWindow);
        actionRegresar_al_menu->setObjectName(QString::fromUtf8("actionRegresar_al_menu"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/ImagenesJuego/Icono/menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRegresar_al_menu->setIcon(icon4);
        actionRegresar_al_menu->setFont(font);
        actionGuardar = new QAction(MainWindow);
        actionGuardar->setObjectName(QString::fromUtf8("actionGuardar"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/ImagenesJuego/Icono/guardar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardar->setIcon(icon5);
        actionGuardar->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setEnabled(true);
        graphicsView->setGeometry(QRect(123, 20, 1050, 498));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 560, 71, 51));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Extras/Vidas.png")));
        label_2->setScaledContents(true);
        Vida = new QLCDNumber(centralWidget);
        Vida->setObjectName(QString::fromUtf8("Vida"));
        Vida->setGeometry(QRect(140, 540, 201, 81));
        Vida->setFrameShape(QFrame::WinPanel);
        Vida->setSmallDecimalPoint(true);
        Vida->setDigitCount(4);
        Vida->setMode(QLCDNumber::Dec);
        Vida->setSegmentStyle(QLCDNumber::Flat);
        Vida->setProperty("value", QVariant(0.000000000000000));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 540, 81, 81));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/ImagenesJuego/Otros/Vidas.png")));
        label_3->setScaledContents(true);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(930, 550, 71, 61));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/ImagenesJuego/Otros/Distancia.png")));
        label_5->setScaledContents(true);
        Distancia = new QLCDNumber(centralWidget);
        Distancia->setObjectName(QString::fromUtf8("Distancia"));
        Distancia->setGeometry(QRect(880, 540, 221, 81));
        Distancia->setStyleSheet(QString::fromUtf8(""));
        Distancia->setFrameShape(QFrame::WinPanel);
        Distancia->setFrameShadow(QFrame::Raised);
        Distancia->setSmallDecimalPoint(true);
        Distancia->setDigitCount(4);
        Distancia->setMode(QLCDNumber::Dec);
        Distancia->setSegmentStyle(QLCDNumber::Flat);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(500, 550, 71, 61));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/ImagenesJuego/Otros/Moneda.png")));
        label_6->setScaledContents(true);
        Monedas = new QLCDNumber(centralWidget);
        Monedas->setObjectName(QString::fromUtf8("Monedas"));
        Monedas->setGeometry(QRect(490, 540, 211, 81));
        Monedas->setFrameShape(QFrame::WinPanel);
        Monedas->setSmallDecimalPoint(true);
        Monedas->setDigitCount(4);
        Monedas->setSegmentStyle(QLCDNumber::Flat);
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(123, 5, 1051, 16));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush10(QColor(0, 0, 127, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush10);
        QBrush brush11(QColor(0, 0, 190, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush11);
        QBrush brush12(QColor(0, 0, 158, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        QBrush brush13(QColor(0, 0, 63, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush13);
        QBrush brush14(QColor(0, 0, 85, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush15(QColor(255, 255, 255, 128));
        brush15.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        line->setPalette(palette1);
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(10);
        line->setMidLineWidth(0);
        line->setFrameShape(QFrame::HLine);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(1170, 10, 16, 508));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush15);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush15);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        line_2->setPalette(palette2);
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(10);
        line_2->setMidLineWidth(0);
        line_2->setFrameShape(QFrame::VLine);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(120, 510, 1061, 21));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush16(QColor(120, 120, 120, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        line_3->setPalette(palette3);
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setLineWidth(10);
        line_3->setMidLineWidth(0);
        line_3->setFrameShape(QFrame::HLine);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(110, 10, 16, 511));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush17(QColor(255, 85, 0, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush17);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush17);
        QBrush brush18(QColor(255, 85, 0, 128));
        brush18.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush18);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush17);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush17);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush18);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush16);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush16);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        line_4->setPalette(palette4);
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setLineWidth(10);
        line_4->setMidLineWidth(0);
        line_4->setFrameShape(QFrame::VLine);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1449, 27));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        menuBar->setFont(font1);
        menuWar_Fly = new QMenu(menuBar);
        menuWar_Fly->setObjectName(QString::fromUtf8("menuWar_Fly"));
        MainWindow->setMenuBar(menuBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setIconSize(QSize(40, 30));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuWar_Fly->menuAction());
        menuWar_Fly->addAction(actionIniciar);
        menuWar_Fly->addSeparator();
        menuWar_Fly->addAction(actionDetener);
        menuWar_Fly->addSeparator();
        menuWar_Fly->addAction(actionReincicar);
        menuWar_Fly->addSeparator();
        menuWar_Fly->addAction(actionGuardar);
        menuWar_Fly->addSeparator();
        menuWar_Fly->addAction(actionRegresar_al_menu);
        menuWar_Fly->addSeparator();
        menuWar_Fly->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionIniciar);
        toolBar->addSeparator();
        toolBar->addAction(actionDetener);
        toolBar->addSeparator();
        toolBar->addAction(actionReincicar);
        toolBar->addSeparator();
        toolBar->addAction(actionGuardar);
        toolBar->addSeparator();
        toolBar->addAction(actionRegresar_al_menu);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "JuegoPPAL", nullptr));
        actionIniciar->setText(QApplication::translate("MainWindow", "Iniciar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionIniciar->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_NO_SHORTCUT
        actionDetener->setText(QApplication::translate("MainWindow", "Detener", nullptr));
#ifndef QT_NO_SHORTCUT
        actionDetener->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionReincicar->setText(QApplication::translate("MainWindow", "Reincicar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionReincicar->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_NO_SHORTCUT
        actionRegresar_al_menu->setText(QApplication::translate("MainWindow", "Regresar al menu", nullptr));
        actionGuardar->setText(QApplication::translate("MainWindow", "Guardar", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        menuWar_Fly->setTitle(QApplication::translate("MainWindow", "Tom&Jerry", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
