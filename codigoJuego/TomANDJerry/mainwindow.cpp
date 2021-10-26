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

    //Inicializacion de los sonidos
    click=new QMediaPlayer(this);
    click->setMedia(QUrl("qrc:/sonidos/sonidos/click2.wav"));
    click->setVolume(100);

    fondoSound1=new QMediaPlayer(this);
    fondoSound1->setMedia(QUrl("qrc:/sonidos/sonidos/Niveles1_2.mp3"));
    fondoSound1->setVolume(15);

    fondoSound2=new QMediaPlayer(this);
    fondoSound2->setMedia(QUrl("qrc:/sonidos/sonidos/NivelFinal.mp3"));
    fondoSound2->setVolume(220);

    cortina1Sound=new QMediaPlayer(this);
    cortina1Sound->setMedia(QUrl("qrc:/sonidos/sonidos/PNivel2.mp3"));
    cortina1Sound->setVolume(80);

    cortina2Sound=new QMediaPlayer(this);
    cortina2Sound->setMedia(QUrl("qrc:/sonidos/sonidos/PNivelF.mp3"));
    cortina2Sound->setVolume(60);

    vidaSound=new QMediaPlayer();
    vidaSound->setMedia(QUrl("qrc:/sonidos/sonidos/Vida.mp3"));
    vidaSound->setVolume(100);

    monedaSound=new QMediaPlayer();
    monedaSound->setMedia(QUrl("qrc:/sonidos/sonidos/Moneda1.mp3"));
    monedaSound->setVolume(150);

    trampaSound=new QMediaPlayer();
    trampaSound->setMedia(QUrl("qrc:/sonidos/sonidos/Trampa.mp3"));
    trampaSound->setVolume(150);


    //inicializacion de los tiempos para las vidas y las monedas
    TiempoVida=new QTimer(this);
    TiempoVida->stop();

    TiempoMonedas=new QTimer(this);
    TiempoMonedas->stop();

    perder=new QTimer(this);
    perder->stop();

//    ganar=new QTimer(this);
//    ganar->stop();

    //inicializacion de los tiempos para los enemigos
    TiempoTrampa=new QTimer(this);
    TiempoTrampa->stop();

    //connecion de señales y slots
    connect(timer,SIGNAL(timeout()),this,SLOT(actualizar()));
    connect(timer2,SIGNAL(timeout()),this,SLOT(actualizar2()));

    //coneccion de señales para las monedas y las vidas
    connect(TiempoVida,SIGNAL(timeout()),this,SLOT(VidasAleatorias()));
    connect(TiempoMonedas,SIGNAL(timeout()),this,SLOT(MonedasAleatorias()));

    //*********************
    connect(perder,SIGNAL(timeout()),this,SLOT(esperar()));


    //coneccion de señales para los enemigos
    connect(TiempoTrampa,SIGNAL(timeout()),this,SLOT(TrampasAleatorias()));

    //Semilla para generar objetos al azar
     srand(time(NULL));

     //Contador elementos coleccionables
     contadorVidas=1;
     distanciaLCD=0;
     MonedasLCD=0;

     //inicializacion de los objetos para el comienzo del juego(monedas y vidas)
     numeroVidas= 4000;
     numeromonedas=2000;

     //inicializacion de los objetos para el comienzo del juego(enemigos)
     numeroTrampas=3000;
}

MainWindow::~MainWindow()
{
    delete timer;
    delete timer2;
    delete scene;
    delete ui;
    delete personaje;
    delete click;

    delete TiempoVida;
    delete TiempoMonedas;
    delete TiempoTrampa;

    delete fondoSound1;
    delete cortina1Sound;
    delete cortina2Sound;
    delete vidaSound;
    delete monedaSound;
    delete trampaSound;

    monedas.clear();
    vida.clear();
    trampa.clear();

}

