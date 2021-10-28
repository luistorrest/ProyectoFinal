#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :QMainWindow(parent),ui(new Ui::Menu)
{
    ui->setupUi(this);


    iniciar=new MainWindow();
    selec=new opcion();
    click=new QMediaPlayer(this);//reservo
    click->setMedia(QUrl("qrc:/sonidos/sonidos/click2.wav"));//selecciono el sonido que utilizare para el click
    click->setVolume(100);//le configuro el volumen

    menuSound=new QMediaPlayer(this);
    menuSound->setMedia(QUrl("qrc:/sonidos/sonidos/tom_jerry_8-bit.mp3"));
    menuSound->setVolume(20);//le configuro el volumen

    menuSound->play();
}

Menu::~Menu()
{
    delete ui;
    delete iniciar;
    delete selec;
    delete click;
    delete menuSound;
}

void Menu::on_UnJugador_clicked()
{
    click->play();   
    selec->multijuador=false;
    //selec->MusicSelec->play();
    selec->show();
    menuSound->stop();
    this->close();
}

void Menu::on_Multijugador_clicked()
{

    click->play();
    iniciar->jugador2=false;
    iniciar->Multiplayer=true;

    iniciar->showMaximized();
    iniciar->setDosjugadores(true);
    menuSound->stop();
    this->close();
}

void Menu::on_pushButton_clicked()
{
    click->play();
    menuSound->stop();

}

void Menu::on_actionEnemigos_triggered()
{
    menuSound->setVolume(5);//le bajo el volumen al sonido de fondo del menu

    click->play();//cuando se pulse el boton que es de abrir informacion enemigos reproduzco el sonido del click
    mostrarenemigos *ventana2 = new mostrarenemigos(this);//abro la ventana correspondiente a la informacion de los enemigos
    ventana2->show();//muestro la ventana
}


void Menu::on_actionInstrucciones_triggered()
{
    click->play();

}


