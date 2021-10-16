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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_mostrarenemigos
{
public:
    QPushButton *BotonTyke;
    QPushButton *BotonHueso;
    QTextBrowser *text3;
    QLabel *label_4;
    QLabel *label;
    QTextBrowser *text4;
    QPushButton *pushButton;
    QTextBrowser *text2;
    QPushButton *BotonSpyke;
    QTextBrowser *text1;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *BotonTrampa;

    void setupUi(QDialog *mostrarenemigos)
    {
        if (mostrarenemigos->objectName().isEmpty())
            mostrarenemigos->setObjectName(QString::fromUtf8("mostrarenemigos"));
        mostrarenemigos->resize(561, 441);
        BotonTyke = new QPushButton(mostrarenemigos);
        BotonTyke->setObjectName(QString::fromUtf8("BotonTyke"));
        BotonTyke->setGeometry(QRect(160, 220, 211, 141));
        BotonTyke->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ImagenesJuego/Otros/tyke.png"), QSize(), QIcon::Normal, QIcon::Off);
        BotonTyke->setIcon(icon);
        BotonTyke->setIconSize(QSize(154, 111));
        BotonTyke->setFlat(true);
        BotonHueso = new QPushButton(mostrarenemigos);
        BotonHueso->setObjectName(QString::fromUtf8("BotonHueso"));
        BotonHueso->setGeometry(QRect(140, 220, 331, 151));
        BotonHueso->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ImagenesJuego/Otros/Hueso.png"), QSize(), QIcon::Normal, QIcon::Off);
        BotonHueso->setIcon(icon1);
        BotonHueso->setIconSize(QSize(274, 145));
        BotonHueso->setFlat(true);
        text3 = new QTextBrowser(mostrarenemigos);
        text3->setObjectName(QString::fromUtf8("text3"));
        text3->setGeometry(QRect(10, 10, 521, 371));
        label_4 = new QLabel(mostrarenemigos);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 220, 111, 101));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/ImagenesJuego/Extras/flecha.png")));
        label_4->setScaledContents(true);
        label = new QLabel(mostrarenemigos);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(69, 220, 81, 71));
        label->setPixmap(QPixmap(QString::fromUtf8(":/ImagenesJuego/Extras/flecha.png")));
        label->setScaledContents(true);
        text4 = new QTextBrowser(mostrarenemigos);
        text4->setObjectName(QString::fromUtf8("text4"));
        text4->setGeometry(QRect(10, 10, 521, 371));
        pushButton = new QPushButton(mostrarenemigos);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(420, 390, 111, 41));
        text2 = new QTextBrowser(mostrarenemigos);
        text2->setObjectName(QString::fromUtf8("text2"));
        text2->setGeometry(QRect(10, 10, 521, 371));
        BotonSpyke = new QPushButton(mostrarenemigos);
        BotonSpyke->setObjectName(QString::fromUtf8("BotonSpyke"));
        BotonSpyke->setGeometry(QRect(210, 230, 261, 141));
        BotonSpyke->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ImagenesJuego/Otros/spyke.png"), QSize(), QIcon::Normal, QIcon::Off);
        BotonSpyke->setIcon(icon2);
        BotonSpyke->setIconSize(QSize(210, 126));
        BotonSpyke->setFlat(true);
        text1 = new QTextBrowser(mostrarenemigos);
        text1->setObjectName(QString::fromUtf8("text1"));
        text1->setGeometry(QRect(10, 10, 521, 371));
        text1->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        label_2 = new QLabel(mostrarenemigos);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 220, 101, 81));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/ImagenesJuego/Extras/flecha.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(mostrarenemigos);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 220, 91, 91));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/ImagenesJuego/Extras/flecha.png")));
        label_3->setScaledContents(true);
        BotonTrampa = new QPushButton(mostrarenemigos);
        BotonTrampa->setObjectName(QString::fromUtf8("BotonTrampa"));
        BotonTrampa->setGeometry(QRect(150, 240, 331, 121));
        BotonTrampa->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ImagenesJuego/Otros/trampa.png"), QSize(), QIcon::Normal, QIcon::Off);
        BotonTrampa->setIcon(icon3);
        BotonTrampa->setIconSize(QSize(310, 114));
        BotonTrampa->setFlat(true);
        BotonTrampa->raise();
        BotonSpyke->raise();
        BotonHueso->raise();
        text4->raise();
        text3->raise();
        text2->raise();
        label_4->raise();
        label->raise();
        pushButton->raise();
        text1->raise();
        label_2->raise();
        label_3->raise();
        BotonTyke->raise();

        retranslateUi(mostrarenemigos);

        BotonTyke->setDefault(false);


        QMetaObject::connectSlotsByName(mostrarenemigos);
    } // setupUi

    void retranslateUi(QDialog *mostrarenemigos)
    {
        mostrarenemigos->setWindowTitle(QApplication::translate("mostrarenemigos", "Dialog", nullptr));
        BotonTyke->setText(QString());
        BotonHueso->setText(QString());
        text3->setHtml(QApplication::translate("mostrarenemigos", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#363636;\">                                                                </span><span style=\" font-size:14pt; font-weight:600; color:#363636;\">ENEMIGOS</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#363636;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#3"
                        "63636;\">TRAMPAS</span><span style=\" font-size:12pt; font-weight:600; color:#363636;\">:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#363636;\">Las trampas son objetos que encontrar\303\241s repentinamente en el camino quieren golpearte tan fuerte que te har\303\241n quedar con</span><span style=\" font-size:14pt; font-weight:600; color:#363636;\"> 0 VIDAS</span><span style=\" font-size:14pt; color:#363636;\">, estos objetos aparecer\303\241n a partir del </span><span style=\" font-size:14pt; font-weight:600; color:#363636;\">nivel 2</span><span style=\" font-size:14pt; color:#363636;\">, </span><span style=\" font-size:14pt; font-weight:600; color:#363636;\">ten cuidado!!!</span><span style=\" font-size:14pt; color:#363636;\">.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-"
                        "size:8pt; color:#363636;\">		</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                   <span style=\" font-size:8pt; color:#363636;\"> 	                       </span><span style=\" color:#363636;\">		                   </span></p></body></html>", nullptr));
        label_4->setText(QString());
        label->setText(QString());
        text4->setHtml(QApplication::translate("mostrarenemigos", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">		         </span><span style=\" font-size:14pt; font-weight:600;\">  ENEMIGOS</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">SPYKE</span><span style=\" font-size:12pt; font-weight:600;\">:</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#363636;"
                        "\">Spyke es el enemigo final del juego y es el enemigo mas fuerte de toda la eventura, aparecer\303\241 en el </span><span style=\" font-size:14pt; font-weight:600; color:#363636;\">ultimo nivel</span><span style=\" font-size:14pt; color:#363636;\">, si tocas a Spyke este te matar\303\241 instantaneamente haciendote perder el juego, </span><span style=\" font-size:14pt; font-weight:600; color:#363636;\">EVITALO!!!.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                                         </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">                                                                              </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt"
                        ";\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("mostrarenemigos", "Siguiente", nullptr));
        text2->setHtml(QApplication::translate("mostrarenemigos", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                                           <span style=\" font-size:14pt; font-weight:600;\">   ENEMIGOS</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">HUESO:</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#363636;\">Los huesos son objetos que aparecen a lo lar"
                        "go del juego, estos son demasiado peligrosos y golpean muy fuerte a tu jugador, asi que debes evitar chocarlos y esquivalos a como de lugar porque quieren robarte 2 VIDAS.</span><span style=\" font-size:8pt;\">	       	                                                      </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                      </p></body></html>", nullptr));
        BotonSpyke->setText(QString());
        text1->setHtml(QApplication::translate("mostrarenemigos", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                                            <span style=\" font-size:14pt; font-weight:600;\"> ENEMIGOS</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">Tyke</span><span style=\" font-size:11pt; font-weight:600;\">:</span></p>\n"
"<p align=\"just"
                        "ify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#363636;\">Debes tener mucho cuidado con Tyke es el hijo de Spyke uno de los mayores enemigos de Tom &amp; Jerry y es muy peligroso, este enemigo lo encontrar\303\241s desde que inicie el juego hasta que finalice, as\303\255 que debes evitar chocar con el, si esto ocurre PERDER\303\201S 1 VIDA.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">		   </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">	                                                "
                        "</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        BotonTrampa->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mostrarenemigos: public Ui_mostrarenemigos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOSTRARENEMIGOS_H
