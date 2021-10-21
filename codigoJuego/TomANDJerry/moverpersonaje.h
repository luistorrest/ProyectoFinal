#ifndef MOVERPERSONAJE_H
#define MOVERPERSONAJE_H


class moverPersonaje
{
private:
    float px,py,vx,vy,ay,ax;

public: 
    moverPersonaje(float x, float y);
    void actualizar(float dt);

    float getPx() const;
    void setPx(float value);

    float getPy() const;
    void setPy(float value);

    float getVx() const;
    void setVx(float value);

    float getVy() const;
    void setVy(float value);



};

#endif // MOVERPERSONAJE_H
