#ifndef MOVEROBSTACULOS_H
#define MOVEROBSTACULOS_H
#include "moverpersonaje.h"

class moverobstaculos
{
private:
    float px,py,vx,vy,ay,ax;

public:

    //construct
    moverobstaculos(float x, float y);

    //metodos
    void actualizar(float dt);//metodo para actualizar la posicion de los obstaculos en direccion del eje X
    void ActualizarMoneda(float dt);//metodo para actualizar el movimiento que tendrá la moneda(CAIDA LIBRE)
    void acelerar(float dt);//metodo para acelerar los obstaculos

    //metodos get-set
    float getPx() const;
    void setPx(float value);
    float getPy() const;
    void setPy(float value);
    float getVx() const;
    void setVel(float x, float y);

};

#endif // MOVEROBSTACULOS_H
