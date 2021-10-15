#ifndef MOSTRARENEMIGOS_H
#define MOSTRARENEMIGOS_H

#include <QDialog>
#include <QMediaPlayer>


namespace Ui {
class mostrarenemigos;
}

class mostrarenemigos : public QDialog
{
    Q_OBJECT

public:
    explicit mostrarenemigos(QWidget *parent = nullptr);
    ~mostrarenemigos();

    int contador=2;

private slots:
    void on_pushButton_clicked();

    void on_BotonTyke_clicked();

    void on_BotonHueso_clicked();

    void on_BotonTrampa_clicked();

    void on_BotonSpyke_clicked();

private:
    Ui::mostrarenemigos *ui;
    QMediaPlayer *tyke;//Sonido para cuando el personaje colisiona con el perro
    QMediaPlayer *hueso;//sonido para cuando se colisione con el hueso volador
    QMediaPlayer *trampa;//sonido para cuando se colisione con la trampa
    QMediaPlayer *spyke;//sonido para cuando el personaje colisione con spyke el mosntruo final de nuestro juego
    QMediaPlayer *click;//sonido para cuando se haga click sobre algun boton
};

#endif // MOSTRARENEMIGO_H
