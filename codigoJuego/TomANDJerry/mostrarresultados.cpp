#include "mostrarresultados.h"
#include "ui_mostrarresultados.h"


mostrarResultados::mostrarResultados(QWidget *parent) :QWidget(parent),ui(new Ui::mostrarResultados)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);//quitar los bordes y botones
    this->setAttribute(Qt::WA_TranslucentBackground);//ponerla transparente

}

mostrarResultados::~mostrarResultados()
{
    delete ui;
}
//metodos
void mostrarResultados::imaganes()
{
    if(op==1){ //SI GANO TOM EN (UNIJUGADOR)
        mostrar();
        ocultar();
        darvalores();
        //reorganizar();


//        Imag.load(":/ImagenesJuego/Resultados/Ganador1.png");
//        ui->fondo->setPixmap(Imag);
    }

    if(op==2){ //SI GANO JERRY EN (UNIJUGADOR)
        mostrar();
        ocultar();
        darvalores();
        //reorganizar();


//        Imag.load(":/ImagenesJuego/Resultados/Ganador2.png");
//        ui->fondo->setPixmap(Imag);
    }
    if(op==3){ //SI GANO TOM EN (MULTIJUGADOR)
        mostrar();
        ocultar();
        darvalores();
        //reorganizar();
//        Imag.load(":/ImagenesJuego/Resultados/GanoP1.png");
//        ui->fondo->setPixmap(Imag);
    }
    if(op==4){ //SI GANO JERRY EN (MULTIJUGADOR)
        mostrar();
        ocultar();
        darvalores();
        //reorganizar();
//        Imag.load(":/ImagenesJuego/Resultados/GanoP2.png");
//        ui->fondo->setPixmap(Imag);
    }

}

void mostrarResultados::reorganizar()
{
   if(op==1){
       ui->Distancia->move(1125,272);
       ui->Monedas->move(1130,375);
       ui->Total->move(1120,469);
   }

    if(op==2){
        ui->Distancia_2->move(1125,272); //x,y
        ui->Monedas_2->move(1130,375);
        ui->Total_2->move(1120,469);
    }

    if(op==3){
        ui->Distancia->move(1125,272); //x,y
        ui->Monedas->move(1130,375);
        ui->Total->move(1120,469);
    }

    if(op==4){
        ui->Distancia_2->move(1095,268);
        ui->Monedas_2->move(1095,371);
        ui->Total_2->move(1075,464);
    }

}

void mostrarResultados::ocultar()
{
    if(op==1){
        ui->Distancia_2->hide();
        ui->Monedas_2->hide();
        ui->Total_2->hide();

    }
    if(op==2){
        ui->Distancia->hide();
        ui->Monedas->hide();
        ui->Total->hide();
    }
    if(op==3){
        ui->Distancia_2->hide();
        ui->Monedas_2->hide();
        ui->Total_2->hide();
    }
    if(op==4){
        ui->Distancia->hide();
        ui->Monedas->hide();
        ui->Total->hide();
    }


}

void mostrarResultados::mostrar()
{
    ui->Distancia->show();
    ui->Monedas->show();
    ui->Total->show();

    ui->Distancia_2->show();
    ui->Monedas_2->show();
    ui->Total_2->show();
}

void mostrarResultados::darvalores()
{
    QString dato;
    QFile file("Guardar.txt");
    file.open(QIODevice::ReadOnly);
    dato=file.readLine();

    QList<QString> valores;
    int n=0;
    while(n>=0){
        n = dato.indexOf("\t");
        if(n!=0){
            valores.append(dato.left(n));
        }
        dato=dato.remove(0,n+1);
    }
    file.close();

    int distancia=0,monedas=0,total=0;

    distancia=valores.at(4).toInt();
    monedas=valores.at(5).toInt();
    total=distancia*2+(monedas*8);

    if(op==1){
        ui->Distancia->setText(QString::number(distancia));
        ui->Monedas->setText(QString::number(monedas));
        ui->Total->setText(QString::number(total));
    }
    else if(op==2){
        ui->Distancia_2->setText(QString::number(distancia));
        ui->Monedas_2->setText(QString::number(monedas));
        ui->Total_2->setText(QString::number(total));
    }
    else if (op==3) {
        ui->Distancia->setText(QString::number(distancia));
        ui->Monedas->setText(QString::number(monedas));
        ui->Total->setText(QString::number(total));
    }

    else if(op==4){
        ui->Distancia_2->setText(QString::number(distancia));
        ui->Monedas_2->setText(QString::number(monedas));
        ui->Total_2->setText(QString::number(total));

    }

}


