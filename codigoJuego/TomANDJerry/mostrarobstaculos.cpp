#include "mostrarobstaculos.h"


mostrarobstaculos::mostrarobstaculos(float x, float y)
{
    setPos(x,y);
    obstaculo=new moverobstaculos(x,y);

    //contador para alternar las imagenes
    imgVida=1;
    imgMoneda=1;
    imgTrampa=1;
    imgHueso=1;
    imgTyke=1;

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

void mostrarobstaculos::moverTrampa()
{
    connect(timer,&QTimer::timeout,this,&mostrarobstaculos::trampa);
}

void mostrarobstaculos::moverHueso()
{
    connect(timer,&QTimer::timeout,this,&mostrarobstaculos::hueso);
}

void mostrarobstaculos::moverTyke()
{
     connect(timer,&QTimer::timeout,this,&mostrarobstaculos::tyke);
}


//-----------------Animicaiones de los objetos(es decir las imagenes)-----------------
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
        imgVida=1;
        w=45; h=35;
        break;
//    case 3:
//        pixmap.load(":/ImagenesJuego/vidas/Vida1.png");
//        imgVida++;
//        w=50; h=40;
//        break;
//    case 4:
//        pixmap.load(":/ImagenesJuego/vidas/Vida1.png");
//        imgVida=1;
//        w=45; h=35;
//        break;
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

void mostrarobstaculos::trampa()
{
    switch (imgTrampa) {
    case 1:
        pixmap.load(":/ImagenesJuego/Trampa/Trampa1.png");
        imgTrampa++;
        w=90; h=66;
        break;
    case 2:
        pixmap.load(":/ImagenesJuego/Trampa/Trampa1.png");
        imgTrampa++;
        w=90 ;h=66;
        break;
    case 3:
        pixmap.load(":/ImagenesJuego/Trampa/Trampa2.png");
        imgTrampa++;
        w=90 ;h=66;
        break;
    case 4:
        pixmap.load(":/ImagenesJuego/Trampa/Trampa2.png");
        imgTrampa=1;
        w=90 ;h=66;
        break;

    }
}

void mostrarobstaculos::hueso()
{
    switch (imgHueso) {
    case 1:
        pixmap.load("::/ImagenesJuego/Hueso/Hueso0.png");
        imgHueso++;
        w=90; h=66;
        break;
    case 2:
        pixmap.load(":/ImagenesJuego/Hueso/Hueso1.png");
        imgHueso++;
        w=90 ;h=66;
        break;
    case 3:
        pixmap.load(":/ImagenesJuego/Hueso/Hueso2.png");
        imgHueso++;
        w=90 ;h=66;
        break;
    case 4:
        pixmap.load(":/ImagenesJuego/Hueso/Hueso3.png");
        imgHueso++;
        w=90 ;h=66;
        break;

    case 5:
        pixmap.load(":/ImagenesJuego/Hueso/Hueso4.png");
        imgHueso++;
        w=90 ;h=66;
        break;
    case 6:
        pixmap.load(":/ImagenesJuego/Hueso/Hueso5.png");
        imgHueso++;
        w=90 ;h=66;
        break;
    case 7:
        pixmap.load(":/ImagenesJuego/Hueso/Hueso6.png");
        imgHueso++;
        w=90 ;h=66;
        break;
    case 8:
        pixmap.load(":/ImagenesJuego/Hueso/Hueso7.png");
        imgHueso++;
        w=90 ;h=66;
        break;
    case 9:
        pixmap.load(":/ImagenesJuego/Hueso/Hueso8.png");
        imgHueso=1;
        w=90 ;h=66;
        break;

    }
}

void mostrarobstaculos::tyke()
{
    switch (imgTyke) {
    case 1:
        pixmap.load(":/ImagenesJuego/Tyke/tyke1.png");
        imgTyke++;
        w=90; h=66;
        break;
    case 2:
        pixmap.load(":/ImagenesJuego/Tyke/tyke2.png");
        imgTyke=1;
        w=90; h=66;
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

void mostrarobstaculos::actualizarHueso(float dt)
{
    obstaculo->ActualizarHueso(dt);
    setPos(obstaculo->getPx(),obstaculo->getPy());
}

void mostrarobstaculos::actualizarTyke(float dt)
{
    obstaculo->ActualizarTyke(dt);
    setPos(obstaculo->getPx(),obstaculo->getPy());
}




