#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QTranslator>
#include <QInputDialog>
#include <QStyle>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connection c;
    bool test=c.createconnect();

    QTranslator t;
    QStringList languages;
    languages << "Frensh" << "English" << "arabic";

QString lang = QInputDialog::getItem(NULL,"select Language","Language",languages);
if(lang=="English")
{qDebug()<<"jjj";
    t.load(":/english.qm");

}
if(lang!="Frensh")
{
a.installTranslator(&t);
}
 MainWindow w;
    if(test)
    {w.show();
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
       { QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }



    return a.exec();
}
