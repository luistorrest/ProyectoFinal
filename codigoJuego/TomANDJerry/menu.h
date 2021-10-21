#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QMessageBox>

#include "mainwindow.h"
#include "mostrarenemigos.h"
#include "opcion.h"

namespace Ui {
class Menu;
}

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();
    MainWindow *iniciar;


private slots:
    void on_UnJugador_clicked();// para cuando el usuario seleccione la opcion que quiere jugar en el modo( UN SOLO JUGADOR)

    void on_Multijugador_clicked();//para cuando el usuario seleccione la opcion que quiere jugar en el modo( MULTIJUGADOR)

    void on_pushButton_clicked();//para cambiar entre los personajes de la ventana de los enemigos

    void on_actionEnemigos_triggered();//para cuando el usuario desee abrir la ventana que muestra la informacion de los enemigos

    void on_actionInstrucciones_triggered();//para cuando el usuario desee abrir la ventana que muestra la informacion de como jugar

private:
    Ui::Menu *ui;//para crear la ventana tipo menu
    opcion *selec;//para sabaer si selecciono un jugador o multijugador
    QMediaPlayer* click;//objeto de tipo QMediaPlayer para cuando se haga click sobre algun boton
    QMediaPlayer* click2;//Se usará para otros botones
    QMediaPlayer* click3;//se usará para otros botones

};

#endif // MENU_H
