#include "opcion.h"
#include "ui_opcion.h"

opcion::opcion(QWidget *parent) :QWidget(parent),ui(new Ui::opcion)
{
    ui->setupUi(this);
    iniciar= new MainWindow();
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);//quitar los bordes y botones
    this->setAttribute(Qt::WA_TranslucentBackground);//ponerla transparente

    click=new QMediaPlayer(this);
    click->setMedia(QUrl("qrc:/sonidos/sonidos/click2.wav"));
    click->setVolume(50);

    selectSound=new QMediaPlayer(this);
    selectSound->setMedia(QUrl("qrc:/sonidos/sonidos/click.mp3"));
    selectSound->setVolume(50);

    opcionSound=new QMediaPlayer(this);
    opcionSound->setMedia(QUrl("qrc:/sonidos/sonidos/tom_jerry_8-bit.mp3"));
    opcionSound->setVolume(20);

    warning=new QMediaPlayer(this);
    warning->setMedia(QUrl("qrc:/sonidos/sonidos/Warning.mp3"));
    warning->setVolume(80);

    opcionSound->play();


}
opcion::~opcion()
{
    delete ui;
    delete iniciar;
    delete click;
    delete  selectSound;
    delete  warning;
    delete opcionSound;
}

void opcion::on_Iniciar_clicked()
{

    opcionSound->stop();
    if(multijuador==false){
        if(p1==0 && p2==0){

            warning->play();
            QMessageBox::warning(this,"Atencion","Seleccione un personaje para jugar!");
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
    selectSound->play();
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
    selectSound->play();
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

    reply = QMessageBox::question(this,"Salir","¿Seguro que desea salir?",
                                  QMessageBox::Yes|QMessageBox::No);

    if(reply==QMessageBox::Yes){
        opcionSound->stop();
        this->close();
    }
}
