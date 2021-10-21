#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "moverpersonaje.h"
#include "mostrarpersonaje.h"
#include "menu.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    //Constructor
    ui->setupUi(this);

    //Mapa
    QPixmap fondo;
    fondo.load(":/ImagenesJuego/Fondos/fondoJuego.png");

    //crear la escena
    scene=new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);                      //Pantalla principal ponga la escena (qgraph scene)
    ui->graphicsView->setBackgroundBrush(QBrush(fondo));   //Asigna el fondo
    scene->setSceneRect(24,0,1000,496);                    //Valores, posicion, x, y, tamaño x, y
    ui->graphicsView->scale(1,-1);                       //Invertir eje y

    //Inicializacion de los timers
    timer=new QTimer(this);
    timer->stop();
    timer2=new QTimer(this);
    timer2->stop();

    //connecion de señales y slots
    //connect(timer,SIGNAL(timeout()),this,SLOT(actualizar()));
    connect(timer2,SIGNAL(timeout()),this,SLOT(actualizar2()));

    //Semilla para generar objetos al azar
     srand(time(NULL));


}

MainWindow::~MainWindow()
{
    delete timer;
    delete timer2;
    delete scene;
    delete ui;
    delete personaje;

}

//Botones
void MainWindow::on_actionIniciar_triggered()
{
    timer->start(1000*dt);
    timer2->start(1000*dt);
}
void MainWindow::on_actionDetener_triggered()
{
    timer->stop();
    timer2->stop();
}
void MainWindow::on_actionReincicar_triggered()
{
    if(Multiplayer==true){
        reiniciarMultijugador();
    }
    else {
        reiniciar();
    }
}
void MainWindow::on_actionGuardar_triggered()
{

}

//metodos para simulacion
void MainWindow::dificultad()
{

}
void MainWindow::actualizar2()
{
    focus();
    personaje->actualizar(dt);
}
void MainWindow::focus()
{
    if(personaje->getPersonaje()->getPx()>=500){
        scene->setSceneRect(personaje->getPersonaje()->getPx()-300,0,1000,496);
        ui->graphicsView->setScene(scene);
    }
    if(personaje->getPersonaje()->getPy()>=380){
        personaje->getPersonaje()->setPy(380);
    }
    if(personaje->getPersonaje()->getPy()<=0){
        personaje->getPersonaje()->setPy(0);
    }
}
void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_W){
        personaje->getPersonaje()->setPy(personaje->getPersonaje()->getPy()+15);
    }
    if(event->key()==Qt::Key_S){
        personaje->getPersonaje()->setPy(personaje->getPersonaje()->getPy()-15);
    }
    if(event->key()==Qt::Key_D){
        personaje->getPersonaje()->setPx(personaje->getPersonaje()->getPx()+30);
    }

    if(event->key()==Qt::Key_P){
        if(timer->isActive()){
            timer->stop();
        }
        else{
            //timer->start(1000*dt);
            ui->Vida->display(contadorVidas);
            timer->start(1000*dt);
        }
    }
}
void MainWindow::reiniciar()
{

}

//Quitar y borrar elementos
void MainWindow::quitarelementos()
{
    scene->removeItem(personaje);
}
void MainWindow::borrarelementos()
{

    delete personaje;
}

//metodos para el jugador y multijugador
void MainWindow::unjugador()
{
    if(jugador2){
        personaje=new mostrarPersonaje(0,0);
        personaje->volar2();
        scene->addItem(personaje);
        personaje->getPersonaje()->setVx(velocidadNivel1);
    }
    else{
        personaje=new mostrarPersonaje(0,0);
        personaje->volar1();
        scene->addItem(personaje);
        personaje->getPersonaje()->setVx(velocidadNivel1);
    }

}
void MainWindow::multijugador()
{
    if(dosjugadores){
        if(jugador2){
            personaje=new mostrarPersonaje(0,0);
            personaje->volar2();
            scene->addItem(personaje);
            personaje->getPersonaje()->setVx(velocidadNivel1);

        }
        else {
            personaje=new mostrarPersonaje(0,0);
            personaje->volar1();
            scene->addItem(personaje);
            personaje->getPersonaje()->setVx(velocidadNivel1);

        }
    }
    else {
        unjugador();
    }
}
void MainWindow::setDosjugadores(bool value)
{
    dosjugadores=value;
    multijugador();
}
void MainWindow::reiniciarMultijugador()
{

}




