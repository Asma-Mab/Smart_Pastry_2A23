#include "event.h"
#include <QSqlQuery>
#include <QVariant>

event::event(){}


event::event(int id_event){this->id_event = id_event;}

event::event(QString NOM,int prix,QString caracteristique,QString date_achat,QString marque,QString etat)
{
    this->id_event = lastId();
    this->nom = NOM;
    this->prix =prix;
    this->caracteristique =caracteristique;
    this->date_achat = date_achat;
    this->marque = marque;
    this->etat = etat;
}
int getId_event();
QString getNom();
int getPrix();
QString getCaracteristique();
QString getDate_achat ();
QString getMarque();
QString getEtat ();

    int event::getId_event(){return this->id_event;}
    QString event::getNom(){return this->nom;}
 int event::getPrix(){return this->prix;}
    QString event::getCaracteristique(){return this->caracteristique;}
    QString event::getDate_achat(){return this->date_achat;}
     QString event::getMarque(){return this->marque;}
     QString event::getEtat(){return this->etat;}


    void event::setId_event(int id_event){this->id_event=id_event;};
    void event::setNom(QString nom){this->nom=nom;}
    void event::setPrix(int prix){this->prix = prix;}
    void event::setCaracteristique(QString  caracteristique){this->caracteristique = caracteristique;}
    void event::setDate_achat(QString date_achat){this->date_achat=date_achat;}
    void event::setMarque(QString marque){this->marque = marque;}
    void event::setEtat(QString etat){this->etat =etat;}

    int event::lastId(){
        int lastId = 0;
        QSqlQuery qry3 ;
        qry3.prepare("select ID_event from event ");
        if (qry3.exec()){
        while(qry3.next()){
            lastId = qry3.value(0).toInt();}
        }
        return lastId+1;
    }


    bool event::ajouter(){
        QSqlQuery query;
       int l = lastId();
        QString stringId = QString::number(this->id_event);

        query.prepare("INSERT INTO event VALUES (?, ?, ?, ? , ?, ?, ?)");
        query.addBindValue(l);
        query.addBindValue(this->nom);
        query.addBindValue(this->prix);
        query.addBindValue(this->caracteristique);
        query.addBindValue(this->date_achat);
        query.addBindValue(this->marque);
        query.addBindValue(this->etat );

        return query.exec();
}

    bool event::supprimer(){
        QSqlQuery query;
        QString stringId = QString::number(id_event);

        query.prepare("DELETE FROM event WHERE ID_event=?");
        query.addBindValue(stringId);

        return query.exec();
    }

QSqlQueryModel * event::afficher(){


    QSqlQueryModel* model   = new QSqlQueryModel();

    model->setQuery("select * from event");

    model->setHeaderData(0, Qt::Horizontal,QObject::tr("ID_event"));
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

