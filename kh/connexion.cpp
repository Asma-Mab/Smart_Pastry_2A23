#include "connexion.h"
#include<QSqlError>
Connection::Connection(){}

bool Connection::createconnect()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("projet"); //inserer le nom de la source de données ODBC
    db.setUserName("khalil");             //inserer nom de l'utilisateur
    db.setPassword("khalil");            //inserer mot de passe de cet utilisateur
    return db.open();
}

void Connection::closeConnection(){db.close();}
