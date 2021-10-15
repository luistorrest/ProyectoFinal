/********************************************************************************
** Form generated from reading UI file 'mostrarenemigos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOSTRARENEMIGOS_H
#define UI_MOSTRARENEMIGOS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_mostrarenemigos
{
public:
    QTextBrowser *text2;
    QPushButton *BotonHueso;
    QPushButton *pushButton;
    QPushButton *BotonTyke;
    QTextBrowser *text1;
    QPushButton *BotonSpyke;
    QPushButton *BotonTrampa;
    QTextBrowser *text3;
    QTextBrowser *text4;

    void setupUi(QDialog *mostrarenemigos)
    {
        if (mostrarenemigos->objectName().isEmpty())
            mostrarenemigos->setObjectName(QString::fromUtf8("mostrarenemigos"));
        mostrarenemigos->resize(561, 441);
        text2 = new QTextBrowser(mostrarenemigos);
        text2->setObjectName(QString::fromUtf8("text2"));
        text2->setGeometry(QRect(20, 10, 521, 371));
        BotonHueso = new QPushButton(mostrarenemigos);
        BotonHueso->setObjectName(QString::fromUtf8("BotonHueso"));
        BotonHueso->setGeometry(QRect(150, 220, 331, 151));
        BotonHueso->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ImagenesJuego/Otros/Hueso.png"), QSize(), QIcon::Normal, QIcon::Off);
        BotonHueso->setIcon(icon);
        BotonHueso->setIconSize(QSize(274, 145));
        BotonHueso->setFlat(true);
        pushButton = new QPushButton(mostrarenemigos);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(430, 390, 111, 41));
        BotonTyke = new QPushButton(mostrarenemigos);
        BotonTyke->setObjectName(QString::fromUtf8("BotonTyke"));
        BotonTyke->setGeometry(QRect(170, 220, 211, 141));
        BotonTyke->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ImagenesJuego/Otros/tyke.png"), QSize(), QIcon::Normal, QIcon::Off);
        BotonTyke->setIcon(icon1);
        BotonTyke->setIconSize(QSize(154, 111));
        BotonTyke->setFlat(true);
        text1 = new QTextBrowser(mostrarenemigos);
        text1->setObjectName(QString::fromUtf8("text1"));
        text1->setGeometry(QRect(20, 10, 521, 371));
        text1->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        BotonSpyke = new QPushButton(mostrarenemigos);
        BotonSpyke->setObjectName(QString::fromUtf8("BotonSpyke"));
        BotonSpyke->setGeometry(QRect(220, 230, 261, 141));
        BotonSpyke->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ImagenesJuego/Otros/spyke.png"), QSize(), QIcon::Normal, QIcon::Off);
        BotonSpyke->setIcon(icon2);
        BotonSpyke->setIconSize(QSize(210, 126));
        BotonSpyke->setFlat(true);
        BotonTrampa = new QPushButton(mostrarenemigos);
        BotonTrampa->setObjectName(QString::fromUtf8("BotonTrampa"));
        BotonTrampa->setGeometry(QRect(160, 240, 331, 121));
        BotonTrampa->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ImagenesJuego/Otros/trampa.png"), QSize(), QIcon::Normal, QIcon::Off);
        BotonTrampa->setIcon(icon3);
        BotonTrampa->setIconSize(QSize(310, 114));
        BotonTrampa->setFlat(true);
        text3 = new QTextBrowser(mostrarenemigos);
        text3->setObjectName(QString::fromUtf8("text3"));
        text3->setGeometry(QRect(20, 10, 521, 371));
        text4 = new QTextBrowser(mostrarenemigos);
        text4->setObjectName(QString::fromUtf8("text4"));
        text4->setGeometry(QRect(20, 10, 521, 371));
        pushButton->raise();
        text3->raise();
        text2->raise();
        text1->raise();
        text4->raise();
        BotonHueso->raise();
        BotonSpyke->raise();
        BotonTrampa->raise();
        BotonTyke->raise();

        retranslateUi(mostrarenemigos);

        BotonTyke->setDefault(false);


        QMetaObject::connectSlotsByName(mostrarenemigos);
    } // setupUi

    void retranslateUi(QDialog *mostrarenemigos)
    {
        mostrarenemigos->setWindowTitle(QApplication::translate("mostrarenemigos", "Dialog", nullptr));
        text2->setHtml(QApplication::translate("mostrarenemigos", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                                              </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Hueso:</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#363636;\">Descripcion de como funciona el enemigo tipo hueso.</span><span style=\" font-size:8pt;\">       	           "
                        "                                           </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                      </p></body></html>", nullptr));
        BotonHueso->setText(QString());
        pushButton->setText(QApplication::translate("mostrarenemigos", "Siguiente", nullptr));
        BotonTyke->setText(QString());
        text1->setHtml(QApplication::translate("mostrarenemigos", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                                             </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600;\">TYKE:</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\""
                        "><span style=\" font-size:14pt; color:#363636;\">Descripcion de Tyke</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">		   </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">	                                                </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        BotonSpyke->setText(QString());
        BotonTrampa->setText(QString());
        text3->setHtml(QApplication::translate("mostrarenemigos", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#363636;\">                                                                </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#363636;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#363636;\"> </span><span style=\" font-size:12pt; font-weight:600; color:#363636;\">Trampa:</span></"
                        "p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#363636;\">Descripcion de como funcionan los enemigos tipo trampa</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#363636;\">		</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                   <span style=\" font-size:8pt; color:#363636;\"> 	                       </span><span style=\" color:#363636;\">		                   </span></p></body></html>", nullptr));
        text4->setHtml(QApplication::translate("mostrarenemigos", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">		           </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Spyke:</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#363636;\">Descripcion del enemigo Spyke</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-rig"
                        "ht:0px; -qt-block-indent:0; text-indent:0px;\">                                                         </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">                                                                              </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mostrarenemigos: public Ui_mostrarenemigos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOSTRARENEMIGOS_H
