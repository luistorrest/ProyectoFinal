#ifndef MOVEROBSTACULOS_H
#define MOVEROBSTACULOS_H


class moverobstaculos
{
private:
    float px,py,vx,vy,ay,ax;

public:

    //constructor
    moverobstaculos(float x, float y);

    //metodos
    void actualizar(float dt);
    void ActualizarMoneda(float dt);
    void acelerar(float dt);

    //metodos get-set
    float getPx() const;
    void setPx(float value);
    float getPy() const;
    void setPy(float value);
    float getVx() const;
    void setVel(float x, float y);




};

#endif // MOVEROBSTACULOS_H
