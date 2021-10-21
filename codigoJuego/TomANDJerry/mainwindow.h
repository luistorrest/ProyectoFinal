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

using namespace std;
#include "mostrarpersonaje.h"
#define dt 0.02


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
    void actualizar2();
    void on_actionGuardar_triggered();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    QTimer *timer2;
    QGraphicsScene *scene;
    QLine *linea;   
    mostrarPersonaje *personaje;//puntero para mostrar graficamente el personaje

    //multijugador
    bool dosjugadores,ban=false,ban1=false;//
    int puntaje1=0,puntaje2=0;//

    int valor=550;
    int velocidadNivel1=200;        
    void focus();
};
#endif // MAINWINDOW_H
