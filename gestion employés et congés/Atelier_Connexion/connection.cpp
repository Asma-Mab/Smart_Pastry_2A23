#include "connection.h"
#include<QDebug>
Connection::Connection()
{

}

bool Connection::createconnect()
{
    bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Projet_2A");//inserer le nom de la source de données ODBC
db.setUserName("Farah");//inserer nom de l'utilisateur
db.setPassword("191JFT4636");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;

else  qDebug() << "Openned" << db.lastError().text();



    return  test;

}
