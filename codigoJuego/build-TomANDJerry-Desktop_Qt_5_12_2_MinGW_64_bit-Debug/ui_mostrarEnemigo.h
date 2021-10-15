/********************************************************************************
** Form generated from reading UI file 'mostrarenemigo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOSTRARENEMIGO_H
#define UI_MOSTRARENEMIGO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_mostrarenemigo
{
public:
    QLabel *label_3;
    QTextBrowser *text1;
    QLabel *label_4;
    QPushButton *BotonSpyke;
    QPushButton *pushButton;
    QTextBrowser *text4;
    QTextBrowser *text2;
    QPushButton *BotonTrampa;
    QTextBrowser *text3;
    QLabel *label_2;
    QPushButton *BotonTyke;
    QLabel *label;
    QPushButton *BotonHueso;

    void setupUi(QDialog *mostrarenemigo)
    {
        if (mostrarenemigo->objectName().isEmpty())
            mostrarenemigo->setObjectName(QString::fromUtf8("mostrarenemigo"));
        mostrarenemigo->resize(561, 441);
        label_3 = new QLabel(mostrarenemigo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 220, 91, 91));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/ImagenesJuego/Extras/flecha.png")));
        label_3->setScaledContents(true);
        text1 = new QTextBrowser(mostrarenemigo);
        text1->setObjectName(QString::fromUtf8("text1"));
        text1->setGeometry(QRect(20, 10, 521, 371));
        text1->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        label_4 = new QLabel(mostrarenemigo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 220, 111, 101));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/ImagenesJuego/Extras/flecha.png")));
        label_4->setScaledContents(true);
        BotonSpyke = new QPushButton(mostrarenemigo);
        BotonSpyke->setObjectName(QString::fromUtf8("BotonSpyke"));
        BotonSpyke->setGeometry(QRect(220, 230, 261, 141));
        BotonSpyke->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ImagenesJuego/Extras/enemi4.png"), QSize(), QIcon::Normal, QIcon::Off);
        BotonSpyke->setIcon(icon);
        BotonSpyke->setIconSize(QSize(210, 126));
        BotonSpyke->setFlat(true);
        pushButton = new QPushButton(mostrarenemigo);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(430, 390, 111, 41));
        text4 = new QTextBrowser(mostrarenemigo);
        text4->setObjectName(QString::fromUtf8("text4"));
        text4->setGeometry(QRect(20, 10, 521, 371));
        text2 = new QTextBrowser(mostrarenemigo);
        text2->setObjectName(QString::fromUtf8("text2"));
        text2->setGeometry(QRect(20, 10, 521, 371));
        BotonTrampa = new QPushButton(mostrarenemigo);
        BotonTrampa->setObjectName(QString::fromUtf8("BotonTrampa"));
        BotonTrampa->setGeometry(QRect(160, 240, 331, 121));
        BotonTrampa->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ImagenesJuego/Extras/enemi3.png"), QSize(), QIcon::Normal, QIcon::Off);
        BotonTrampa->setIcon(icon1);
        BotonTrampa->setIconSize(QSize(310, 114));
        BotonTrampa->setFlat(true);
        text3 = new QTextBrowser(mostrarenemigo);
        text3->setObjectName(QString::fromUtf8("text3"));
        text3->setGeometry(QRect(20, 10, 521, 371));
        label_2 = new QLabel(mostrarenemigo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 220, 101, 81));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/ImagenesJuego/Extras/flecha.png")));
        label_2->setScaledContents(true);
        BotonTyke = new QPushButton(mostrarenemigo);
        BotonTyke->setObjectName(QString::fromUtf8("BotonTyke"));
        BotonTyke->setGeometry(QRect(170, 220, 211, 141));
        BotonTyke->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ImagenesJuego/Extras/enemi1.png"), QSize(), QIcon::Normal, QIcon::Off);
        BotonTyke->setIcon(icon2);
        BotonTyke->setIconSize(QSize(154, 111));
        BotonTyke->setFlat(true);
        label = new QLabel(mostrarenemigo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(79, 220, 81, 71));
        label->setPixmap(QPixmap(QString::fromUtf8(":/ImagenesJuego/Extras/flecha.png")));
        label->setScaledContents(true);
        BotonHueso = new QPushButton(mostrarenemigo);
        BotonHueso->setObjectName(QString::fromUtf8("BotonHueso"));
        BotonHueso->setGeometry(QRect(150, 220, 331, 151));
        BotonHueso->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ImagenesJuego/Extras/enemi2.png"), QSize(), QIcon::Normal, QIcon::Off);
        BotonHueso->setIcon(icon3);
        BotonHueso->setIconSize(QSize(274, 145));
        BotonHueso->setFlat(true);

        retranslateUi(mostrarenemigo);

        BotonTyke->setDefault(false);


        QMetaObject::connectSlotsByName(mostrarenemigo);
    } // setupUi

    void retranslateUi(QDialog *mostrarenemigo)
    {
        mostrarenemigo->setWindowTitle(QApplication::translate("mostrarenemigo", "Dialog", nullptr));
        label_3->setText(QString());
        text1->setHtml(QApplication::translate("mostrarenemigo", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                                             <img src=\":/ImagenesJuego/Extras/enemi.png\" /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/ImagenesJuego/Extras/3.png\" /> <span style=\" font-size:11pt; font-weight:600;\">TORTUGAS:</span></p>\n"
"<p align=\"justify\" style=\" margin-top"
                        ":0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#363636;\">CUIDADO! estas tortugas son algo peligrosas,pero tambien son bastante lentas , suelen aparecer desde el primer nivel; si te topas con ellas perderas </span><span style=\" font-size:14pt; font-weight:600; color:#363636;\">1</span><span style=\" font-size:14pt; color:#363636;\"> vida.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">		   </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">	                                                </span></p>\n"
"<p style=\""
                        "-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_4->setText(QString());
        BotonSpyke->setText(QString());
        pushButton->setText(QApplication::translate("mostrarenemigo", "Siguiente", nullptr));
        text4->setHtml(QApplication::translate("mostrarenemigo", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">		           </span><img src=\":/ImagenesJuego/Extras/enemi.png\" /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/ImagenesJuego/Extras/3.png\" /><span style=\" font-size:12pt; font-weight:600;\"> ENEMIGO FINAL:</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#363636;\">El enemigo final e"
                        "s el mas fuerte y peligroso de todos; este enemigo aparecer\303\241 en el </span><span style=\" font-size:14pt; font-weight:600; color:#363636;\">ultimo nivel</span><span style=\" font-size:14pt; color:#363636;\">. Si chocas con el te </span><span style=\" font-size:14pt; font-weight:600; color:#363636;\">matar\303\241</span><span style=\" font-size:14pt; color:#363636;\"> sin importar las vidas que tengas, asi que evitalo a toda cosa.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                                         </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">                                                                              </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-inde"
                        "nt:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p></body></html>", nullptr));
        text2->setHtml(QApplication::translate("mostrarenemigo", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                                              <img src=\":/ImagenesJuego/Extras/enemi.png\" /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/ImagenesJuego/Extras/3.png\" /><span style=\" font-size:12pt;\"> </span><span style=\" font-size:12pt; font-weight:600;\">RASENGAN:</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-s"
                        "ize:14pt; color:#363636;\">Los rasengan son bolas de energia bastantes poderosas,suelen ser mas rapidos que las tortugas; estos tambien aparecen en el nivel uno. Si los golpeas  perderas </span><span style=\" font-size:14pt; font-weight:600; color:#363636;\">2</span><span style=\" font-size:14pt; color:#363636;\"> vidas, asi que ten cuidado.</span><span style=\" font-size:8pt;\">	       	                                                      </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                      </p></body></html>", nullptr));
        BotonTrampa->setText(QString());
        text3->setHtml(QApplication::translate("mostrarenemigo", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#363636;\">                                                                </span><img src=\":/ImagenesJuego/Extras/enemi.png\" /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#363636;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/ImagenesJuego/Extras/3.png\" /><span style=\" font-size:8pt; color:#363636;"
                        "\"> </span><span style=\" font-size:12pt; font-weight:600; color:#363636;\">RAYOS:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#363636;\">Los rayos estan llenos de electricidad que te pueden hacer retorcer;estos aparecen apartir del </span><span style=\" font-size:14pt; font-weight:600; color:#363636;\">nivel 2</span><span style=\" font-size:14pt; color:#363636;\">. Si dejas que te toquen quedar\303\241s con </span><span style=\" font-size:14pt; font-weight:600; color:#363636;\">0 </span><span style=\" font-size:14pt; color:#363636;\"> vidas, evitalos!</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#363636;\">		</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">               "
                        "                    <span style=\" font-size:8pt; color:#363636;\"> 	                       </span><span style=\" color:#363636;\">		                   </span></p></body></html>", nullptr));
        label_2->setText(QString());
        BotonTyke->setText(QString());
        label->setText(QString());
        BotonHueso->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mostrarenemigo: public Ui_mostrarenemigo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOSTRARENEMIGO_H
