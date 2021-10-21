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

}

Menu::~Menu()
{
    delete ui;
    delete iniciar;
    delete selec;
    delete click;
}

void Menu::on_UnJugador_clicked()
{
    click->play();   
    selec->multijuador=false;
    //selec->MusicSelec->play();
    selec->show();
    this->close();
}

void Menu::on_Multijugador_clicked()
{
    click->play();
    iniciar->jugador2=false;
    iniciar->Multiplayer=true;

    iniciar->showMaximized();
    iniciar->setDosjugadores(true);

    this->close();
}

void Menu::on_pushButton_clicked()
{
    click->play();
}

void Menu::on_actionEnemigos_triggered()
{
    click->play();//cuando se pulse el boton que es de abrir informacion enemigos reproduzco el sonido del click
    mostrarenemigos *ventana2 = new mostrarenemigos(this);//abro la ventana correspondiente a la informacion de los enemigos
    ventana2->show();//muestro la ventana
}


void Menu::on_actionInstrucciones_triggered()
{
    click->play();

}
