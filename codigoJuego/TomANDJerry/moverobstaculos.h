#ifndef MOVEROBSTACULOS_H
#define MOVEROBSTACULOS_H
#include "moverpersonaje.h"
#include "QGraphicsItem"

class moverobstaculos
{
private:
    float px,py,vx,vy,ay,ax,cx,cy,w;

public:

    //construct
    moverobstaculos(float x, float y);

    //metodos
    void actualizar(float dt);//metodo para actualizar la posicion de los obstaculos en direccion del eje X
    void ActualizarMoneda(float dt);//metodo para actualizar el movimiento que tendrá la moneda(CAIDA LIBRE)
    void ActualizarHueso(float dt);//metodo para actualizar el movimiento que tendrá el hueso(Mov parabolico)
    void ActualizarTyke(float dt);//metodo para actualizar el movimiento que tendrá el hueso(Mov circular)

    void acelerar(float dt);//metodo para acelerar los obstaculos

    //metodos para mover enemigos


    //metodos get-set
    float getPx() const;
    void setPx(float value);
    float getPy() const;
    void setPy(float value);
    float getVx() const;
    void setVel(float x, float y);

    float getCx() const;
    void setCx(float value);
    float getCy() const;
    void setCy(float value);
    float getW() const;
    void setW(float value);
};

#endif // MOVEROBSTACULOS_H
