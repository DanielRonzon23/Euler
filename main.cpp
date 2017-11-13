#include "metodo_de_euler.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Metodo_De_Euler w;
    w.show();

    return a.exec();
}
