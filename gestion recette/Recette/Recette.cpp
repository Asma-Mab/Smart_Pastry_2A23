#include "Recette.h"
#include <QSqlQuery>
#include <QVariant>
#include <QDebug>

RECETTE::RECETTE(){}


RECETTE::RECETTE(int ID_RECETTE){this->ID_RECETTE = ID_RECETTE;}

RECETTE::RECETTE(int ID_RECETTE,QString NOM,QString CATEGORIE,QString DESCRIPTION,int NOMBRE_INGREDIENT,int ID_PRODUIT)
{
    this->ID_RECETTE = lastId();
    this->NOM = NOM;
    this->CATEGORIE =CATEGORIE;
    this->ID_PRODUIT =ID_PRODUIT;
    this->DESCRIPTION = DESCRIPTION;
    this->NOMBRE_INGREDIENT = NOMBRE_INGREDIENT;

}
int getID_RECETTE();
QString getNOM();
QString getCATEGORIE();
int getID_PRODUIT();
QString getDESCRIPTION ();
QString getNOMBRE_INGREDIENT();


    int RECETTE::getID_RECETTE(){return this->ID_RECETTE;}
    QString RECETTE::getNOM(){return this->NOM;}
    QString RECETTE::getCATEGORIE(){return this->CATEGORIE;}
    int RECETTE::getID_PRODUIT(){return this->ID_PRODUIT;}
    QString RECETTE::getDESCRIPTION(){return this->DESCRIPTION;}
     int RECETTE::getNOMBRE_INGREDIENT(){return this->NOMBRE_INGREDIENT;}


    void RECETTE::setID_RECETTE(int ID_RECETTE){this->ID_RECETTE=ID_RECETTE;};
    void RECETTE::setNOM(QString NOM){this->NOM=NOM;}
    void RECETTE::setCATEGORIE(QString CATEGORIE){this->CATEGORIE = CATEGORIE;}
    void RECETTE::setID_PRODUIT(int  ID_PRODUIT){this->ID_PRODUIT = ID_PRODUIT;}
    void RECETTE::setDESCRIPTION(QString DESCRIPTION){this->DESCRIPTION=DESCRIPTION;}
    void RECETTE::setNOMBRE_INGREDIENT(int NOMBRE_INGREDIENT){this->NOMBRE_INGREDIENT = NOMBRE_INGREDIENT;}

    int RECETTE::lastId(){
        int lastId = 0;
        QSqlQuery qry3 ;
        qry3.prepare("select ID_RECETTE from RECETTE ");
        if (qry3.exec()){
        while(qry3.next()){
            lastId = qry3.value(0).toInt();}
        }
        return lastId+1;
    }


    bool RECETTE::ajouter(){
        QSqlQuery query;

       int l = lastId();
       QString idr=QString::number(l);
       QString idp=QString::number(ID_PRODUIT);
      QString nbi=QString::number(NOMBRE_INGREDIENT);
        query.addBindValue(l);
        query.addBindValue(this->NOM);
        query.addBindValue(this->CATEGORIE);
        query.addBindValue(this->ID_PRODUIT);
        query.addBindValue(this->DESCRIPTION);
        query.addBindValue(this->NOMBRE_INGREDIENT);
        query.prepare("INSERT INTO recette(id_recette,nom,categorie,nombre_ingredient,description,id_produit) VALUES (:c,:n,:p,:dn,:em,:pwd)");
        query.bindValue(":c",idr);
        query.bindValue(":n",NOM);
        query.bindValue(":p",CATEGORIE);
        query.bindValue(":dn",nbi);
        query.bindValue(":em",DESCRIPTION);
        query.bindValue(":pwd",idp);
        return query.exec();
}
    bool RECETTE::supprimer(int cinn){
        QSqlQuery query;
        query.prepare("DELETE FROM RECETTE WHERE CIN=:cinn");
        query.bindValue(0,cinn);

        return query.exec();
    }


    bool RECETTE::modifier()
    {
        QSqlQuery query;
        int l = lastId();
        QString idr=QString::number(l);
        QString idp=QString::number(ID_PRODUIT);
        QString nbi=QString::number(NOMBRE_INGREDIENT);

      query.prepare("Update recette set ID_RECETTE=:c,NOM=:n,CATEGORIE=:p,NOMBRE_INGREDIENT=:eval,DESCRIPTION=:d,ID_PRODUIT=:s where ID_RECETTE=:c");
      query.bindValue(":c",idr);
      query.bindValue(":n",NOM);
      query.bindValue(":p",CATEGORIE);
      query.bindValue(":eval",nbi);
      query.bindValue(":d",DESCRIPTION);
      query.bindValue(":s",idp);

      return query.exec();
    }

QSqlQueryModel * RECETTE::afficher(){


    QSqlQueryModel* model   = new QSqlQueryModel();

    model->setQuery("select * from RECETTE");

    model->setHeaderData(0, Qt::Horizontal,QObject::tr("ID_RECETTE"));
    model->setHeaderData(1, Qt::Horizontal,QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal,QObject::tr("CATEGORIE"));
    model->setHeaderData(3, Qt::Horizontal,QObject::tr("NOMBRE_INGREDIENT"));
    model->setHeaderData(4, Qt::Horizontal,QObject::tr("DESCRIPTION"));
    model->setHeaderData(5, Qt::Horizontal,QObject::tr("ID_PRODUIT"));
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