//Botones
void MainWindow::on_actionIniciar_triggered()
{  
    //sonidos
    click->play();
    fondoSound1->play();


    ui->Vida->display(contadorVidas);
    ui->Distancia->display(distanciaLCD);
    ui->Monedas->display(MonedasLCD);

    //inicializcion de los tiempos
    timer->start(1000*dt);
    timer2->start(1000*dt);

    //Inicializacion de los tiempos para monedas y vidas
    TiempoVida->start(numeroVidas);
    TiempoMonedas->start(numeromonedas);

    //Inicializacion de los tiempos para enemigos
    TiempoTrampa->start(numeroTrampas);

}
void MainWindow::on_actionDetener_triggered()
{
    click->play();
    //al presionar detener, todos los tiempos se les hará el stop
    fondoSound1->pause();
    fondoSound2->pause();
    timer->stop();
    timer2->stop();

    //se paran los tiempos de las monedas y las vidas
    TiempoVida->stop();
    TiempoMonedas->stop();

    //se paran los tiempos de los enemigos
    TiempoTrampa->stop();


}
void MainWindow::on_actionReincicar_triggered()
{
    click->play();
    if(Multiplayer==true){
        reiniciarMultijugador();
    }
    else {
        reiniciar();
    }
}
void MainWindow::on_actionGuardar_triggered()
{
    click->play();
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

    //Se actualizan los movimientos de los enemigos
    for(int i=0;i<trampa.size();i++){
        trampa.at(i)->actualizar(dt);
    }

   //focus personaje y movimiento
    distanciaLCD=personaje->getPersonaje()->getPx();//se le asigna al contador de distancia la posicion a la qu eva avanzando el personaje   
    ui->Vida->display(contadorVidas);//aumento en la ventana el contador LCD para las vidas
    ui->Distancia->display(distanciaLCD);//aumento en la ventana el contador LCD para la distancia
    ui->Monedas->display(MonedasLCD);//aumento en la ventana el contador LCD para las monedas


    //colision para los personajes con los objetos que apareceran en la escena
    colision(personaje);


    //Aqui se cambiará el sonido de fondo cuando cambie al nivel 3
    if(distanciaLCD>=8480 && distanciaLCD<=8780  ){
        cortina1Sound->play();
    }
    else if(distanciaLCD>=17600)
    {
        if(distanciaLCD>=17500 && distanciaLCD<=17800){
            cortina2Sound->play();
            fondoSound2->play();
            fondoSound1->stop();
        }
    }
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
void MainWindow::colision(mostrarPersonaje *a)   //falta terminar las colisiones
{

//***********************************************************************************

    //Colision vida
    for(int i=0;i<vida.size();i++){
        if(a->collidesWithItem(vida.at(i))){
            vidaSound->play();
            if(contadorVidas==3){
               scene->removeItem(vida.at(i));
               vida.removeAt(i);


            }
            else if (contadorVidas<3) {
                scene->removeItem(vida.at(i));
                vida.removeAt(i);
                contadorVidas++;
            }
        }
    }
//***********************************************************************************
        //colision con moneda
        for(int i=0;i<monedas.size();i++){
            if(a->collidesWithItem(monedas.at(i))){
                monedaSound->play();
                scene->removeItem(monedas.at(i));
                monedas.removeAt(i);
                MonedasLCD+=1;
            }
        }

//------------------------COLISION CON LAS TRAMPAS-----------------------------------
        //PARA MULTIJUGADOR
        for(int i=0;i<trampa.size();i++){
            if(personaje->collidesWithItem(trampa.at(i))){
                trampaSound->play();
                if(dosjugadores){
                    if(jugador2){
                        if(contadorVidas>0){//SI EL PERSONAJE AUN CUENTA CON VIDAS

                            scene->removeItem(trampa.at(i));
                            trampa.removeAt(i);
                            contadorVidas--;
                        }
                        //muere el personaje 2
                        else {//SI EL PERSONAJE YA NO TIENE VIDAS
                            timer->stop();
                            TiempoTrampa->stop();
                            TiempoMonedas->stop();
                            TiempoVida->stop();
                            scene->removeItem(trampa.at(i));
                            //explosion->play();

                            personaje->muerte2();
                            jugador2=false;
                        }
                    }
                    //para el caso en el que el jugador este jugando con el personaje#2
                    else {
                        if(contadorVidas>0){//SI EL PERSONAJE AUN CUENTA CON VIDAS

                            scene->removeItem(trampa.at(i));
                            trampa.removeAt(i);
                            contadorVidas--;

                        }
                        //MUERE PERSONAJE 1
                        else {//SI EL PERSONAJE YA NO TIENE VIDAS
                            timer->stop();
                            TiempoTrampa->stop();

                            TiempoMonedas->stop();

                            TiempoVida->stop();
                            scene->removeItem(trampa.at(i));
                            personaje->muerte1();
                            QTimer::singleShot(20,this,SLOT(ocultar()));

                            QTimer::singleShot(20,this,SLOT(esperar()));
                            QTimer::singleShot(20,this,SLOT(showMaximized()));

                        }
                    }
                }
                //PARA UN SOLO JUGADOR
                else {
                    if(jugador2){
                        if(contadorVidas>0){
                            scene->removeItem(trampa.at(i));
                            trampa.removeAt(i);
                            contadorVidas--;
                        }
                        else {
                            //CUANDO MUERE EL PERSONAJE 2
                            timer->stop();
                            TiempoTrampa->stop();
                            TiempoMonedas->stop();


                            TiempoVida->stop();
                            scene->removeItem(trampa.at(i));

                            fondoSound1->setVolume(10);

                            personaje->muerte2();
                            //QTimer::singleShot(800,this,SLOT(ocultar()));
                            //QTimer::singleShot(500,this,SLOT(esperar()));
                            QTimer::singleShot(2000,this,SLOT(parar()));
                        }
                    }
                    else {  //JUGADOR 1
                        if(contadorVidas>0){                           
                            scene->removeItem(trampa.at(i));
                            trampa.removeAt(i);
                            contadorVidas--;
                        }
                        else {
                            //CUANDO MUERE EL  JUGADOR 1
                            timer->stop();
                            TiempoTrampa->stop();

                            TiempoMonedas->stop();
                            TiempoVida->stop();
                            scene->removeItem(trampa.at(i));
                            fondoSound1->setVolume(10);

                            personaje->muerte1();
//                            QTimer::singleShot(4000,this,SLOT(ocultar()));
//                            QTimer::singleShot(500,this,SLOT(esperar()));
                            QTimer::singleShot(2000,this,SLOT(parar()));
                        }
                    }
                }
            }
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

    timer->stop();
    timer2->stop();

    fondoSound1->stop();


    TiempoTrampa->stop();

    TiempoVida->stop();
    TiempoMonedas->stop();

    contadorVidas=1;
    distanciaLCD=0;
    MonedasLCD=0;


    quitarelementos();
    borrarelementos();
    scene->setSceneRect(24,0,1000,496);
    multijugador();
    ui->Distancia->display(0);
    ui->Vida->display(1);
    ui->Monedas->display(0);

}
void MainWindow::reiniciarMultijugador()
{
    click->play();
    jugador2=false;
    timer->stop();
    timer2->stop();

    fondoSound1->stop();

    TiempoTrampa->stop();
    TiempoVida->stop();
    TiempoMonedas->stop();

    contadorVidas=1;
    distanciaLCD=0;
    MonedasLCD=0;
//    gano->stop();
    quitarelementos();
    borrarelementos();
    scene->setSceneRect(24,0,1000,496);
    multijugador();
}

void MainWindow::on_actionRegresar_al_menu_triggered()
{
    click->play();
    fondoSound1->stop();

    reiniciar();
    Menu* menu;
    menu = new Menu();
    menu->showMaximized();
    this->close();

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

    //se quitan las trampas
    for(int i=0; i<trampa.length();i++){
        scene->removeItem(trampa.at(i));
    }

    scene->removeItem(personaje);

}
void MainWindow::borrarelementos()
{
    vida.clear();
    monedas.clear();

    trampa.clear();

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

//--------- OBJETOS ALEATORIOS-------------------------
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

void MainWindow::parar()
{
    reiniciar();
    Menu* menu;
    menu = new Menu();
    menu->showMaximized();

    this->close();
}
void MainWindow::esperar()
{
    if(dosjugadores){
        if(jugador2){
            ganar->start(2000);
            jugador2=false;
            reiniciar();
        }
        else {
            jugador2=true;
            reiniciar();
        }
    }
    else {
        reiniciar();
    }
}
void MainWindow::ocultar()
{
    MainWindow::hide();

    if(Multiplayer==false){
        //Lose->play();
    }
}


//-----------------------------
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

void MainWindow::TrampasAleatorias()//falta por poner en Tom&Jerry
{
    float py=0,vx=0;
    py=rand() % 350+50;//posicion en y
    vx=rand() % 150+80;

    trampa.append(new mostrarobstaculos(personaje->getPersonaje()->getPx()+1000,py));
    trampa.last()->moverTrampa();
    trampa.last()->getItem()->setVel(vx,0);
    scene->addItem(trampa.last());

    if(trampa.front()->getItem()->getPx()<=0){
        scene->removeItem(trampa.front());
        trampa.pop_front();
    }
}
