#include "mainwindow.h"
//#include "mostrarenemigos.h"
#include "menu.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//   w.show();
//    mostrarenemigos info;
//    info.show();

    Menu m;
    m.show();

    return a.exec();
}
