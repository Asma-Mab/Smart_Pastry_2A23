#include "fournisseur.h"
#include <QSqlQuery>
#include <QVariant>

#include <QSqlQuery>
#include <QVariant>

fournisseur::fournisseur(){}


fournisseur::fournisseur(int ID_FOURNISSEUR){this->ID_FOURNISSEUR = ID_FOURNISSEUR;}

fournisseur::fournisseur(QString NOM,QString PRENOM,int TELEPHONE,QString EMAIL,QString SPECIALITE)
{
    this->ID_FOURNISSEUR = lastId();
    this->NOM = NOM;
    this->PRENOM =PRENOM;
    this->TELEPHONE =TELEPHONE;
    this->EMAIL = EMAIL;

    this->SPECIALITE = SPECIALITE;
}
int getID_FOURNISSEUR();
QString getNOM();
QString getPRENOM();
int getTELEPHONE();
QString getEMAIL ();
QString getSPECIALITE ();

    int fournisseur::getID_FOURNISSEUR(){return this->ID_FOURNISSEUR;}
    QString fournisseur::getNOM(){return this->NOM;}
 int fournisseur::getTELEPHONE(){return this->TELEPHONE;}
    QString fournisseur::getPRENOM(){return this->PRENOM;}
    QString fournisseur::getEMAIL(){return this->EMAIL;}

     QString fournisseur::getSPECIALITE(){return this->SPECIALITE;}


    void fournisseur::setID_FOURNISSEUR(int ID_FOURNISSEUR){this->ID_FOURNISSEUR=ID_FOURNISSEUR;};
    void fournisseur::setNOM(QString NOM){this->NOM=NOM;}
    void fournisseur::setTELEPHONE(int TELEPHONE){this->TELEPHONE = TELEPHONE;}
    void fournisseur::setPRENOM(QString  PRENOM){this->PRENOM = PRENOM;}
    void fournisseur::setEMAIL(QString EMAIL){this->EMAIL=EMAIL;}
    void fournisseur::setSPECIALITE(QString SPECIALITE){this->SPECIALITE =SPECIALITE;}

    int fournisseur::lastId(){
        int lastId = 0;
        QSqlQuery qry3 ;
        qry3.prepare("select ID_FOURNISSEUR from fournisseur ");
        if (qry3.exec()){
        while(qry3.next()){
            lastId = qry3.value(0).toInt();}
        }
        return lastId+1;
    }


    bool fournisseur::ajouter(){
        QSqlQuery query;
       int l = lastId();
        QString stringId = QString::number(this->ID_FOURNISSEUR);
        QString TEL = QString::number(this->TELEPHONE);
        query.prepare("INSERT INTO fournisseur VALUES (?,?, ?, ?, ?, ?)");
        query.addBindValue(l);
        query.addBindValue(this->NOM);
        query.addBindValue(this->PRENOM);
        query.addBindValue(this->TELEPHONE);
        query.addBindValue(this->EMAIL);
        query.addBindValue(this->SPECIALITE );

        return query.exec();
}

    bool fournisseur::supprimer(int id){
        QSqlQuery query;
        QString stringId = QString::number(id);

        query.prepare("DELETE FROM fournisseur WHERE ID_FOURNISSEUR=?");
        query.addBindValue(stringId);

        return query.exec();
    }

    bool fournisseur::modifier(fournisseur a){
        QSqlQuery edit;


                          edit.prepare("update fournisseur set NOM = :NOM,TELEPHONE=:TELEPHONE, PRENOM=:PRENOM , SPECIALITE=:SPECIALITE where ID_FOURNISSEUR = :ID");

                          edit.bindValue(":ID",a.getID_FOURNISSEUR());
                          edit.bindValue(":NOM",a.getNOM());
                          edit.bindValue(":TELEPHONE",a.getTELEPHONE());
                          edit.bindValue(":PRENOM",a.getPRENOM());
                          edit.bindValue(":SPECIALITE",a.getSPECIALITE());
                          return    edit.exec();


    }

QSqlQueryModel * fournisseur::afficher(){


    QSqlQueryModel* model   = new QSqlQueryModel();

    model->setQuery("select * from fournisseur");

    model->setHeaderData(0, Qt::Horizontal,QObject::tr("ID_FOURNISSEUR"));
    model->setHeaderData(1, Qt::Horizontal,QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal,QObject::tr("PRENOM"));
    model->setHeaderData(3, Qt::Horizontal,QObject::tr("TELEPHONE"));
    model->setHeaderData(4, Qt::Horizontal,QObject::tr("EMAIL"));
    model->setHeaderData(6, Qt::Horizontal,QObject::tr("SPECIALITE"));
    //model->setHeaderData(7, Qt::Horizontal,QObject::tr("modifier"));


    return model;
    }

/*fournisseur fournisseur::rehcerche(int id)
{  fournisseur a;
    QString stringId = QString::number(id);
   QSqlQuery query;
   query.prepare("select * from fournisseur where ID_FOURNISSEUR=?");
   query.addBindValue(stringId);
   query.exec();
    query.first();
    a.setNOM(query.value(1).toString());
    a.setPRENOM(query.value(2).toString());
   // a.setNOM(query.value(1).toString());
    a.setPRENOM(query.value(5).toString());
    a.setID_FOURNISSEUR(id);
    a.setSPECIALITE(query.value(6).toString());
    a.setEMAIL("");
   return a;
}*/

