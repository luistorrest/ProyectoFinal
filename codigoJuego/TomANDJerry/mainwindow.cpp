#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "moverobstaculos.h"
#include "mostrarobstaculos.h"
#include "menu.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    //Constructor
    ui->setupUi(this);
    resultadoP=new mostrarResultados();

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
    vidaSound->setVolume(60);

    monedaSound=new QMediaPlayer();
    monedaSound->setMedia(QUrl("qrc:/sonidos/sonidos/Moneda1.mp3"));
    monedaSound->setVolume(150);

    trampaSound=new QMediaPlayer();
    trampaSound->setMedia(QUrl("qrc:/sonidos/sonidos/Trampa.mp3"));
    trampaSound->setVolume(60);

    huesoSound=new QMediaPlayer();
    huesoSound->setMedia(QUrl("qrc:/sonidos/sonidos/Hueso.mp3"));
    huesoSound->setVolume(60);

    SpykeSound=new QMediaPlayer();
    SpykeSound->setMedia(QUrl("qrc:/sonidos/sonidos/Spike.mp3"));
    SpykeSound->setVolume(60);

    muerteSound=new QMediaPlayer();
    muerteSound->setMedia(QUrl("qrc:/sonidos/sonidos/GameOver.mp3"));
    muerteSound->setVolume(60);

    ganarSound=new QMediaPlayer();
    ganarSound->setMedia(QUrl("qrc:/sonidos/sonidos/Ganador.mp3"));
    ganarSound->setVolume(60);


    errorSound=new QMediaPlayer(this);
    errorSound->setMedia(QUrl("qrc:/sonidos/sonidos/Warning.mp3"));
    errorSound->setVolume(80);

    //inicializacion de los tiempos para las vidas y las monedas
    TiempoVida=new QTimer(this);
    TiempoVida->stop();

    TiempoMonedas=new QTimer(this);
    TiempoMonedas->stop();

    perder=new QTimer(this);
    perder->stop();

    //inicializacion de los tiempos para los enemigos
    TiempoTrampa=new QTimer(this);
    TiempoTrampa->stop();

    TiempoHueso=new QTimer(this);
    TiempoHueso->stop();

    TiempoTyke=new QTimer(this);
    TiempoTyke->stop();

    TiempoSpyke=new QTimer(this);
    TiempoSpyke->stop();


    //connecion de señales y slots
    connect(timer,SIGNAL(timeout()),this,SLOT(actualizar()));
    connect(timer2,SIGNAL(timeout()),this,SLOT(actualizar2()));

    //coneccion de señales para las monedas y las vidas
    connect(TiempoVida,SIGNAL(timeout()),this,SLOT(VidasAleatorias()));
    connect(TiempoMonedas,SIGNAL(timeout()),this,SLOT(MonedasAleatorias()));

    //*********************
    connect(perder,SIGNAL(timeout()),this,SLOT(esperar()));

    perder=new QTimer(this);
    perder->stop();
    ganar=new QTimer(this);
    ganar->stop();

    //--------------------------
    connect(ganar,SIGNAL(timeout()),this,SLOT(ganador()));

    //coneccion de señales para los enemigos
    connect(TiempoTrampa,SIGNAL(timeout()),this,SLOT(TrampasAleatorias()));
    connect(TiempoHueso,SIGNAL(timeout()),this,SLOT(HuesosAleatorios()));
    connect(TiempoTyke,SIGNAL(timeout()),this,SLOT(TykeAleatorios()));
    connect(TiempoSpyke,SIGNAL(timeout()),this,SLOT(SpykeAleatorios()));

    //Semilla para generar objetos al azar
     srand(time(NULL));

     //Contador elementos coleccionables
     contadorVidas=1;
     distanciaLCD=0;
     MonedasLCD=0;

     //inicializacion de los objetos para el comienzo del juego(monedas y vidas)

     //inicializacion de los objetos para el comienzo del juego(enemigos)
     if(distanciaLCD<=8680){//estos tiempos solo se inicializaran en el primer nivel

         numeroVidas= 2000;
         numeromonedas=1000;
         numeroTrampas=1400;
         numeroHuesos=2000;
         numeroTykes=6000;
         numeroSpykes=8000;
     }
}

