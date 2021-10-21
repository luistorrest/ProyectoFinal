#include "mostrarpersonaje.h"

mostrarPersonaje::mostrarPersonaje(float _x, float _y)
{
    setPos(_x,_y);
    personaje=new moverPersonaje(_x,_y);

    imagenVolar1= new QTimer();
    imagenVolar2= new QTimer();

    connect(imagenVolar1,&QTimer::timeout,this,&mostrarPersonaje::volar1);
    connect(imagenVolar2,&QTimer::timeout,this,&mostrarPersonaje::volar2);
}

QRectF mostrarPersonaje::boundingRect() const
{
    return QRect(0,0,w,h);
}

void mostrarPersonaje::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(boundingRect(),pixmap,pixmap.rect());
}

void mostrarPersonaje::stopTimer()
{
    imagenVolar1->stop();
    imagenVolar2->stop();

}

moverPersonaje *mostrarPersonaje::getPersonaje() const
{
    return personaje;
}

void mostrarPersonaje::setPersonaje(moverPersonaje *value)
{
    personaje = value;
}

void mostrarPersonaje::actualizar(float dt)
{
    personaje->actualizar(dt);
    setPos(personaje->getPx(),personaje->getPy());   //setPos para convertir lo que estaba fisico en grafico

}
mostrarPersonaje::~mostrarPersonaje()
{
    delete personaje;
    delete imagenVolar1;
    delete imagenVolar2;
}

void mostrarPersonaje::volar1()
{
    stopTimer();
    imagenVolar1->start(100);
    switch (imgVolar) {
    case 1:
       pixmap.load(":/ImagenesJuego/Tom/Tom1.png");
        w=146; h=100;
        imgVolar++;
        break;
    case 2:
        pixmap.load(":/ImagenesJuego/Tom/Tom2.png");
        w=146; h=100;
        imgVolar++;
        break;
    case 3:
        pixmap.load(":/ImagenesJuego/Tom/Tom3.png");
        w=146; h=100;
        imgVolar++;
        break;
    case 4:
        pixmap.load(":/ImagenesJuego/Tom/Tom4.png");
        w=146; h=100;
        imgVolar=1;
        break;

    }
}

void mostrarPersonaje::volar2()
{
    stopTimer();
    imagenVolar2->start(100);
    switch (imgVolar2) {
    case 1:
        pixmap.load(":/ImagenesJuego/Jerry/Jerry1.png");
        w=146; h=100;
        imgVolar2++;
        break;
    case 2:
        pixmap.load(":/ImagenesJuego/Jerry/Jerry2.png");
        w=146; h=100;
        imgVolar2++;
        break;
    case 3:
        pixmap.load(":/ImagenesJuego/Jerry/Jerry3.png");
        w=146; h=100;
        imgVolar2=1;
        break;

    }
}

