#include "mostrarpersonaje.h"

mostrarPersonaje::mostrarPersonaje(float _x, float _y)
{
    setPos(_x,_y);
    personaje=new moverPersonaje(_x,_y);

    imagenVolar1= new QTimer();
    imagenVolar2= new QTimer();
    imagenMuerte1= new QTimer();
    imagenMuerte2= new QTimer();

    connect(imagenVolar1,&QTimer::timeout,this,&mostrarPersonaje::volar1);
    connect(imagenVolar2,&QTimer::timeout,this,&mostrarPersonaje::volar2);

    connect(imagenMuerte1,&QTimer::timeout,this,&mostrarPersonaje::muerte1);
    connect(imagenMuerte2,&QTimer::timeout,this,&mostrarPersonaje::muerte2);
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
    delete imagenMuerte1;
    delete imagenMuerte2;
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

void mostrarPersonaje::muerte1()
{
    stopTimer();
    imagenMuerte1->start(100);
    switch (imgMuerte) {
    case 1:
        pixmap.load(":/ImagenesJuego/Muerte1/MuerteTom1.png");
        w=80; h=80;
        imgMuerte++;
        break;
    case 2:
        pixmap.load(":/ImagenesJuego/Muerte1/MuerteTom1.png");
        w=80; h=80;
        imgMuerte++;
        break;

    case 3:
        pixmap.load(":/ImagenesJuego/Muerte1/MuerteTom1.png");
        w=80; h=80;
        imgMuerte++;
        break;
    case 4:
        pixmap.load(":/ImagenesJuego/Muerte1/MuerteTom1.png");
        w=80; h=80;
        imgMuerte++;
        break;

    case 5:
        pixmap.load(":/ImagenesJuego/Muerte1/MuerteTom2.png");
        w=100; h=100;
        imgMuerte++;
        break;

    case 6:
        pixmap.load(":/ImagenesJuego/Muerte1/MuerteTom2.png");
        w=80; h=80;
        imgMuerte++;
        break;
    case 7:
        pixmap.load(":/ImagenesJuego/Muerte1/MuerteTom2.png");
        w=60; h=60;
        imgMuerte++;
        break;
    case 8:
        pixmap.load(":/ImagenesJuego/Muerte1/MuerteTom2.png");
        w=40; h=40;
        imgMuerte++;
        break;
    case 9:
        pixmap.load(":/ImagenesJuego/Muerte1/MuerteTom2.png");
        w=30; h=30;
        imgMuerte++;
        break;
    case 10:
        pixmap.load(":/ImagenesJuego/Muerte1/MuerteTom2.png");
        w=20; h=20;
        imgMuerte++;
        break;
    case 11:
        pixmap.load(":/ImagenesJuego/Muerte1/MuerteTom2.png");
        w=10; h=10;
        imgMuerte++;
        break;
    case 12:
        pixmap.load(":/ImagenesJuego/Muerte1/MuerteTom2.png");
        w=5; h=5;
        imgMuerte++;
        break;
    case 13:
        pixmap.load(":/ImagenesJuego/Muerte1/MuerteTom2.png");
        w=1; h=1;
        imgMuerte++;
        break;
    case 14:
        pixmap.load(":/ImagenesJuego/Muerte1/MuerteTom2.png");
        w=0; h=0;
        imgMuerte++;
        break;

    }
}

void mostrarPersonaje::muerte2()
{
    stopTimer();
    imagenMuerte2->start(100);
    switch (imgMuerte2) {
    case 1:
        pixmap.load(":/ImagenesJuego/Muerte2/MuerteJerry1.png");
        w=80; h=80;
        imgMuerte2++;
        break;
    case 2:
        pixmap.load(":/ImagenesJuego/Muerte2/MuerteJerry1.png");
        w=80; h=80;
        imgMuerte2++;
        break;

    case 3:
        pixmap.load(":/ImagenesJuego/Muerte2/MuerteJerry1.png");
        w=80; h=80;
        imgMuerte2++;
        break;
    case 4:
        pixmap.load(":/ImagenesJuego/Muerte2/MuerteJerry1.png");
        w=80; h=80;
        imgMuerte2++;
        break;

    case 5:
        pixmap.load(":/ImagenesJuego/Muerte2/MuerteJerry2.png");
        w=100; h=100;
        imgMuerte2++;
        break;

    case 6:
        pixmap.load(":/ImagenesJuego/Muerte2/MuerteJerry2.png");
        w=80; h=80;
        imgMuerte2++;
        break;
    case 7:
        pixmap.load(":/ImagenesJuego/Muerte2/MuerteJerry2.png");
        w=60; h=60;
        imgMuerte2++;
        break;
    case 8:
        pixmap.load(":/ImagenesJuego/Muerte2/MuerteJerry2.png");
        w=40; h=40;
        imgMuerte2++;
        break;
    case 9:
        pixmap.load(":/ImagenesJuego/Muerte2/MuerteJerry2.png");
        w=30; h=30;
        imgMuerte2++;
        break;
    case 10:
        pixmap.load(":/ImagenesJuego/Muerte2/MuerteJerry2.png");
        w=20; h=20;
        imgMuerte2++;
        break;
    case 11:
        pixmap.load(":/ImagenesJuego/Muerte2/MuerteJerry2.png");
        w=10; h=10;
        imgMuerte2++;
        break;
    case 12:
        pixmap.load(":/ImagenesJuego/Muerte2/MuerteJerry2.png");
        w=5; h=5;
        imgMuerte2++;
        break;
    case 13:
        pixmap.load(":/ImagenesJuego/Muerte2/MuerteJerry2.png");
        w=1; h=1;
        imgMuerte2++;
        break;
    case 14:
        pixmap.load(":/ImagenesJuego/Muerte2/MuerteJerry2.png");
        w=0; h=0;
        imgMuerte2++;
        break;
    }
}