MainWindow::~MainWindow()
{
    delete timer;
    delete timer2;
    delete scene;
    delete ui;
    delete resultadoP;
    delete personaje;
    delete click;

    delete TiempoVida;
    delete TiempoMonedas;
    delete TiempoTrampa;
    delete TiempoHueso;
    delete TiempoTyke;
    delete TiempoSpyke;

    delete fondoSound1;
    delete cortina1Sound;
    delete cortina2Sound;
    delete vidaSound;
    delete monedaSound;
    delete trampaSound;
    delete huesoSound;
    delete SpykeSound;
    delete muerteSound;
    delete ganarSound;
    delete errorSound;

    delete ganar;
    delete perder;

    monedas.clear();
    vida.clear();
    trampa.clear();
    hueso.clear();
    tyke.clear();
    Spyke.clear();

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
    TiempoTyke->start(numeroTykes);

    if(distanciaLCD>=8680)
        TiempoHueso->start(numeroHuesos);

    if(distanciaLCD>=17720)
        TiempoSpyke->start(numeroSpykes);

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
    TiempoHueso->stop();
    TiempoTyke->stop();
    TiempoSpyke->stop();


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
    on_actionDetener_triggered();
    QFile archivo;
    QTextStream escritura;
    QString nombreArchivo;
    nombreArchivo=QFileDialog::getSaveFileName(this,"Guardar_Patida","C://Users//Fafoa//Desktop//Juego//Partidas Guardadas");
    archivo.setFileName(nombreArchivo);
    archivo.open(QIODevice::WriteOnly | QIODevice::Text);

    if(!archivo.isOpen()){
        errorSound->play();
        QMessageBox::critical(this,"ERROR","No se pudo guardar la partida!");
    }
    else {
        click->play();
        escritura.setDevice(&archivo);

        escritura<<personaje->getPersonaje()->getPx()<<"\t"
                 <<personaje->getPersonaje()->getPy()<<"\t"
                 <<personaje->getPersonaje()->getVx()<<"\t"
                 <<contadorVidas<<"\t"<<distanciaLCD<<"\t"<<MonedasLCD<<"\t"<<jugador2<<"\t"<<"|"<<"\t";

        for(int i=0;i<trampa.size();i++){
            escritura<<trampa.at(i)->getItem()->getPx()<<"\t"
                     <<trampa.at(i)->getItem()->getPy()<<"\t"
                     <<trampa.at(i)->getItem()->getVx()<<"\t";

        }
        escritura<<"|"<<"\t";

        for(int i=0;i<hueso.size();i++){
            escritura<<hueso.at(i)->getItem()->getPx()<<"\t"
                     <<hueso.at(i)->getItem()->getPy()<<"\t"
                     <<hueso.at(i)->getItem()->getVx()<<"\t";
        }
        escritura<<"|"<<"\t";

        for(int i=0;i<tyke.size();i++){
            escritura<<tyke.at(i)->getItem()->getPx()<<"\t"
                     <<tyke.at(i)->getItem()->getPy()<<"\t"
                     <<tyke.at(i)->getItem()->getVx()<<"\t";
        }
        escritura<<"|"<<"\t";

        for(int i=0;i<monedas.size();i++){
            escritura<<monedas.at(i)->getItem()->getPx()<<"\t"
                     <<monedas.at(i)->getItem()->getPy()<<"\t"
                     <<monedas.at(i)->getItem()->getVx()<<"\t";
        }
        escritura<<"|"<<"\t";

        for(int i=0;i<vida.size();i++){
            escritura<<vida.at(i)->getItem()->getPx()<<"\t"
                     <<vida.at(i)->getItem()->getPy()<<"\t"
                     <<vida.at(i)->getItem()->getVx()<<"\t";
        }
        escritura<<"|"<<"\t";

        for(int i=0;i<Spyke.size();i++){
            escritura<<Spyke.at(i)->getItem()->getPx()<<"\t"
                     <<Spyke.at(i)->getItem()->getPy()<<"\t"
                     <<Spyke.at(i)->getItem()->getVx()<<"\t";
        }
        escritura<<"|"<<"\t";

        archivo.close();
        QMessageBox::information(this,tr("Guardado"),tr("->Partida guardada correctamente!\n"
                                                             "->Para continuar la partida, haz click en iniciar."));
    }
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
    for(int i=0;i<hueso.size();i++){
        hueso.at(i)->actualizarHueso(dt);

    }

    for(int i=0;i<tyke.size();i++){
        tyke.at(i)->actualizarTyke(dt);
    }

    for(int i=0;i<Spyke.size();i++){
        Spyke.at(i)->actualizar(dt);
    }


   //focus personaje y movimiento
    distanciaLCD=personaje->getPersonaje()->getPx();//se le asigna al contador de distancia la posicion a la qu eva avanzando el personaje   
    ui->Vida->display(contadorVidas);//aumento en la ventana el contador LCD para las vidas
    ui->Distancia->display(distanciaLCD);//aumento en la ventana el contador LCD para la distancia
    ui->Monedas->display(MonedasLCD);//aumento en la ventana el contador LCD para las monedas


    //colision para los personajes con los objetos que apareceran en la escena
    colision(personaje);

    //-----------------------DIFFICULTAD-----------------------
    //Aqui se cambiará el sonido de fondo cuando cambie al nivel 2
    if(distanciaLCD>=8680 && distanciaLCD<=8780  ){
        cortina1Sound->play();//sonido para el cambio al nivel2

        numeroHuesos=1500;
        TiempoHueso->start(numeroHuesos);//hacemos que los huesos salgan menos seguidos

        numeroVidas=3000;
        TiempoVida->stop();
        TiempoVida->start(numeroVidas);//las vidas apareceran menos seguidas

        numeroTrampas=1600;
        TiempoTrampa->stop();
        TiempoTrampa->start(numeroTrampas);//las trampas apareceran menos seguidas
    }
    else if(distanciaLCD>=17600)   //NIVEL 3
    {       
        if(distanciaLCD>=17720 && distanciaLCD<=17800){
            cortina2Sound->play();
            fondoSound2->play();
            fondoSound1->stop();

            numeroVidas=3000;
            TiempoVida->stop();
            TiempoVida->start(numeroVidas);//las vidas apareceran menos seguidas

            numeroTrampas=3000;
            TiempoTrampa->stop();//Quitamos las trampas del tercer nivel
            TiempoTrampa->start(numeroTrampas);

            numeroHuesos=4000;
            TiempoHueso->stop();
            TiempoHueso->start(numeroHuesos);//hacemos que salgan menos huesos porque aumentamos los tykes y aparecera otro enemigo

            TiempoSpyke->stop();
            TiempoSpyke->start(numeroSpykes);

        }

    }
    //--------------PARA CUANDO EL PERSONAJE GANE
    if(personaje->getPersonaje()->getPx()>=29000){
        if(jugador2){
            fondoSound1->stop();
            SpykeSound->stop();
            huesoSound->stop();
            trampaSound->stop();

            timer->stop();
            timer2->stop();
            TiempoTrampa->stop();
            TiempoHueso->stop();
            TiempoTyke->stop();
            TiempoSpyke->stop();

            TiempoMonedas->stop();
            TiempoVida->stop();

            resultadoP->op=5;
            resultadoP->imaganes();
            //QTimer::singleShot(820,resultadoP,SLOT(showMaximized()));

            QTimer::singleShot(810,this,SLOT(ocultar()));

            ganarSound->setMedia(QUrl("qrc:/MusicaJuego/You Win.mp3"));
            ganarSound->setVolume(50);
            ganarSound->play();

            QTimer::singleShot(8000,this,SLOT(esperar()));
            QTimer::singleShot(10000,this,SLOT(parar()));
            //QTimer::singleShot(10200,resultadoP,SLOT(close()));



        }
        else {
            fondoSound1->setVolume(5);
            fondoSound2->setVolume(5);
            huesoSound->setVolume(30);
            trampaSound->setVolume(10);
            SpykeSound->setVolume(30);

            timer->stop();
            timer2->stop();
            TiempoTrampa->stop();
            TiempoHueso->stop();
            TiempoTyke->stop();
            TiempoSpyke->stop();

            TiempoMonedas->stop();
            TiempoVida->stop();

            resultadoP->op=9;
            resultadoP->imaganes();

            QTimer::singleShot(820,resultadoP,SLOT(showMaximized()));

            QTimer::singleShot(810,this,SLOT(ocultar()));

            ganarSound->setMedia(QUrl("qrc:/sonidos/sonidos/Ganador.mp3"));
            ganarSound->setVolume(150);
            ganarSound->play();

            QTimer::singleShot(8000,this,SLOT(esperar()));
            QTimer::singleShot(8000,this,SLOT(parar()));
            QTimer::singleShot(8500,resultadoP,SLOT(close()));

        }
    }





    //---------------GUARDAR VALORES PARA RESULTADOS--------------------
    //Guardar datos en ejecucion
    fstream escritura;
    escritura.open("Guardar.txt",ios::out);
    escritura<<personaje->getPersonaje()->getPx()<<"\t"
             <<personaje->getPersonaje()->getPy()<<"\t"
             <<personaje->getPersonaje()->getVx()<<"\t"
            <<contadorVidas<<"\t"<<distanciaLCD<<"\t"<<MonedasLCD<<"\t";
   escritura.close();

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
            if(contadorVidas==5){
               scene->removeItem(vida.at(i));
               vida.removeAt(i);


            }
            else if (contadorVidas<5) {
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
                MonedasLCD+=2;
            }
        }

