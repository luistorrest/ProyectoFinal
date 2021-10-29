#include "comojugar.h"
#include "ui_comojugar.h"

comoJugar::comoJugar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::comoJugar)
{
    ui->setupUi(this);
    ui->controles->hide();
}

comoJugar::~comoJugar()
{
    delete ui;
}

void comoJugar::on_pushButton_clicked()
{
    if(cont==1){
        ui->pushButton->setText("Finalizar");
        ui->instru->hide();
        ui->controles->show();
        cont++;
    }
    else if (cont==2) {
        this->close();
    }


}
