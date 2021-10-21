#include "moverpersonaje.h"

moverPersonaje::moverPersonaje(float x, float y)
{
    vx=75;
    px=x;
    py=y;

}

void moverPersonaje::actualizar(float dt)
{
    px+=vx*dt;
}

float moverPersonaje::getPx() const
{
    return px;
}

void moverPersonaje::setPx(float value)
{
    px = value;
}

float moverPersonaje::getPy() const
{
    return py;
}

void moverPersonaje::setPy(float value)
{
    py = value;
}

float moverPersonaje::getVx() const
{
    return vx;
}

void moverPersonaje::setVx(float value)
{
    vx = value;
}

float moverPersonaje::getVy() const
{
    return vy;
}

void moverPersonaje::setVy(float value)
{
    vy = value;
}
