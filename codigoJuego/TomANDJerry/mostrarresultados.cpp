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
        darvalores();;
    }

    if(op==2){ //SI GANO JERRY EN (UNIJUGADOR)
        mostrar();
        ocultar();
        darvalores();
    }

    if(op==3){ //SI GANO TOM EN (MULTIJUGADOR)
        mostrar();
        ocultar();
        darvalores();

    }

    if(op==4){ //SI GANO JERRY EN (MULTIJUGADOR)
        mostrar();
        ocultar();
        darvalores();
    }
    if(op==5){//para mostrar el ganador
        mostrar();
        ocultar();
        darvalores();

    }    
}

void mostrarResultados::ocultar()
{
    if(op==1){
        ui->Distancia_2->hide();
        ui->Monedas_2->hide();
        ui->Total_2->hide();
        ui->Jugador_2->hide();
        ui->ImgMoneda_2->hide();
        ui->ImgDistancia_2->hide();
        ui->ResTotal_2->hide();
        ui->Jerry->hide();
        ui->ganador->hide();

    }
    if(op==2){
        ui->Distancia->hide();
        ui->Monedas->hide();
        ui->Total->hide();
        ui->Jugador->hide();
        ui->ImgMoneda->hide();
        ui->ImgDistancia->hide();
        ui->ResTotal->hide();
        ui->Tom->hide();
        ui->ganador->hide();

    }
    if(op==3){
        ui->Distancia_2->hide();
        ui->Monedas_2->hide();
        ui->Total_2->hide();
        ui->Jugador_2->hide();
        ui->ImgMoneda_2->hide();
        ui->ImgDistancia_2->hide();
        ui->ResTotal_2->hide();
        ui->Jerry->hide();
        ui->ganador->hide();

    }
    if(op==4){
        ui->Distancia->hide();
        ui->Monedas->hide();
        ui->Total->hide();
        ui->Jugador->hide();
        ui->ImgMoneda->hide();
        ui->ImgDistancia->hide();
        ui->ResTotal->hide();
        ui->Tom->hide();
        ui->ganador->hide();

    }
    if(op==5){
        ui->Distancia->hide();
        ui->Monedas->hide();
        ui->Total->hide();
        ui->Jugador->hide();
        ui->ImgMoneda->hide();
        ui->ImgDistancia->hide();
        ui->ResTotal->hide();
        ui->Tom->hide();

        ui->Distancia_2->hide();
        ui->Monedas_2->hide();
        ui->Total_2->hide();
        ui->Jugador_2->hide();
        ui->ImgMoneda_2->hide();
        ui->ImgDistancia_2->hide();
        ui->ResTotal_2->hide();
        ui->Jerry->hide();

    }

}

void mostrarResultados::mostrar()
{
    ui->Distancia->show();
    ui->Monedas->show();
    ui->Total->show();
    ui->Jugador->show();
    ui->ImgMoneda->show();
    ui->ImgDistancia->show();
    ui->ResTotal->show();
    ui->Tom->show();

    ui->Distancia_2->show();
    ui->Monedas_2->show();
    ui->Total_2->show();
    ui->Jugador_2->show();
    ui->ImgMoneda_2->show();
    ui->ImgDistancia_2->show();
    ui->ResTotal_2->show();
    ui->Jerry->show();

    ui->ganador->show();
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

    distancia=valores.at(4).toInt()+4;
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