//------------------------COLISION CON LAS TRAMPAS-----------------------------------
        //PARA MULTIJUGADOR
        for(int i=0;i<trampa.size();i++){
            if(personaje->collidesWithItem(trampa.at(i))){
                calcularPuntaje();
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
                            TiempoHueso->stop();
                            TiempoTyke->stop();
                            TiempoTrampa->stop();

                            TiempoMonedas->stop();
                            TiempoVida->stop();

                            fondoSound1->stop();
                            fondoSound2->stop();

                            scene->removeItem(trampa.at(i));

                            muerteSound->play();//se reproduce el sonido del GAME OVER

                            personaje->muerte2();

                            //RESULTADOS
                            resultadoP->op=4;
                            resultadoP->imaganes();

                            QTimer::singleShot(7000,this,SLOT(esperar()));//espero un momento para que termine de perder
                            QTimer::singleShot(7050,this,SLOT(ocultar()));//oculto el mainwindow para ver resultados
                            QTimer::singleShot(7051,resultadoP,SLOT(showMaximized()));//muestro los resultados
                            QTimer::singleShot(8000,this,SLOT(ganador()));//llamo a la funcion ganador

                            jugador2=false;
                        }
                    }
                    //para el caso en el que el jugador este jugando con el personaje#1
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
                            TiempoTyke->stop();
                            TiempoHueso->stop();

                            fondoSound1->stop();
                            fondoSound2->stop();

                            TiempoMonedas->stop();
                            TiempoVida->stop();

                            scene->removeItem(trampa.at(i));
                            muerteSound->play();//se reproduce el sonido del GAME OVER

                            personaje->muerte1();


                            //RESULTADOS
                            resultadoP->op=3;
                            resultadoP->imaganes();

                            QTimer::singleShot(7000,this,SLOT(esperar()));//espero un momento para que termine de perder
                            QTimer::singleShot(7200,resultadoP,SLOT(showMaximized()));//muestro los resultados
                            QTimer::singleShot(8000,resultadoP,SLOT(close()));//cierro la vemtana resultados

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
                            TiempoTyke->stop();
                            TiempoTrampa->stop();
                            TiempoMonedas->stop();

                            fondoSound1->stop();
                            fondoSound2->stop();

                            TiempoVida->stop();
                            TiempoMonedas->stop();
                            scene->removeItem(trampa.at(i));

                            muerteSound->play();//se reproduce el sonido del GAME OVER

                            personaje->muerte2();


                            //RESULTADOS
                            resultadoP->op=2;
                            resultadoP->imaganes();

                            QTimer::singleShot(7000,this,SLOT(esperar()));//espero un momento para que termine de perder
                            QTimer::singleShot(7050,this,SLOT(ocultar()));//oculto el mainwindow para ver resultados
                            QTimer::singleShot(7051,resultadoP,SLOT(showMaximized()));//muestro los resultados
                            QTimer::singleShot(8000,this,SLOT(parar()));//me voy nuevamente al menu
                            QTimer::singleShot(8010,resultadoP,SLOT(close()));//cierro la vemtana resultados


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
                            TiempoHueso->stop();
                            TiempoTrampa->stop();

                            fondoSound1->stop();
                            fondoSound2->stop();

                            TiempoMonedas->stop();
                            TiempoVida->stop();
                            scene->removeItem(trampa.at(i));
                            muerteSound->play();//se reproduce el sonido del GAME OVER
                            fondoSound1->setVolume(10);

                            personaje->muerte1();


                            //RESULTADOS
                            resultadoP->op=1;
                            resultadoP->imaganes();

                            QTimer::singleShot(7000,this,SLOT(esperar()));//espero un momento para que termine de perder
                            QTimer::singleShot(7050,this,SLOT(ocultar()));//oculto el mainwindow para ver resultados
                            QTimer::singleShot(7051,resultadoP,SLOT(showMaximized()));//muestro los resultados
                            QTimer::singleShot(8000,this,SLOT(parar()));//me voy nuevamente al menu
                            QTimer::singleShot(8010,resultadoP,SLOT(close()));//cierro la vemtana resultados

                        }
                    }
                }
            }
        }

