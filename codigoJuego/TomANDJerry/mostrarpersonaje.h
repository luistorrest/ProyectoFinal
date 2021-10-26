#ifndef MOSTRARPERSONAJE_H
#define MOSTRARPERSONAJE_H

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QTimer>
#include <QObject>
#include "moverpersonaje.h"

class mostrarPersonaje: public QObject, public QGraphicsItem
{
public:
    mostrarPersonaje(float _x,float _y);
    void actualizar(float dt);
    ~mostrarPersonaje();

    moverPersonaje *getPersonaje() const;
    void setPersonaje(moverPersonaje *value);

public slots:
    void volar1();
    void volar2();
    void muerte1();
    void muerte2();


private:

    QTimer *imagenVolar1;
    QTimer *imagenVolar2;
    QTimer *imagenMuerte1;
    QTimer *imagenMuerte2;

    int imgVolar=1;
    int imgVolar2=1;
    int imgMuerte=1;
    int imgMuerte2=1;

    int w, h;
    QPixmap pixmap;
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    moverPersonaje *personaje;
    void stopTimer();
};

#endif // MOSTRARPERSONAJE_H
