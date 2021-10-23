#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>
#include <time.h>
#include <QFile>
#include <QKeyEvent>
#include <QPixmap>
#include <QDebug>
#include <QApplication>
#include <QKeyEvent>
#include <fstream>
#include <string>
#include <iostream>
#include <QMessageBox>
#include <QFileDialog>
#include <QMediaPlayer>

#include "mostrarpersonaje.h"
#include "moverpersonaje.h"

#include "mostrarobstaculos.h"
#include "moverobstaculos.h"

#define dt 0.02

using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    //destrucctor
    ~MainWindow();

    //metodos de simualcion
    void reiniciar();//metodo para reiniciar el juego desde cero
    void reiniciarMultijugador();

    //metodos get-set
    void setDosjugadores(bool value);

   //modos de juego
    void unjugador();
    void multijugador();
    void dificultad();

    //quitar-borrar elementos
    void quitarelementos();
    void borrarelementos();

    bool Multiplayer=false;
    bool jugador2;

    QList<float> mon;
    QList<float> vid;

    float posX=0;
    float posY=0;

    //cuenta LCD
    int contadorVidas;
    int distanciaLCD;
    int MonedasLCD;


private slots:
    void keyPressEvent(QKeyEvent* event);

    void on_actionDetener_triggered();
    void on_actionIniciar_triggered();
    void on_actionReincicar_triggered();
    void on_actionRegresar_al_menu_triggered();
    void actualizar();
    void actualizar2();
    void on_actionGuardar_triggered();

    //vidas y monedas
    void VidasAleatorias(void);
    void MonedasAleatorias(void);

    void on_Vida_overflow();
    void on_Distancia_overflow();
    void on_Monedas_overflow();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    QTimer *timer2;
    QGraphicsScene *scene;
    QLine *linea;   
    mostrarPersonaje *personaje;//puntero para mostrar graficamente el personaje

    //tiempos para vidas y monedas
    QTimer *TiempoVida;
    QTimer *TiempoMonedas;

    //Lista para los objetos
    QList<mostrarobstaculos*> vida;
    QList<mostrarobstaculos*> monedas;

    //sonidos para la mainwindow
    QMediaPlayer* click;
    QMediaPlayer* fondoSound1;
    QMediaPlayer* fondoSound2;
    QMediaPlayer* cortina1Sound;
    QMediaPlayer* cortina2Sound;

    //contadores para la cantidad de objetos
    int numeroVidas;
    int numeromonedas;

    //multijugador
    bool dosjugadores,ban=false,ban1=false;//
    int puntaje1=0,puntaje2=0;//

    int valor=550;
    int velocidadNivel1=200;        
    void focus();
};
#endif // MAINWINDOW_H
