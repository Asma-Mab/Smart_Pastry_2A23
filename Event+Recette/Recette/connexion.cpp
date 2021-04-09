#include "connexion.h"
#include<QSqlError>
Connection::Connection(){}

bool Connection::createconnect()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Source_Projet2A"); //inserer le nom de la source de données ODBC
    db.setUserName("souhail");             //inserer nom de l'utilisateur
    db.setPassword("souhail");            //inserer mot de passe de cet utilisateur
    return db.open();
}

void Connection::closeConnection(){db.close();}
