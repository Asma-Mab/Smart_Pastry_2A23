#include "conge.h"
#include <QSqlQuery>
#include<QtDebug>
#include <QVariant>
   conge::conge()
    {
    cin_employe=0;
    idconge=0;
    date_depart="";
    date_retour="";
    confirmation="";
    }
   conge::conge(int c,QString dd,QString dr,QString n,QString cf, int ci)
    {
    idconge=c;nature=n;dr=date_retour;date_depart=dd;confirmation=cf;cin_employe=ci;}
     conge::conge(QString dp,QString dr,QString c,QString n,int id)
     {
       nature=n;date_retour=dr;date_depart=dp;confirmation=c,idconge=id;

     }

    int conge::getcin_employe(){return cin_employe;};
    QString conge::getdate_depart(){return date_depart ;};
    QString conge::getdate_retour(){return date_retour;};
    int conge::getidconge(){return idconge ;};
    QString conge::getconfirmation(){return confirmation;};
    QString conge::getnature(){return nature;};

    void conge::setcin_employe(int ci){cin_employe=ci;};
    void conge::setidconge(int c){idconge=c;};
    void conge::setdate_depart(QString dp){date_depart=dp;};
    void conge::setdate_retour(QString dr){date_retour=dr;};

      void conge::setconfirmation(QString cf){confirmation=cf;};
        void conge::setnature(QString nt){nature=nt;};

    int conge::lastIdconge(){
        int lastIdc = 0;
        QSqlQuery qry3 ;
        qry3.prepare("select cin_employe from conge ");
        if (qry3.exec()){
        while(qry3.next()){
            lastIdc = qry3.value(0).toInt();}
        }
        return lastIdc+1;
    }
    bool conge::ajouter(){
  int l = lastIdconge();
        QSqlQuery query;
        QString scin=QString::number(cin_employe);
        QString sa=QString::number(l);


        query.prepare("INSERT INTO CONGE(cin_employe,date_depart,date_retour,nature,confirmation,idconge) VALUES (:ci,:dp,:dr,:n,:cf,:c)");
        query.bindValue(":ci",scin);
        query.bindValue(":dp",date_depart);
        query.bindValue(":dr",date_retour);
        query.bindValue(":n",nature);
        query.bindValue(":cf",confirmation);
        query.bindValue(":c",sa);

        return query.exec();
    }

    bool conge::supprimer(int cinn){
        QSqlQuery query;
        query.prepare("DELETE FROM CONGE WHERE idconge=:cinn");
        query.bindValue(0,cinn);

        return query.exec();
    }
    bool conge::modifier()
    {
        QSqlQuery query;
           QString scin=QString::number(idconge);
      query.prepare("Update conge set date_depart=:dp,date_retour=:dr,nature=:n,confirmation=:cf,idconge=:c where idconge=:c");
      query.bindValue(":dp",date_depart);
      query.bindValue(":dr",date_retour);
      query.bindValue(":n",nature);
      query.bindValue(":cf",confirmation);
      query.bindValue(":c",scin);
      return query.exec();
    }
    QSqlQueryModel * conge::afficher(){


    QSqlQueryModel* model   = new QSqlQueryModel();

    model->setQuery("select * from CONGE where confirmation in ('Acceptée','AcceptÃ©e')");

    model->setHeaderData(0, Qt::Horizontal,QObject::tr("CIN_EMPLOYE"));
    model->setHeaderData(1, Qt::Horizontal,QObject::tr("DATE_DEPART"));
    model->setHeaderData(2, Qt::Horizontal,QObject::tr("DATE_RETOUR"));
    model->setHeaderData(3, Qt::Horizontal,QObject::tr("NATURE"));
    model->setHeaderData(4, Qt::Horizontal,QObject::tr("CONFIRMATION"));
    model->setHeaderData(5, Qt::Horizontal,QObject::tr("IDCONGE"));


    return model;
    }
    QSqlQueryModel * conge::afficher1(){


    QSqlQueryModel* model   = new QSqlQueryModel();
     QString e="En_attente";
    model->setQuery("select * from CONGE where confirmation not in('Acceptée','Refusée','AcceptÃ©e','RefusÃ©e')");
    model->setHeaderData(0, Qt::Horizontal,QObject::tr("CIN_EMPLOYE"));
    model->setHeaderData(1, Qt::Horizontal,QObject::tr("DATE_DEPART"));
    model->setHeaderData(2, Qt::Horizontal,QObject::tr("DATE_RETOUR"));
    model->setHeaderData(3, Qt::Horizontal,QObject::tr("NATURE"));
    model->setHeaderData(4, Qt::Horizontal,QObject::tr("CONFIRMATION"));
    model->setHeaderData(5, Qt::Horizontal,QObject::tr("IDCONGE"));


    return model;
    }
    QSqlQueryModel * conge::afficher2(){


    QSqlQueryModel* model   = new QSqlQueryModel();

    model->setQuery("select * from CONGE where confirmation in ('Refusée','RefusÃ©e')");

    model->setHeaderData(0, Qt::Horizontal,QObject::tr("CIN_EMPLOYE"));
    model->setHeaderData(1, Qt::Horizontal,QObject::tr("DATE_DEPART"));
    model->setHeaderData(2, Qt::Horizontal,QObject::tr("DATE_RETOUR"));
    model->setHeaderData(3, Qt::Horizontal,QObject::tr("NATURE"));
    model->setHeaderData(4, Qt::Horizontal,QObject::tr("CONFIRMATION"));
    model->setHeaderData(5, Qt::Horizontal,QObject::tr("IDCONGE"));


    return model;
    }

