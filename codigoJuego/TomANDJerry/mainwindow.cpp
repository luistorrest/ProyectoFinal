#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "moverobstaculos.h"
#include "mostrarobstaculos.h"
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

    //inicializacion de los tiempos para las vidas y las monedas
    TiempoVida=new QTimer(this);
    TiempoVida->stop();
    TiempoMonedas=new QTimer(this);
    TiempoMonedas->stop();


    //connecion de señales y slots
    connect(timer,SIGNAL(timeout()),this,SLOT(actualizar()));
    connect(timer2,SIGNAL(timeout()),this,SLOT(actualizar2()));

    connect(TiempoVida,SIGNAL(timeout()),this,SLOT(VidasAleatorias()));
    connect(TiempoMonedas,SIGNAL(timeout()),this,SLOT(MonedasAleatorias()));

    //Semilla para generar objetos al azar
     srand(time(NULL));

     //Contador elementos coleccionables
     contadorVidas=1;
     distanciaLCD=0;
     MonedasLCD=0;

     //inicializacion de los objetos para el comienzo del juego
     numeroVidas= 4000;
     numeromonedas=2000;

}

MainWindow::~MainWindow()
{
    delete timer;
    delete timer2;
    delete scene;
    delete ui;
    delete personaje;

    delete TiempoVida;
    delete TiempoMonedas;

    monedas.clear();
    vida.clear();

}

//Botones
void MainWindow::on_actionIniciar_triggered()
{  
    //para actualizar el contador de vidas, distancia y monedas que se ha colocado en la escena
    ui->Vida->display(contadorVidas);
    ui->Distancia->display(distanciaLCD);
    ui->Monedas->display(MonedasLCD);

    //inicializcion de los tiempos
    timer->start(1000*dt);
    timer2->start(1000*dt);

    TiempoVida->start(numeroVidas);
    TiempoMonedas->start(numeromonedas);

}
void MainWindow::on_actionDetener_triggered()
{
    //al presionar detener, todos los tiempos se les hará el stop
    timer->stop();
    timer2->stop();

    TiempoVida->stop();
    TiempoMonedas->stop();
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
//LCDS de las vidas, distancia y monedas
void MainWindow::on_Vida_overflow()
{
    ui->Vida->display(contadorVidas);
}

void MainWindow::on_Distancia_overflow()
{
    ui->Distancia->display(distanciaLCD);
}

void MainWindow::on_Monedas_overflow()
{
    ui->Monedas->display(MonedasLCD);
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

void MainWindow::actualizar()
{

    for(int i=0;i<vida.size();i++){
        vida.at(i)->actualizar(dt);
    }
    for(int i=0;i<monedas.size();i++){
        monedas.at(i)->actualizarMoneda(dt);
    }
   //focus personaje y movimiento
    distanciaLCD=personaje->getPersonaje()->getPx();//se le asigna al contador de distancia la posicion a la qu eva avanzando el personaje
//    ui->Vida->display(contadorVidas);
    ui->Distancia->display(distanciaLCD);
//    ui->Monedas->display(MonedasLCD);
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
void MainWindow::reiniciarMultijugador()
{

}

//Quitar y borrar elementos
void MainWindow::quitarelementos()
{
    //se quitan ls vidas
    for(int i=0;i<vida.length();i++){
        scene->removeItem(vida.at(i));
    }

    //se quitan las monedas
    for(int i=0;i<monedas.length();i++){
        scene->removeItem(monedas.at(i));
    }

    scene->removeItem(personaje);

}
void MainWindow::borrarelementos()
{
    vida.clear();
    monedas.clear();
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
void MainWindow::VidasAleatorias()
{
    float py=0;
    py=rand() % 300+0;

    vida.append(new mostrarobstaculos(personaje->getPersonaje()->getPx()+1000,py));
    vida.last()->moverVida();
    vida.last()->getItem()->setVel(0,0);
    scene->addItem(vida.last());

    if(vida.front()->getItem()->getPx() <=500){
        scene->removeItem(vida.front());
        vida.pop_front();
    }
}
void MainWindow::MonedasAleatorias()//falta por poner en Tom&Jerry
{
    float py=0,vx=0,vy=0;
    //py=rand() % 450+250;
    py=rand() % 480+380;
    vx=350;
    vy=600;

    monedas.append(new mostrarobstaculos(personaje->getPersonaje()->getPx()+1000,py));
    monedas.last()->moverMoneda();
    monedas.last()->getItem()->setVel(vx,vy);
    scene->addItem(monedas.last());

    if(monedas.front()->getItem()->getPx() <= 0){
        scene->removeItem(monedas.front());
        monedas.pop_front();
    }
}

