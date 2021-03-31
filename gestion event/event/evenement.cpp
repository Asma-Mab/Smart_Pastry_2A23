#include "evenement.h"
#include <QSqlQuery>
#include <QVariant>
#include <QDebug>

evenement::evenement(){}


evenement::evenement(int ID_EVENEMENT){this->ID_EVENEMENT = ID_EVENEMENT;}

evenement::evenement(int id, QString NOM_EVENEMENT,QString TYPE,float BUDGET,QString LIEU,int NOMBRE_INVITE)
{
    this->ID_EVENEMENT =id;
    this->NOM_EVENEMENT =NOM_EVENEMENT;
    this->TYPE =TYPE;
    this->BUDGET =BUDGET;
    this->LIEU =LIEU;
    this->NOMBRE_INVITE =NOMBRE_INVITE;

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
        QString scin=QString::number(BUDGET);
        QString sa=QString::number(l);
         QString cc=QString::number(NOMBRE_INVITE);

        query.prepare("INSERT INTO evenement(id_evenement,nom_evenement,type,budget,lieu,nombre_invite) VALUES (:ci,:dp,:dr,:n,:cf,:c)");
        query.bindValue(":ci",sa);
        query.bindValue(":dp",NOM_EVENEMENT);
        query.bindValue(":dr",TYPE);
        query.bindValue(":n",scin);
        query.bindValue(":cf",LIEU);
        query.bindValue(":c",cc);
        return query.exec();
}

  /* bool evenement::supprimer(){
        QSqlQuery query;
        QString stringId = QString::number(ID_EVENEMENT);

        query.prepare("DELETE FROM evenement WHERE ID_EVENEMENT=?");
        query.addBindValue(stringId);

        return query.exec();
    }*/

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
bool evenement::supprimer(int id){
    QSqlQuery query;
    query.prepare("DELETE FROM evenement WHERE id_evenement=:id");
    query.bindValue(0,id);

    return query.exec();
}
bool evenement::modifier()
{
    QSqlQuery query;
    QString id=QString::number(ID_EVENEMENT);
     QString nb=QString::number(NOMBRE_INVITE);
    QString bud=QString::number(BUDGET);
  query.prepare("Update evenement set id_evenement=:c,nom_evenement=:n,type=:p,budget=:bu,lieu=:l,nombre_invite=:eval where id_evenement=:c");
  query.bindValue(":c",id);
  query.bindValue(":n",NOM_EVENEMENT);
  query.bindValue(":p",TYPE);
  query.bindValue(":bu",bud);
  query.bindValue(":l",LIEU);
  query.bindValue(":eval",nb);
  return query.exec();
}

