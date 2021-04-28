#include "accueil.h"
<<<<<<< HEAD:projet/Nouveau dossier/main.cpp
#include "dialog.h"
=======
#include "login.h"
>>>>>>> 311f2b141f366af75a4846b384ef063eac136cd2:projet/main.cpp
#include <QApplication>
#include <QMessageBox>

#include "connexion.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
<<<<<<< HEAD:projet/Nouveau dossier/main.cpp

    accueil w;
    Connection c;
    bool test=c.createconnect();
    bool test1;
    test1=test;
    w.show();






=======
    login l;
    accueil w;
    l.show();
>>>>>>> 311f2b141f366af75a4846b384ef063eac136cd2:projet/main.cpp
    return a.exec();
}
