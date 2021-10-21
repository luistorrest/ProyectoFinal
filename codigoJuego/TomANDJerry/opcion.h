#ifndef OPCION_H
#define OPCION_H

#include <QWidget>
#include <QMessageBox>

#include "mainwindow.h"

namespace Ui {
class opcion;
}

class opcion : public QWidget
{
    Q_OBJECT

public:
    explicit opcion(QWidget *parent = nullptr);
    ~opcion();
    void control();
    bool multijuador;
    QMediaPlayer* MusicSelec;


private slots:
    void on_Player1_toggled(bool checked);
    void on_Player2_toggled(bool checked);
    void on_Iniciar_clicked();
    void on_pushButton_clicked();

private:
    Ui::opcion *ui;
    MainWindow *iniciar;

    QMediaPlayer* player;
    QMediaPlayer* click;
    QMediaPlayer *clickPPAL2;

    int p1=0,p2=0;
};

#endif // OPCION_H
