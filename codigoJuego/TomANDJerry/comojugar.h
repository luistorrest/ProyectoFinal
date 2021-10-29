#ifndef COMOJUGAR_H
#define COMOJUGAR_H

#include <QDialog>

namespace Ui {
class comoJugar;
}

class comoJugar : public QDialog
{
    Q_OBJECT

public:
    explicit comoJugar(QWidget *parent = nullptr);
    ~comoJugar();
    int cont=1;

private slots:
    void on_pushButton_clicked();

private:
    Ui::comoJugar *ui;
};

#endif // COMOJUGAR_H
