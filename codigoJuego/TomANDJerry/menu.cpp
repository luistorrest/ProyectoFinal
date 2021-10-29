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

    error=new QMediaPlayer(this);
    error->setMedia(QUrl("qrc:/sonidos/sonidos/Warning.mp3"));
    error->setVolume(50);//le configuro el volumen

    correcto=new QMediaPlayer(this);
    correcto->setMedia(QUrl("qrc:/sonidos/sonidos/click1.mp3"));
    correcto->setVolume(50);//le configuro el volumen


    menuSound->play();
}

Menu::~Menu()
{
    delete ui;
    delete iniciar;
    delete selec;
    delete click;
    delete menuSound;
    delete correcto;
    delete error;
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
    click->play();
    iniciar->cargar=true;
    QFile archivo;
    QTextStream io;
    QString nombreArch,infoGuardar,filter = "Text File (*.txt)";
    nombreArch=QFileDialog::getOpenFileName(this,"Cargar_Partida","C://Users//Fafoa//Desktop//Juego//Partidas Guardadas"); //this,nombre,directorio
    archivo.setFileName(nombreArch);
    archivo.open(QIODevice::ReadOnly | QIODevice::Text);
    if(!archivo.isOpen()){
        error->play();
        QMessageBox::critical(this,"ERROR","No se ha seleccionado ninguna partida!");

    }
    else {
        infoGuardar=archivo.readLine();
        QList<QString> contenedor;
        int n=0;
        while(n>=0){
            n=infoGuardar.indexOf("\t");
            if(n!=0){
                contenedor.append(infoGuardar.left(n));
            }
            infoGuardar=infoGuardar.remove(0,n+1);
        }
        QList<float> cargarPerson;
        QList<float> cargarTrampa;
        QList<float> cargarHueso;
        QList<float> cargarTyke;
        QList<float> cargarMonedas;
        QList<float> cargarVidas;
        QList<float> cargarSpyke;

        for(int i=0,posicion=1;i<contenedor.size();i++){
            if(contenedor.at(i)=="|"){
                posicion++;
                continue;
            }
            switch (posicion) {
            case 1:
                cargarPerson.push_back(contenedor.at(i).toFloat());
                break;
            case 2:
                cargarTrampa.push_back(contenedor.at(i).toFloat());
                break;
            case 3:
                cargarHueso.push_back(contenedor.at(i).toFloat());
                break;
            case 4:
                cargarTyke.push_back(contenedor.at(i).toFloat());
                break;
            case 5:
                cargarMonedas.push_back(contenedor.at(i).toFloat());
                break;
            case 6:
                cargarVidas.push_back(contenedor.at(i).toFloat());
                break;
            case 7:
                cargarSpyke.push_back(contenedor.at(i).toFloat());
            }

        }
        for(int i=0;i<cargarPerson.size();i++){
            switch (i) {
            case 0:
                iniciar->posX=cargarPerson.at(0);
                break;
            case 1:
                iniciar->posY=cargarPerson.at(1);
                break;
            case 2:
                iniciar->contadorVidas=(int)cargarPerson.at(3);
                break;
            case 3:
                iniciar->distanciaLCD=(int)cargarPerson.at(4);
                break;
            case 4:
                iniciar->MonedasLCD=(int)cargarPerson.at(5);
                break;
            case 5:
                iniciar->jugador2=(int)cargarPerson.at(6);
                break;
            }
        }

        iniciar->tram=cargarTrampa;
        iniciar->hue =cargarHueso;
        iniciar->tyk=cargarTyke;
        iniciar->mon=cargarMonedas;
        iniciar->vid=cargarVidas;
        iniciar->spyk=cargarSpyke;

        iniciar->showMaximized();
        iniciar->setDosjugadores(false);
        this->close();
        //click3->play();
        QMessageBox::information(this,tr("Cargando"),tr("Partida cargada con exito!"));
    }

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
    comoJugar *ventana = new comoJugar(this);
    ventana->show();

}