//------------------------COLISION CON LOS HUESOS-----------------------------------
        for(int i=0;i<hueso.size();i++){            
            if(personaje->collidesWithItem(hueso.at(i))){
                personaje->getPersonaje()->setPx(personaje->getPersonaje()->getPx()-100);
                calcularPuntaje();
                huesoSound->play();


                if(dosjugadores){

                    if(jugador2){
                        if(contadorVidas>0){
                            scene->removeItem(hueso.at(i));
                            hueso.removeAt(i);
                            contadorVidas--;

                        }
                        //Muere el personaje 2
                        else {
                            timer->stop();
                            TiempoTyke->stop();
                            TiempoHueso->stop();
                            TiempoTrampa->stop();

                            TiempoMonedas->stop();
                            TiempoVida->stop();

                            fondoSound1->stop();
                            fondoSound2->stop();

                            scene->removeItem(hueso.at(i));
                            muerteSound->play();//se reproduce el sonido del GAME OVER

                            personaje->muerte2();
                            //RESULTADOS
                            resultadoP->op=4;
                            resultadoP->imaganes();
                            QTimer::singleShot(7000,this,SLOT(esperar()));//espero un momento para que termine de perder
                            QTimer::singleShot(7050,this,SLOT(ocultar()));//oculto el mainwindow para ver resultados
                            QTimer::singleShot(7051,resultadoP,SLOT(showMaximized()));//muestro los resultados
                            QTimer::singleShot(8000,this,SLOT(ganador()));//llamo a la funcion ganador


                           jugador2=false;
                        }
                    }
                    else {
                        if(contadorVidas>0){

                            scene->removeItem(hueso.at(i));
                            hueso.removeAt(i);
                            contadorVidas--;

                        }
                        //Muere el personaje 1
                        else {
                            timer->stop();
                            TiempoTyke->stop();
                            TiempoTrampa->stop();
                            TiempoHueso->stop();                          
                            TiempoMonedas->stop();
                            TiempoVida->stop();

                            fondoSound1->stop();
                            fondoSound2->stop();

                            scene->removeItem(hueso.at(i));
                            muerteSound->play();//se reproduce el sonido del GAME OVER
                            personaje->muerte1();

                            //RESULTADOS
                            resultadoP->op=3;
                            resultadoP->imaganes();

                            QTimer::singleShot(7000,this,SLOT(esperar()));//espero un momento para que termine de perder
                            QTimer::singleShot(7200,resultadoP,SLOT(showMaximized()));//muestro los resultados
                            QTimer::singleShot(9000,resultadoP,SLOT(close()));//cierro la vemtana resultados

                        }
                    }
                }
                //Cuando solo es un jugador
                else {
                    if(jugador2){//SI ELIGE EL PERSONAJE 2
                        if(contadorVidas>0){
                            scene->removeItem(hueso.at(i));
                            hueso.removeAt(i);
                            contadorVidas--;
                        }
                        //CUANDO YA NO TENGA VIDAS
                        else {
                            timer->stop();
                            TiempoTyke->stop();
                            TiempoTrampa->stop();
                            TiempoHueso->stop();
                            TiempoMonedas->stop();
                            TiempoVida->stop();

                            fondoSound1->stop();
                            fondoSound2->stop();

                            scene->removeItem(hueso.at(i));
                            muerteSound->play();//se reproduce el sonido del GAME OVER

                            personaje->muerte2(); //muerte2



                            //RESULTADOS
                            resultadoP->op=2;
                            resultadoP->imaganes();
                            QTimer::singleShot(7000,this,SLOT(esperar()));//espero un momento para que termine de perder
                            QTimer::singleShot(7050,this,SLOT(ocultar()));//oculto el mainwindow para ver resultados
                            QTimer::singleShot(7051,resultadoP,SLOT(showMaximized()));//muestro los resultados
                            QTimer::singleShot(8000,this,SLOT(parar()));//me voy nuevamente al menu
                            QTimer::singleShot(8010,resultadoP,SLOT(close()));//cierro la vemtana resultados


                        }
                    }
                    //Personaje 1
                    else {//SI ELIGE EL PERSONAJE 1
                        if(contadorVidas>0){

                            scene->removeItem(hueso.at(i));
                            hueso.removeAt(i);
                            contadorVidas--;
                        }
                        //CUANDO YA NO TIENE VIDAS
                        else {
                            timer->stop();
                            TiempoTyke->stop();
                            TiempoTrampa->stop();
                            TiempoHueso->stop();
                            TiempoMonedas->stop();
                            TiempoVida->stop();

                            fondoSound1->stop();
                            fondoSound2->stop();

                            scene->removeItem(hueso.at(i));
                            muerteSound->play();//se reproduce el sonido del GAME OVER

                            personaje->muerte1(); //muerte2

                            //RESULTADOS
                            resultadoP->op=1;
                            resultadoP->imaganes();
                            QTimer::singleShot(7000,this,SLOT(esperar()));//espero un momento para que termine de perder
                            QTimer::singleShot(7050,this,SLOT(ocultar()));//oculto el mainwindow para ver resultados
                            QTimer::singleShot(7051,resultadoP,SLOT(showMaximized()));//muestro los resultados
                            QTimer::singleShot(8000,this,SLOT(parar()));//me voy nuevamente al menu
                            QTimer::singleShot(8010,resultadoP,SLOT(close()));//cierro la vemtana resultados

                        }
                    }
                }
            }
        }

