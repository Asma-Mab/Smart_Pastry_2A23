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
class evenement
{
private :
int ID_EVENEMENT;
QString NOM_EVENEMENT;
QString TYPE;
float BUDGET;
QString LIEU;
int NOMBRE_INVITE ;


public:
    evenement();
    evenement(int);//cle primaire
    evenement(int,QString,QString,float,QString,int);

    int getID_EVENEMENT();
    QString getNOM_EVENEMENT();
    QString getTYPE();
    float getBUDGET();
    QString getLIEU();
    int getNOMBRE_INVITE ();



    void setID_EVENEMENT(int);
    void setNOM_EVENEMENT(QString);
    void setTYPE(QString);
    void setLIEU(QString);
    void setNOMBRE_INVITE(int);
    void setBUDGET(float);

    bool ajouter();
    bool supprimer(int);
    bool modifier();
    bool verif_nom(QString);
    QSqlQueryModel * afficher();
    void trie(QTableView* table);
    void trie2(QTableView* table);
    void trie3(QTableView* table);
    int lastId();
    QSqlQueryModel * cherch_four(QString);
    QVector<QString> nom();
    int count();
};

#endif // TRANSACTION_H