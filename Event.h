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
class event
{
private :
int id_event;
QString nom;
int prix;
QString Catégorie;
QString caracteristique;
QString NB_Participant;

public:
    event();
    event(int);//cle primaire
    event(QString,int,QString,QString,QString,QString);

    int getId_event();
    QString getNom();
    int getPrix();
    QString getCaracteristique();
    QString getNB_Participant ();


    void setId_event(int);
    void setNom(QString);
    void setPrix(int);
    void setCaracteristique(QString);
    void setNB_Participant(QString);

    bool ajouter();
    bool supprimer();
    QSqlQueryModel * afficher();

    int lastId();

};

#endif // TRANSACTION_H
