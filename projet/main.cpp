#include "accueil.h"
#include "login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login l;
    accueil w;
    l.show();

    return a.exec();
}
