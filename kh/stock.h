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
#include<QSqlTableModel>
#include "connexion.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
class stock
{
private :
 QString   REFERENCE;
   int ID_FOURNISSEUR;
  QString  NOM_MP;
   int  QUANTITE;
   QString DATE_ACHAT;
   int PRIX;


public:
    stock();
    stock(QString);//cle primaire
    stock(QString,int,QString,int,QString,int);

    QString getREFERENCE();
     int getID_FOURNISSEUR();
    QString getNOM_MP();
    int getQUANTITE();
    QString getDATE_ACHAT ();
    int getPRIX();

    void setREFERENCE(QString);
    void setID_FOURNISSEUR(int);
    void setNOM_MP(QString);
    void setPRIX(int);
    void setQUANTITE(int);
    void setDATE_ACHAT(QString);


        bool ajouter();
        QSqlTableModel *tri(int id);
        bool supprimer(QString);
        void trie(QTableView* table);
        void trie1(QTableView* table);
        void trie2(QTableView* table);
/*

        stock rehcerche(int);

        int lastId();*/
 QSqlQueryModel * afficher();
 bool modifier(stock);
    };

    #endif // TRANSACTION_H
