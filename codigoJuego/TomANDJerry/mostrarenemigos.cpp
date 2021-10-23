#include "mostrarenemigos.h"
#include "ui_mostrarenemigos.h"

mostrarenemigos::mostrarenemigos(QWidget *parent) :QDialog(parent),ui(new Ui::mostrarenemigos)
{
    ui->setupUi(this);
    tyke= new QMediaPlayer(this);//
    tyke->setMedia(QUrl("qrc:/sonidos/sonidos/Tyke.mp3"));

    hueso= new QMediaPlayer(this);
    hueso->setMedia(QUrl("qrc:/sonidos/sonidos/Hueso.mp3"));

    trampa= new QMediaPlayer(this);
    trampa->setMedia(QUrl("qrc:/sonidos/sonidos/Trampa.mp3"));

    spyke= new QMediaPlayer(this);
    spyke->setMedia(QUrl("qrc:/sonidos/sonidos/Spike.mp3"));

    click= new QMediaPlayer(this);
    click->setMedia(QUrl("qrc:/sonidos/sonidos/pagina.wav"));

    ui->text2->hide();
    ui->text3->hide();
    ui->text4->hide();

    ui->BotonHueso->hide();
    ui->BotonTrampa->hide();
    ui->BotonSpyke->hide();


}

mostrarenemigos::~mostrarenemigos()
{
    delete ui;
    delete tyke;
    delete hueso;
    delete trampa;
    delete spyke;
    delete click;
}

void mostrarenemigos::on_pushButton_clicked()
{
    //this->close();
    click->play();
    if(contador==2){
        tyke->stop();

        ui->BotonHueso->show();
        ui->text2->show();
        ui->text2->setGeometry(20,10,521,371);
        ui->text1->hide();
        contador++;
    }
    else if(contador==3){
        hueso->stop();

        ui->BotonTrampa->show();
        ui->text3->show();
        ui->text3->setGeometry(20,10,521,371);
        ui->text2->hide();
        contador++;
    }
    else if (contador==4) {

        ui->BotonSpyke->show();
        ui->text4->show();
        ui->text4->setGeometry(20,10,521,371);
        ui->text3->hide();
        ui->pushButton->setText("Finalizar");
        contador++;
    }
    else if (contador==5) {
        spyke->stop();

        this->close();
    }
}

void mostrarenemigos::on_BotonTyke_clicked()
{
    tyke->play();
}

void mostrarenemigos::on_BotonHueso_clicked()
{
    hueso->play();
}

void mostrarenemigos::on_BotonTrampa_clicked()
{
    trampa->play();
}

void mostrarenemigos::on_BotonSpyke_clicked()
{
    spyke->play();
}
