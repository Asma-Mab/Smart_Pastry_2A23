#include "connexion.h"
#include<QSqlError>
Connection::Connection(){}

bool Connection::createconnect()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Projet_2A"); //inserer le nom de la source de données ODBC
    db.setUserName("farah");             //inserer nom de l'utilisateur
    db.setPassword("191JFT4636");            //inserer mot de passe de cet utilisateur
    return db.open();
}

void Connection::closeConnection(){db.close();}
