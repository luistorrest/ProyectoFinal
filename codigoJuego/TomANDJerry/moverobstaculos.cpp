#include "moverobstaculos.h"
#include <math.h>

moverobstaculos::moverobstaculos(float x, float y)
{
    vy=0;
    vx=75;
    px=x;
    py=y;
}


void moverobstaculos::actualizar(float dt) // mueve en tiempo de ejecucion
{
    px-=vx*dt;

}

void moverobstaculos::ActualizarMoneda(float dt)
{
    acelerar(dt);
    //vx=vx+ax*dt;
    vx=0;
    vy=vy+ay*dt;
    px-=vx*dt+(ax*pow(0.25,2))/0.5;
    //px-=(ax*pow(0.25,2))/0.5;
    py=py+vy*dt+(ay*pow(0.25,2))/0.5;
}
void moverobstaculos::acelerar(float dt)
{
    ax=0;
    ay=-20;//este determinara que tan rapido se acelerara el obstaculo en el eje y

    //con esto haremos que a medida que avance a otro nivel las monedas se aceleren mas y sea mas dificil atraparlas
    if (getPx()>=8810 && getPx()<=17800){
        ay=-40;
    }
    else{
        ay=-50;
    }

}
float moverobstaculos::getPx() const
{
    return px;
}
void moverobstaculos::setPx(float value)
{
    px = value;
}
float moverobstaculos::getPy() const
{
    return py;
}
void moverobstaculos::setPy(float value)
{
    py = value;
}
void moverobstaculos::setVel(float x, float y)
{
    vx=x;
}
float moverobstaculos::getVx() const
{
    return vx;
}