//------------------------COLISION CON LOS SPIKES-----------------------------------
        //PARA MULTIJUGADOR
        for(int i=0;i<Spyke.size();i++){
            if(personaje->collidesWithItem(Spyke.at(i))){
                calcularPuntaje();
                SpykeSound->play();

                if(dosjugadores){//si son dos jugadores
                    if(jugador2){//si escogio el jugador2
                        if(contadorVidas>0){//SI EL PERSONAJE AUN CUENTA CON VIDAS
                            scene->removeItem(Spyke.at(i));
                            Spyke.removeAt(i);
                            contadorVidas=0;
                        }
                        //muere el personaje 2
                        else {//SI EL PERSONAJE YA NO TIENE VIDAS
                            timer->stop();
                            TiempoHueso->stop();
                            TiempoTyke->stop();
                            TiempoTrampa->stop();
                            TiempoSpyke->stop();
                            TiempoMonedas->stop();
                            TiempoVida->stop();

                            fondoSound1->stop();
                            fondoSound2->stop();

                            scene->removeItem(Spyke.at(i));
                            muerteSound->play();//se reproduce el sonido del GAME OVER
                            personaje->muerte2();
                            //RESULTADOS
                            resultadoP->op=4;
                            resultadoP->imaganes();
                            QTimer::singleShot(7000,this,SLOT(esperar()));//espero un momento para que termine de perder
                            QTimer::singleShot(7050,this,SLOT(ocultar()));//oculto el mainwindow para ver resultados
                            QTimer::singleShot(7051,resultadoP,SLOT(showMaximized()));//muestro los resultados
                            QTimer::singleShot(8000,this,SLOT(ganador()));//llamo a la funcion ganador

                            //AQUI VIENE LA PARTE DE LOS RESULTADOS

                            jugador2=false;
                        }
                    }
                    //para el caso en el que el jugador este jugando con el personaje#1
                    else {
                        if(contadorVidas>0){//SI EL PERSONAJE AUN CUENTA CON VIDAS

                            scene->removeItem(Spyke.at(i));
                            Spyke.removeAt(i);
                            contadorVidas=0;

                        }
                        //MUERE PERSONAJE 1
                        else {//SI EL PERSONAJE YA NO TIENE VIDAS
                            timer->stop();
                            TiempoTrampa->stop();
                            TiempoTyke->stop();
                            TiempoHueso->stop();
                            TiempoSpyke->stop();
                            TiempoMonedas->stop();
                            TiempoVida->stop();

                            fondoSound1->stop();
                            fondoSound2->stop();

                            scene->removeItem(Spyke.at(i));
                            muerteSound->play();//se reproduce el sonido del GAME OVER

                            personaje->muerte1();
                            //RESULTADOS
                            resultadoP->op=3;
                            resultadoP->imaganes();

                            QTimer::singleShot(7000,this,SLOT(esperar()));//espero un momento para que termine de perder
                            QTimer::singleShot(7200,resultadoP,SLOT(showMaximized()));//muestro los resultados
                            QTimer::singleShot(9000,resultadoP,SLOT(close()));//cierro la vemtana resultados

                        }
                    }
                }
                //PARA UN SOLO JUGADOR
                else {
                    if(jugador2){
                        if(contadorVidas>0){
                            scene->removeItem(Spyke.at(i));
                            Spyke.removeAt(i);
                            contadorVidas=0;
                        }
                        else {
                            //CUANDO MUERE EL PERSONAJE 2
                            timer->stop();
                            TiempoTyke->stop();
                            TiempoTrampa->stop();
                            TiempoMonedas->stop();
                            TiempoSpyke->stop();
                            TiempoVida->stop();
                            TiempoMonedas->stop();

                            fondoSound1->stop();
                            fondoSound2->stop();

                            scene->removeItem(Spyke.at(i));
                            muerteSound->play();//se reproduce el sonido del GAME OVER

                            personaje->muerte2();

                            //RESULTADOS
                            resultadoP->op=2;
                            resultadoP->imaganes();

                            QTimer::singleShot(7000,this,SLOT(esperar()));//espero un momento para que termine de perder
                            QTimer::singleShot(7050,this,SLOT(ocultar()));//oculto el mainwindow para ver resultados
                            QTimer::singleShot(7051,resultadoP,SLOT(showMaximized()));//muestro los resultados
                            QTimer::singleShot(8000,this,SLOT(parar()));//me voy nuevamente al menu
                            QTimer::singleShot(8010,resultadoP,SLOT(close()));//cierro la vemtana resultados

                        }
                    }
                    else {  //JUGADOR 1
                        if(contadorVidas>0){
                            scene->removeItem(Spyke.at(i));
                            Spyke.removeAt(i);
                            contadorVidas=0;
                        }
                        else {
                            //CUANDO MUERE EL  JUGADOR 1
                            timer->stop();
                            TiempoTrampa->stop();
                            TiempoHueso->stop();
                            TiempoTrampa->stop();
                            TiempoSpyke->stop();
                            TiempoMonedas->stop();
                            TiempoVida->stop();

                            fondoSound1->stop();
                            fondoSound2->stop();

                            scene->removeItem(Spyke.at(i));
                            muerteSound->play();//se reproduce el sonido del GAME OVER

                            personaje->muerte1();

                            //RESULTADOS
                            resultadoP->op=2;
                            resultadoP->imaganes();
                            QTimer::singleShot(7000,this,SLOT(esperar()));//espero un momento para que termine de perder
                            QTimer::singleShot(7050,this,SLOT(ocultar()));//oculto el mainwindow para ver resultados
                            QTimer::singleShot(7051,resultadoP,SLOT(showMaximized()));//muestro los resultados
                            QTimer::singleShot(8000,this,SLOT(parar()));//me voy nuevamente al menu
                            QTimer::singleShot(8010,resultadoP,SLOT(close()));//cierro la vemtana resultados
                        }
                    }
                }
            }
        }


}

