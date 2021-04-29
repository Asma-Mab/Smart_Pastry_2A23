
#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connexion.h"
#include<QTranslator>
#include<QInputDialog>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator t;
     QStringList languages;
     languages <<"english" << "frensh" ;
     QString lang =QInputDialog::getItem(NULL,"select languages","languages", languages);
     if(lang=="english")
     {t.load(":\english.qm");
     }
     else if (lang!="frensh")
     { a.installTranslator(&t);
     }
    Connection c;
    bool test=c.createconnect();
    MainWindow w;
    w.show();






    return a.exec();
}
