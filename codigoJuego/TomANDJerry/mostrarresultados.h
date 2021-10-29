#ifndef MOSTRARRESULTADOS_H
#define MOSTRARRESULTADOS_H

#include <QWidget>
#include <QTimer>
#include <QFile>
#include <iostream>
#include <QSize>

namespace Ui {
class mostrarResultados;
}

class mostrarResultados : public QWidget
{
    Q_OBJECT

public:
    explicit mostrarResultados(QWidget *parent = nullptr);
    ~mostrarResultados();

    //atributos
    int op=0;


    //metodos
    void imaganes();//para saber cual opcion de resultados se escogera
    void ocultar();//oculta los items que no serán utilizados
    void mostrar();//poner en escena los resultados
    void darvalores();//enviar los valores a un arhivo
    void ganador();


    bool multi=false;

private:
    Ui::mostrarResultados *ui;

};

#endif // MOSTRARRESULTADOS_H