void MainWindow::ponerValores()
{
    if(posX>=500){
        scene->setSceneRect(posX-300,0,1000,496);
    }


    for(int i=0;i<tram.size();i+=3){
        trampa.append(new mostrarobstaculos(tram.at(i),tram.at(i+1)));
        trampa.last()->moverTrampa();
        trampa.last()->getItem()->setVel(150,0);
        scene->addItem(trampa.last());
    }

    for(int i=0;i<hue.size();i+=3){
        hueso.append(new mostrarobstaculos(hue.at(i),hue.at(i+1)));
        hueso.last()->moverHueso();
        hueso.last()->getItem()->setVel(120,0);
        scene->addItem(hueso.last());
    }

    for(int i=0;i<tyk.size();i+=3){
        tyke.append(new mostrarobstaculos(tyk.at(i),tyk.at(i+1)));
        tyke.last()->moverTyke();
        tyke.last()->getItem()->setVel(150,0);
        scene->addItem(tyke.last());
    }
    for(int i=0;i<mon.size();i+=3){
        monedas.append(new mostrarobstaculos(mon.at(i),mon.at(i+1)));
        monedas.last()->moverMoneda();
        monedas.last()->getItem()->setVel(350,600);
        scene->addItem(monedas.last());
    }
    for(int i=0;i<vid.size();i+=3){
        vida.append(new mostrarobstaculos(vid.at(i),vid.at(i+1)));
        vida.last()->moverVida();
        vida.last()->getItem()->setVel(0,0);
        scene->addItem(vida.last());

    }
    for(int i=0;i<spyk.size();i+=3){
        Spyke.append(new mostrarobstaculos(spyk.at(i),spyk.at(i+1)));
        Spyke.last()->moverSpyke();
        Spyke.last()->getItem()->setVel(150,0);
        scene->addItem(Spyke.last());
    }

}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_W){
        personaje->getPersonaje()->setPy(personaje->getPersonaje()->getPy()+30);
    }
    if(event->key()==Qt::Key_S){
        personaje->getPersonaje()->setPy(personaje->getPersonaje()->getPy()-30);
    }
    if(event->key()==Qt::Key_D){
        personaje->getPersonaje()->setPx(personaje->getPersonaje()->getPx()+30);
    }

    //Para activar botones desde el teclado
    if(event->key()==Qt::Key_Space){
        on_actionIniciar_triggered();
    }
    if(event->key()==Qt::Key_P){
        on_actionDetener_triggered();
    }
    if(event->key()==Qt::Key_G){
        on_actionGuardar_triggered();
    }
    if(event->key()==Qt::Key_H){
        on_actionRegresar_al_menu_triggered();
    }
    if(event->key()==Qt::Key_R){
        reiniciar();
    }
}
void MainWindow::reiniciar()
{
    cargar=false;
    timer->stop();
    timer2->stop();

    fondoSound1->stop();
    fondoSound2->stop();
    ganarSound->stop();

    TiempoTrampa->stop();
    TiempoHueso->stop();
    TiempoTyke->stop();
    TiempoSpyke->stop();

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
    fondoSound2->stop();
    ganarSound->stop();

    TiempoTrampa->stop();
    TiempoHueso->stop();
    TiempoTyke->stop();
    TiempoSpyke->stop();

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
    fondoSound2->stop();
    ganarSound->stop();

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

    for(int i=0; i<hueso.length();i++){
        scene->removeItem(hueso.at(i));
    }

    for(int i=0;i<tyke.size();i++){
        scene->removeItem(tyke.at(i));
    }

    for(int i=0;i<Spyke.size();i++){
        scene->removeItem(Spyke.at(i));
    }


    scene->removeItem(personaje);

}
void MainWindow::borrarelementos()
{
    vida.clear();
    monedas.clear();
    trampa.clear();
    hueso.clear();
    tyke.clear();
    Spyke.clear();

    delete personaje;
}

