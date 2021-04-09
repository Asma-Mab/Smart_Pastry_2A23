#include "evenement.h"
#include <QSqlQuery>
#include <QVariant>
#include <QDebug>

evenement::evenement(){}


evenement::evenement(int ID_EVENEMENT){this->ID_EVENEMENT = ID_EVENEMENT;}

evenement::evenement(QString NOM_EVENEMENT,QString TYPE,float BUDGET,QString LIEU,int NOMBRE_INVITE)
{
    this->ID_EVENEMENT = lastId();
    this->NOM_EVENEMENT = NOM_EVENEMENT;
    this->TYPE =TYPE;
    this->BUDGET =BUDGET;
    this->LIEU = LIEU;
    this->NOMBRE_INVITE = NOMBRE_INVITE;

}
int getID_EVENEMENT();
QString getNOM_EVENEMENT();
int getTYPE();
float getBUDGET();
QString getLIEU ();
QString getNOMBRE_INVITE();


    int evenement::getID_EVENEMENT(){return this->ID_EVENEMENT;}
    QString evenement::getNOM_EVENEMENT(){return this->NOM_EVENEMENT;}
    QString evenement::getTYPE(){return this->TYPE;}
    float evenement::getBUDGET(){return this->BUDGET;}
    QString evenement::getLIEU(){return this->LIEU;}
     int evenement::getNOMBRE_INVITE(){return this->NOMBRE_INVITE;}


    void evenement::setID_EVENEMENT(int ID_EVENEMENT){this->ID_EVENEMENT=ID_EVENEMENT;};
    void evenement::setNOM_EVENEMENT(QString NOM_EVENEMENT){this->NOM_EVENEMENT=NOM_EVENEMENT;}
    void evenement::setTYPE(QString TYPE){this->TYPE = TYPE;}
    void evenement::setBUDGET(float  BUDGET){this->BUDGET = BUDGET;}
    void evenement::setLIEU(QString LIEU){this->LIEU=LIEU;}
    void evenement::setNOMBRE_INVITE(int NOMBRE_INVITE){this->NOMBRE_INVITE = NOMBRE_INVITE;}

    int evenement::lastId(){
        int lastId = 0;
        QSqlQuery qry3 ;
        qry3.prepare("select ID_EVENEMENT from evenement ");
        if (qry3.exec()){
        while(qry3.next()){
            lastId = qry3.value(0).toInt();}
        }
        return lastId+1;
    }


    bool evenement::ajouter(){
        QSqlQuery query;

       int l = lastId();

        query.prepare("INSERT INTO evenement VALUES (?,?, ?, ?, ? , ?)");
        query.addBindValue(l);
        query.addBindValue(this->NOM_EVENEMENT);
        query.addBindValue(this->TYPE);
        query.addBindValue(this->BUDGET);
        query.addBindValue(this->LIEU);
        query.addBindValue(this->NOMBRE_INVITE);

        return query.exec();
}

    bool evenement::supprimer(){
        QSqlQuery query;
        QString stringId = QString::number(ID_EVENEMENT);

        query.prepare("DELETE FROM evenement WHERE ID_EVENEMENT=?");
        query.addBindValue(stringId);

        return query.exec();
    }

QSqlQueryModel * evenement::afficher(){


    QSqlQueryModel* model   = new QSqlQueryModel();

    model->setQuery("select * from evenement");

    model->setHeaderData(0, Qt::Horizontal,QObject::tr("ID_EVENEMENT"));
    model->setHeaderData(1, Qt::Horizontal,QObject::tr("NOM_EVENEMENT"));
    model->setHeaderData(2, Qt::Horizontal,QObject::tr("TYPE"));
    model->setHeaderData(3, Qt::Horizontal,QObject::tr("NOMBRE_INVITE"));
    model->setHeaderData(4, Qt::Horizontal,QObject::tr("LIEU"));
    model->setHeaderData(5, Qt::Horizontal,QObject::tr("BUDGET"));
   // model->setHeaderData(6, Qt::Horizontal,QObject::tr("modifier"));

   /* ui->tableView->resizeColumnToContents(0);
       ui->tableView->resizeColumnToContents(1);
       ui->tableView->resizeColumnToContents(2);
       ui->tableView->resizeColumnToContents(3);
       ui->tableView->resizeColumnToContents(4);
          ui->tableView->resizeColumnToContents(5);
          ui->tableView->resizeColumnToContents(6); */

    return model;
    }

