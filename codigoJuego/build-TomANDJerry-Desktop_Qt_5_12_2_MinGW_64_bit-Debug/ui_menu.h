/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QAction *actionInstrucciones;
    QAction *actionEnemigos;
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *UnJugador;
    QPushButton *Multijugador;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuWar_Fly;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->setEnabled(true);
        Menu->resize(1481, 846);
        QFont font;
        font.setFamily(QString::fromUtf8("MS Gothic"));
        Menu->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ImagenesJuego/Extras/B1.png"), QSize(), QIcon::Normal, QIcon::Off);
        Menu->setWindowIcon(icon);
        Menu->setAnimated(true);
        Menu->setDocumentMode(false);
        actionInstrucciones = new QAction(Menu);
        actionInstrucciones->setObjectName(QString::fromUtf8("actionInstrucciones"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ImagenesJuego/Icono/informacionJuego.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInstrucciones->setIcon(icon1);
        actionEnemigos = new QAction(Menu);
        actionEnemigos->setObjectName(QString::fromUtf8("actionEnemigos"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ImagenesJuego/Icono/informacionEnemigo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEnemigos->setIcon(icon2);
        centralwidget = new QWidget(Menu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setLayoutDirection(Qt::LeftToRight);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(49, 10, 1281, 711));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 85, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(127, 170, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(63, 127, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 42, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 57, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(0, 0, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush8(QColor(0, 0, 0, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
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
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
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
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        label->setPalette(palette);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Showcard Gothic"));
        label->setFont(font1);
        label->setPixmap(QPixmap(QString::fromUtf8(":/ImagenesJuego/Fondos/fondoMenu.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        UnJugador = new QPushButton(centralwidget);
        UnJugador->setObjectName(QString::fromUtf8("UnJugador"));
        UnJugador->setGeometry(QRect(40, 620, 431, 70));
        QPalette palette1;
        QBrush brush9(QColor(255, 0, 0, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush9);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush9);
        QBrush brush10(QColor(255, 0, 0, 128));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush9);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        QBrush brush11(QColor(120, 120, 120, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        UnJugador->setPalette(palette1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Showcard Gothic"));
        font2.setPointSize(22);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        UnJugador->setFont(font2);
        UnJugador->setCursor(QCursor(Qt::PointingHandCursor));
        UnJugador->setMouseTracking(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ImagenesJuego/Otros/queso.png"), QSize(), QIcon::Normal, QIcon::Off);
        UnJugador->setIcon(icon3);
        UnJugador->setIconSize(QSize(90, 90));
        UnJugador->setFlat(true);
        Multijugador = new QPushButton(centralwidget);
        Multijugador->setObjectName(QString::fromUtf8("Multijugador"));
        Multijugador->setGeometry(QRect(510, 620, 351, 70));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        Multijugador->setPalette(palette2);
        Multijugador->setFont(font2);
        Multijugador->setCursor(QCursor(Qt::PointingHandCursor));
        Multijugador->setMouseTracking(false);
        Multijugador->setIcon(icon3);
        Multijugador->setIconSize(QSize(90, 90));
        Multijugador->setFlat(true);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(43, -1, 1291, 21));
        QPalette palette3;
        QBrush brush12(QColor(255, 255, 255, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush12);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush13(QColor(255, 255, 255, 128));
        brush13.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        line->setPalette(palette3);
        line->setFrameShadow(QFrame::Sunken);
        line->setLineWidth(0);
        line->setMidLineWidth(10);
        line->setFrameShape(QFrame::HLine);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(1319, 9, 20, 719));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush12);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        line_2->setPalette(palette4);
        line_2->setLineWidth(0);
        line_2->setMidLineWidth(10);
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(50, 715, 1281, 16));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush12);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        line_3->setPalette(palette5);
        line_3->setLineWidth(0);
        line_3->setMidLineWidth(10);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(38, 7, 20, 721));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush12);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        line_4->setPalette(palette6);
        line_4->setLineWidth(0);
        line_4->setMidLineWidth(10);
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(920, 620, 361, 70));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        pushButton->setPalette(palette7);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Showcard Gothic"));
        font3.setPointSize(22);
        font3.setBold(false);
        font3.setWeight(50);
        pushButton->setFont(font3);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(90, 90));
        pushButton->setAutoDefault(false);
        pushButton->setFlat(true);
        Menu->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(Menu);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1481, 34));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Schadow BT"));
        font4.setPointSize(18);
        font4.setBold(true);
        font4.setWeight(75);
        menuBar->setFont(font4);
        menuWar_Fly = new QMenu(menuBar);
        menuWar_Fly->setObjectName(QString::fromUtf8("menuWar_Fly"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Schadow BT"));
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(75);
        menuWar_Fly->setFont(font5);
        Menu->setMenuBar(menuBar);
        toolBar = new QToolBar(Menu);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setIconSize(QSize(50, 38));
        Menu->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuWar_Fly->menuAction());
        menuWar_Fly->addAction(actionInstrucciones);
        menuWar_Fly->addSeparator();
        menuWar_Fly->addAction(actionEnemigos);
        toolBar->addAction(actionInstrucciones);
        toolBar->addSeparator();
        toolBar->addAction(actionEnemigos);
        toolBar->addSeparator();

        retranslateUi(Menu);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Menu", nullptr));
        actionInstrucciones->setText(QApplication::translate("Menu", "\302\277Como se juega?", nullptr));
        actionEnemigos->setText(QApplication::translate("Menu", "Acerca de los enemigos", nullptr));
        label->setText(QString());
        UnJugador->setText(QApplication::translate("Menu", "  UN JUGADOR", nullptr));
        Multijugador->setText(QApplication::translate("Menu", "  Multijugador", nullptr));
        pushButton->setText(QApplication::translate("Menu", "  Cargar partida", nullptr));
        menuWar_Fly->setTitle(QApplication::translate("Menu", "Tom&Jerry", nullptr));
        toolBar->setWindowTitle(QApplication::translate("Menu", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
