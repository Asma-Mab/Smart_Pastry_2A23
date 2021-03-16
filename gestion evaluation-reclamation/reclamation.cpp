#include "reclamation.h"
#include <QSqlQuery>
#include <QVariant>

reclamation::reclamation(){}


reclamation::reclamation(int id_reclamation){this->id_reclamation = id_reclamation;}

reclamation::reclamation(QString titre,QString description,QString date_reclamation,QString etat)
{
    this->id_reclamation = lastId();
    this->titre =titre;

    this->description =description;
    this->date_reclamation = date_reclamation;

    this->etat = etat;
}


    int reclamation::getId_reclamation(){return this->id_reclamation;}
    QString reclamation::getTitre(){return this->titre;}

    QString reclamation::getDescription(){return this->description;}
    QString reclamation::getDate_reclamation(){return this->date_reclamation;}
   QString reclamation::getCin_employe(){return this->cin_employe;}
     QString reclamation::getEtat(){return this->etat;}


    void reclamation::setId_reclamation(int id_reclamation){this->id_reclamation=id_reclamation;};
    void reclamation::setTitre(QString titre){this->titre=titre;}

    void reclamation::setDescription(QString  description){this->description = description;}
    void reclamation::setDate_reclamation(QString date_reclamation){this->date_reclamation=date_reclamation;}
    void reclamation::setCin_employe(QString cin_employe) {this->cin_employe =cin_employe;}
    void reclamation::setEtat(QString etat){ this->etat =etat;}

    int reclamation::lastId(){
        int lastId = 0;
        QSqlQuery qry3 ;
        qry3.prepare("select ID_reclamation from reclamation ");
        if (qry3.exec()){
        while(qry3.next()){
            lastId = qry3.value(0).toInt();}
        }
        return lastId+1;
    }


    bool reclamation::ajouter(){
        QSqlQuery query;
       int l = lastId();
        QString stringId = QString::number(this->id_reclamation);

        query.prepare("INSERT INTO RECLAMATION VALUES (?,?, ?, ?,'non traité','1')");
        query.addBindValue(l);
        query.addBindValue(this->titre);

        query.addBindValue(this->description);
        query.addBindValue(this->date_reclamation);



        return query.exec();
}

    bool reclamation::supprimer(){
        QSqlQuery query;
        QString stringId = QString::number(id_reclamation);

        query.prepare("DELETE FROM reclamation WHERE ID_reclamation=?");
        query.addBindValue(stringId);

        return query.exec();
    }

QSqlQueryModel * reclamation::afficher(){


    QSqlQueryModel* model   = new QSqlQueryModel();

    model->setQuery("select * from reclamation");

    model->setHeaderData(0, Qt::Horizontal,QObject::tr("Id_reclamation"));
    model->setHeaderData(1, Qt::Horizontal,QObject::tr("titre"));
    model->setHeaderData(2, Qt::Horizontal,QObject::tr("description"));
    model->setHeaderData(3, Qt::Horizontal,QObject::tr("etat"));
    model->setHeaderData(4, Qt::Horizontal,QObject::tr("date_reclamation"));
    model->setHeaderData(5, Qt::Horizontal,QObject::tr("cin_employe"));




    return model;
    }