//metodos para el jugador y multijugador
void MainWindow::unjugador()
{
    if(cargar==true){
        ponerValores();
        if(jugador2){
            personaje=new mostrarPersonaje(posX,posY);
            personaje->volar2();
            scene->addItem(personaje);
            personaje->getPersonaje()->setVx(velocidadNivel1);
        }
        else{
            personaje=new mostrarPersonaje(posX,posY);
            personaje->volar1();
            scene->addItem(personaje);
            personaje->getPersonaje()->setVx(velocidadNivel1);
        }
    }
    else{
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
    py=rand() % 400+10;

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

void MainWindow::ganador()
{

    if(puntaje1<puntaje2){
        resultadoP->op=4;
        resultadoP->imaganes();
        resultadoP->show();
        QMessageBox::information(this,tr("Felicidades"),tr("Jugador 2 has ganado!"));
        //win2->play();
        MainWindow::hide();
        QTimer::singleShot(14000,this,SLOT(parar()));
        QTimer::singleShot(15000,resultadoP,SLOT(close()));

        reiniciar();
    }
    else {
        resultadoP->op=3;
        resultadoP->imaganes();
        resultadoP->show();
        QMessageBox::information(this,tr("Felicidades"),tr("Jugador 1 has ganado!"));
//        win2->play();
        MainWindow::hide();
        QTimer::singleShot(14000,this,SLOT(parar()));
        QTimer::singleShot(15000,resultadoP,SLOT(close()));

        reiniciar();
    }
}

void MainWindow::calcularPuntaje()
{
    if(jugador2){
        puntaje2=distanciaLCD*2+(MonedasLCD*8);
    }
    else {
        puntaje1=distanciaLCD*2+(MonedasLCD*8);
    }
}

//-----------------------------
void MainWindow::MonedasAleatorias()//falta por poner en Tom&Jerry
{
    float py=0,vx=0,vy=0;
    //py=rand() % 450+250;
    py=rand() % 450+400;
    vx=0;
    vy=500;

    monedas.append(new mostrarobstaculos(personaje->getPersonaje()->getPx()+800,py));
    monedas.last()->moverMoneda();
    monedas.last()->getItem()->setVel(vx,vy);
    scene->addItem(monedas.last());

    if(monedas.front()->getItem()->getPx() <= 0){
        scene->removeItem(monedas.front());
        monedas.pop_front();
    }
}

void MainWindow::TrampasAleatorias()
{
    float py=0,vx=0;
    py=rand() % 350+50;//posicion en y
    vx=250;

    trampa.append(new mostrarobstaculos(personaje->getPersonaje()->getPx()+1000,py));
    trampa.last()->moverTrampa();
    trampa.last()->getItem()->setVel(vx,0);
    scene->addItem(trampa.last());

    if(trampa.front()->getItem()->getPx()<=0){
        scene->removeItem(trampa.front());
        trampa.pop_front();
    }
}

void MainWindow::HuesosAleatorios()
{
    float py=0,vx=0,vy=0;
    py= rand() % 200+350;//final-inicio
    vx=rand()%250+200;
    vy=600;

    hueso.append(new mostrarobstaculos(personaje->getPersonaje()->getPx()+1000,py));
    hueso.last()->moverHueso();
    hueso.last()->getItem()->setVel(vx,vy);
    scene->addItem(hueso.last());

    if(hueso.front()->getItem()->getPx()<=0){
        scene->removeItem(hueso.front());
        hueso.pop_front();
    }
}

void MainWindow:: TykeAleatorios()
{
    float posy,posx, vx=0,vy=0,radio;

    posy=370;//final-inicio
    posx=rand() % 20000+18000;//final-inicio
    radio=rand()% 40+20;
    vx=5;
    vy=5;

    tyke.append(new mostrarobstaculos(personaje->getPersonaje()->getPx()+1000,posy));
    tyke.append(new mostrarobstaculos(posx,personaje->getPersonaje()->getPy()+1000));

    //tyke.append(new mostrarobstaculos(personaje->getPersonaje()->getPy()+1000,px));


    tyke.last()->moverTyke();
    tyke.last()->getItem()->setVel(vx,vy);

    tyke.last()->getItem()->setPx(posx);
    tyke.last()->getItem()->setPy(posy);

    tyke.last()->getItem()->setCx(posx+radio);
    tyke.last()->getItem()->setCy(posy);

    scene->addItem(tyke.last());

    if(tyke.front()->getItem()->getPx()<=0){
        scene->removeItem(tyke.front());
        tyke.pop_front();
    }
}

void MainWindow::SpykeAleatorios()
{
    float py,vx=0;
    py=rand() % 280+1;//posicion en y
    vx=250;

    Spyke.append(new mostrarobstaculos(personaje->getPersonaje()->getPx()+1000,py));
    Spyke.last()->moverSpyke();
    Spyke.last()->getItem()->setVel(vx,0);
    scene->addItem(Spyke.last());

    if(Spyke.front()->getItem()->getPx()<=0){
        scene->removeItem(Spyke.front());
        Spyke.pop_front();
    }
}
