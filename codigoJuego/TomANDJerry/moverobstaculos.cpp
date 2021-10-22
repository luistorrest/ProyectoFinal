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
    vx=vx+ax*dt;
    vy=vy+ay*dt;
    px-=vx*dt+(ax*pow(0.25,2))/0.5;
    py=py+vy*dt+(ay*pow(0.25,2))/0.5;
}
void moverobstaculos::acelerar(float dt)
{
    ax=0;
    ay=-30;
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
