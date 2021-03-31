#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <QString>
#include <QSqlQueryModel>
#include<QString>
#include<QSqlDatabase>
#include<QSqlError>
#include<QSqlQuery>
#include<QFileInfo>
#include<QMessageBox>
#include<QSqlQueryModel>
#include<QDebug>
#include<QFileDialog>
#include<QDialog>
#include<QtCore>
#include <QObject>
#include<QtGui>
#include "connexion.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
class RECETTE
{
private :
int ID_RECETTE;
QString NOM;
QString CATEGORIE;
int ID_PRODUIT;
QString DESCRIPTION;
int NOMBRE_INGREDIENT ;

public:
    RECETTE();
    RECETTE(int);//cle primaire
    RECETTE(QString,QString,int,QString,int);

    int getID_RECETTE();
    QString getNOM();
    QString getCATEGORIE();
    int getID_PRODUIT();
    QString getDESCRIPTION();
    int getNOMBRE_INGREDIENT ();

  RECETTE(int ID_RECETTE,QString NOM,QString CATEGORIE,QString DESCRIPTION,int NOMBRE_INGREDIENT,int ID_PRODUIT);


    void setID_RECETTE(int);
    void setNOM(QString);
    void setCATEGORIE(QString);
    void setDESCRIPTION(QString);
    void setNOMBRE_INGREDIENT(int);
    void setID_PRODUIT(int);
     bool supprimer(int);
    bool ajouter();
    bool modifier();

    QSqlQueryModel * afficher();

    int lastId();

};

#endif // TRANSACTION_H
