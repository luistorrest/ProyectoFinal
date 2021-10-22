#include "mostrarobstaculos.h"


mostrarobstaculos::mostrarobstaculos(float x, float y)
{
    setPos(x,y);
    obstaculo=new moverobstaculos(x,y);

    //valor imagenes
//    imgTyke=1;
//    imgHueso=1;
//    imgTrampa=1;
//    imgSpyke=1;

    imgVida=1;
    imgMoneda=1;

    timer= new QTimer();
    timer->start(150);

}
//Destrucctor
mostrarobstaculos::~mostrarobstaculos()
{
    delete obstaculo;
    delete timer;


}

//Metodo get-set
moverobstaculos *mostrarobstaculos::getItem()
{
    return  obstaculo;
}

//Metodo de simulacion
QRectF mostrarobstaculos::boundingRect() const
{
    return QRect(0,0,w,h);
}

//Coneccion timer con slots
void mostrarobstaculos::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
   painter->drawPixmap(boundingRect(),pixmap,pixmap.rect());
}


void mostrarobstaculos::moverVida()
{
    connect(timer,&QTimer::timeout,this,&mostrarobstaculos::vida);
}

void mostrarobstaculos::moverMoneda()
{
    connect(timer,&QTimer::timeout,this,&mostrarobstaculos::moneda);
}


void mostrarobstaculos::vida()
{
    switch (imgVida) {
    case 1:
        pixmap.load(":/ImagenesJuego/vidas/Vida1.png");
        imgVida++;
        w=50; h=40;
        break;
    case 2:
        pixmap.load(":/ImagenesJuego/vidas/Vida1.png");
        imgVida++;
        w=45; h=35;
        break;
    case 3:
        pixmap.load(":/ImagenesJuego/vidas/Vida1.png");
        imgVida++;
        w=50; h=40;
        break;
    case 4:
        pixmap.load(":/ImagenesJuego/vidas/Vida1.png");
        imgVida=1;
        w=45; h=35;
        break;
    }
}

void mostrarobstaculos::moneda()
{
    switch (imgMoneda) {
    case 1:
        pixmap.load(":/ImagenesJuego/monedas/moneda1.png");
        imgMoneda++;
        w=40;h=40;
        break;
    case 2:
        pixmap.load(":/ImagenesJuego/monedas/moneda2.png");
        imgMoneda++;
        w=26;h=40;
        break;
    case 3:
        pixmap.load(":/ImagenesJuego/monedas/moneda3.png");
        imgMoneda++;
        w=10;h=40;
        break;
    case 4:
        pixmap.load(":/ImagenesJuego/monedas/moneda4.png");
        imgMoneda=1;
        w=26;h=40;
        break;

    }
}


//Slots
void mostrarobstaculos::actualizar(float dt)
{
    obstaculo->actualizar(dt);
    setPos(obstaculo->getPx(),obstaculo->getPy());
}

void mostrarobstaculos::actualizarMoneda(float dt)
{
    obstaculo->ActualizarMoneda(dt);
    setPos(obstaculo->getPx(),obstaculo->getPy());
}
