#include "equipement.h"
#include <QSqlQuery>
#include <QVariant>

equipement::equipement(){}


equipement::equipement(int id_equipement){this->id_equipement = id_equipement;}

equipement::equipement(QString NOM,int prix,QString caracteristique,QString date_achat,QString marque,QString etat)
{
    this->id_equipement = lastId();
    this->nom = NOM;
    this->prix =prix;
    this->caracteristique =caracteristique;
    this->date_achat = date_achat;
    this->marque = marque;
    this->etat = etat;
}
int getId_equipement();
QString getNom();
int getPrix();
QString getCaracteristique();
QString getDate_achat ();
QString getMarque();
QString getEtat ();

    int equipement::getId_equipement(){return this->id_equipement;}
    QString equipement::getNom(){return this->nom;}
 int equipement::getPrix(){return this->prix;}
    QString equipement::getCaracteristique(){return this->caracteristique;}
    QString equipement::getDate_achat(){return this->date_achat;}
     QString equipement::getMarque(){return this->marque;}
     QString equipement::getEtat(){return this->etat;}


    void equipement::setId_equipement(int id_equipement){this->id_equipement=id_equipement;};
    void equipement::setNom(QString nom){this->nom=nom;}
    void equipement::setPrix(int prix){this->prix = prix;}
    void equipement::setCaracteristique(QString  caracteristique){this->caracteristique = caracteristique;}
    void equipement::setDate_achat(QString date_achat){this->date_achat=date_achat;}
    void equipement::setMarque(QString marque){this->marque = marque;}
    void equipement::setEtat(QString etat){this->etat =etat;}

    int equipement::lastId(){
        int lastId = 0;
        QSqlQuery qry3 ;
        qry3.prepare("select ID_EQUIPEMENT from EQUIPEMENT ");
        if (qry3.exec()){
        while(qry3.next()){
            lastId = qry3.value(0).toInt();}
        }
        return lastId+1;
    }


    bool equipement::ajouter(){
        QSqlQuery query;
       int l = lastId();
        QString stringId = QString::number(this->id_equipement);

        query.prepare("INSERT INTO EQUIPEMENT VALUES (?, ?, ?, ? , ?, ?, ?)");
        query.addBindValue(l);
        query.addBindValue(this->nom);
        query.addBindValue(this->prix);
        query.addBindValue(this->caracteristique);
        query.addBindValue(this->date_achat);
        query.addBindValue(this->marque);
        query.addBindValue(this->etat );

        return query.exec();
}

    bool equipement::supprimer(){
        QSqlQuery query;
        QString stringId = QString::number(id_equipement);

        query.prepare("DELETE FROM EQUIPEMENT WHERE ID_EQUIPEMENT=?");
        query.addBindValue(stringId);

        return query.exec();
    }

QSqlQueryModel * equipement::afficher(){


    QSqlQueryModel* model   = new QSqlQueryModel();

    model->setQuery("select * from EQUIPEMENT");

    model->setHeaderData(0, Qt::Horizontal,QObject::tr("ID_EQUIPEMENT"));
    model->setHeaderData(1, Qt::Horizontal,QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal,QObject::tr("PRIX"));
    model->setHeaderData(3, Qt::Horizontal,QObject::tr("MARQUE"));
    model->setHeaderData(4, Qt::Horizontal,QObject::tr("DATE_ACHAT"));
    model->setHeaderData(5, Qt::Horizontal,QObject::tr("CARACTERISTIQUE"));
    model->setHeaderData(6, Qt::Horizontal,QObject::tr("ETAT"));
    model->setHeaderData(7, Qt::Horizontal,QObject::tr("modifier"));
    ui->tableView->resizeColumnToContents(0);
       ui->tableView->resizeColumnToContents(1);
       ui->tableView->resizeColumnToContents(2);
       ui->tableView->resizeColumnToContents(3);
       ui->tableView->resizeColumnToContents(4);
          ui->tableView->resizeColumnToContents(5);
          ui->tableView->resizeColumnToContents(6);

    return model;
    }

