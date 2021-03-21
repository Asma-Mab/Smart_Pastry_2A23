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
class equipement
{
private :
int id_equipement;
QString nom;
int prix;
QString marque;
QString caracteristique;
QString date_achat ;
QString etat;

public:
    equipement();
    equipement(int);//cle primaire
    equipement(QString,int,QString,QString,QString,QString);

    int getId_equipement();
    QString getNom();
    int getPrix();
    QString getCaracteristique();
    QString getDate_achat ();
    QString getMarque();
    QString getEtat ();


    void setId_equipement(int);
    void setNom(QString);
    void setPrix(int);
    void setCaracteristique(QString);
    void setDate_achat(QString);
    void setMarque(QString);
    void setEtat(QString);

    bool ajouter();
    bool supprimer();
    QSqlQueryModel * afficher();

    int lastId();

};

#endif // TRANSACTION_H
