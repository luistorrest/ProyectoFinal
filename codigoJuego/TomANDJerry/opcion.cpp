#include "opcion.h"
#include "ui_opcion.h"

opcion::opcion(QWidget *parent) :QWidget(parent),ui(new Ui::opcion)
{
    ui->setupUi(this);
    iniciar= new MainWindow();
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);//quitar los bordes y botones
    this->setAttribute(Qt::WA_TranslucentBackground);//ponerla transparente

    click=new QMediaPlayer(this);
    click->setMedia(QUrl("qrc:/sonidos/sonidos/click1.mp3"));
    click->setVolume(100);

}
opcion::~opcion()
{
    delete ui;
    delete iniciar;
    delete click;
}

void opcion::on_Iniciar_clicked()
{

    if(multijuador==false){
        if(p1==0 && p2==0){
            QMessageBox::warning(this,"Cuidado","No has seleccionado ningun personaje!");
        }
        else {
            click->play();
            iniciar->showMaximized();
            iniciar->setDosjugadores(false);
            this->close();
        }
    }
    else {
        iniciar->showMaximized();
        iniciar->setDosjugadores(true);
    }
}

void opcion::on_Player1_toggled(bool checked)
{   
    if(checked){
        ui->Player2->close();
        iniciar->jugador2=false;
        p1=1;
    }
    else {
        ui->Player2->show();
        p1=0;
    }
}

void opcion::on_Player2_toggled(bool checked)
{
    if(checked){
        ui->Player1->close();
        iniciar->jugador2=true;
        p2=1;
    }
    else {
        ui->Player1->show();
        p2=0;
    }
}
void opcion::on_pushButton_clicked()
{
    click->play();

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Salir","¿Seguro que quieres salir del selector de personajes?",
                                  QMessageBox::Yes|QMessageBox::No);
    if(reply==QMessageBox::Yes){
        this->close();
    }
}
