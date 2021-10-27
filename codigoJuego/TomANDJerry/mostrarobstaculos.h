#ifndef MOSTRAROBSTACULOS_H
#define MOSTRAROBSTACULOS_H
#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QTimer>
#include <QObject>
#include <iostream>
#include "moverobstaculos.h"

class mostrarobstaculos: public QObject, public QGraphicsItem
{
private:

    int w, h;
    QTimer *timer;
    QPixmap pixmap;

    float px;
    float py;
    float vx;

    moverobstaculos *obstaculo;

public:   
    //construcctor
    mostrarobstaculos(float x, float y);
    ~mostrarobstaculos();

    //metodo get-set
    moverobstaculos *getItem();

    //metodos para la simulacion
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void actualizar(float dt);
    void actualizarMoneda(float dt);
    void actualizarHueso(float dt);
    void actualizarTyke(float dt);

    //metodos para controlar los objetos que apareceran
    void moverVida();
    void moverMoneda();
    void moverTrampa();
    void moverHueso();
    void moverTyke();

    //Imagenes
    int imgVida;
    int imgMoneda;
    int imgTrampa;
    int imgHueso;
    int imgTyke;

private slots:
    //sprites
    void vida();
    void moneda();   
    void trampa();
    void hueso();
    void tyke();

};

#endif // MOSTRAROBSTACULOS_H
