#include "stock.h"
#include <QSqlQuery>
#include <QVariant>

stock::stock(){}
stock::stock(QString REFERENCE){this->REFERENCE = REFERENCE;}

stock::stock(QString REFERENCE,int ID_FOURNISSEUR,QString NOM_MP,int QUANTITE,QString DATE_ACHAT,int PRIX)
{
    this->REFERENCE =REFERENCE;
    this->ID_FOURNISSEUR = ID_FOURNISSEUR;
    this->NOM_MP =NOM_MP;
    this->QUANTITE =QUANTITE;
    this->DATE_ACHAT = DATE_ACHAT;
    this->PRIX = PRIX;
}
QString getREFERENCE();
 int getID_FOURNISSEUR();
QString getNOM_MP();
int getQUANTITE();
QString getDATE_ACHAT ();
int getPRIX();

   QString stock::getREFERENCE(){return this->REFERENCE;}
    int stock::getID_FOURNISSEUR(){return this->ID_FOURNISSEUR;}
    QString stock::getNOM_MP(){return this->NOM_MP;}
    int stock::getQUANTITE(){return this->QUANTITE;}
    QString stock::getDATE_ACHAT(){return this->DATE_ACHAT;}
    int stock::getPRIX(){return this->PRIX;}



    void stock::setREFERENCE(QString REFERENCE){this->REFERENCE=REFERENCE;};
    void stock::setID_FOURNISSEUR(int ID_FOURNISSEUR){this->ID_FOURNISSEUR=ID_FOURNISSEUR;}
    void stock::setNOM_MP(QString NOM_MP){this->NOM_MP = NOM_MP;}
    void stock::setQUANTITE(int  QUANTITE){this->QUANTITE = QUANTITE;}
    void stock::setDATE_ACHAT(QString DATE_ACHAT){this->DATE_ACHAT=DATE_ACHAT;}
    void stock::setPRIX(int PRIX){this->PRIX = PRIX;}


  /*  int stock::lastId(){
        int lastId = 0;
        QSqlQuery qry3 ;
        qry3.prepare("select REFERENCE from stock ");
        if (qry3.exec()){
        while(qry3.next()){
            lastId = qry3.value(0).toInt();}
        }
        return lastId+1;
    }*/


    bool stock::ajouter(){
        QSqlQuery query;
       bool test;
       stock s;
       test=s.verif_nom(this->NOM_MP);

       if(test == false)
       {
           QMessageBox::information(nullptr, QObject::tr("erreur"),
                       QObject::tr("nom invalide.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);
       }
       else{
        query.prepare("INSERT INTO stock VALUES (?, ?, ? , ?, ?, ?)");
       query.addBindValue(this->REFERENCE );
        query.addBindValue(this->ID_FOURNISSEUR);
        query.addBindValue(this->NOM_MP);
        query.addBindValue(this->QUANTITE);
        query.addBindValue(this->DATE_ACHAT);
        query.addBindValue(this->PRIX);
    }

        return query.exec();
}

    bool stock::supprimer(QString id){
        QSqlQuery query;


        query.prepare("DELETE FROM stock WHERE REFERENCE=?");
        query.addBindValue(id);

        return query.exec();
    }

    bool stock::modifier(stock a){
        QSqlQuery edit;


                          edit.prepare("update stock set ID_FOURNISSEUR = :ID_FOURNISSEUR,NOM_MP=:NOM_MP, PRIX = :PRIX, QUANTITE=:QUANTITE , DATE_ACHAT=:ETAT where REFERENCE = :ID");

                          edit.bindValue(":ID",a.getREFERENCE());
                          edit.bindValue(":ID_FOURNISSEUR",a.getID_FOURNISSEUR());
                          edit.bindValue(":NOM_MP",a.getNOM_MP());
                          edit.bindValue(":PRIX",a.getPRIX());
                          edit.bindValue(":QUANTITE",a.getQUANTITE());
                          edit.bindValue(":ETAT",a.getDATE_ACHAT());
                          return    edit.exec();


    }

QSqlQueryModel * stock::afficher(){


    QSqlQueryModel* model   = new QSqlQueryModel();

    model->setQuery("select * from stock");

    model->setHeaderData(0, Qt::Horizontal,QObject::tr("REFERENCE"));
    model->setHeaderData(1, Qt::Horizontal,QObject::tr("ID_FOURNISSEUR"));
    model->setHeaderData(2, Qt::Horizontal,QObject::tr("NOM_MP"));
    model->setHeaderData(3, Qt::Horizontal,QObject::tr("QUANTITE"));
    model->setHeaderData(4, Qt::Horizontal,QObject::tr("DATE_ACHAT"));
     model->setHeaderData(5, Qt::Horizontal,QObject::tr("PRIX"));




    return model;
    }
QSqlTableModel *stock::tri(int QUANTITE )
{

   QSqlTableModel *mmodel = new QSqlTableModel();
    mmodel->setTable("stock");

   mmodel->setSort(QUANTITE,Qt::DescendingOrder);
   mmodel->select();
   return mmodel;



}
void stock::trie(QTableView* table){

    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from stock  ORDER BY QUANTITE");
    query->exec();
    model->setQuery(*query);
    table->setModel(model);
    table->show();
}
void stock::trie1(QTableView* table){

    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from stock  ORDER BY DATE_ACHAT");
    query->exec();
    model->setQuery(*query);
    table->setModel(model);
    table->show();
}
void stock::trie2(QTableView* table){

    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from stock  ORDER BY PRIX");
    query->exec();
    model->setQuery(*query);
    table->setModel(model);
    table->show();
}

/*
stock stock::rehcerche(int id)
{  stock a;
    QString stringId = QString::number(id);
   QSqlQuery query;
   query.prepare("select * from stock where REFERENCE=?");
   query.addBindValue(stringId);
   query.exec();
    query.first();
    a.setID_FOURNISSEUR(query.value(1).toString());
    a.setNOM_MP(query.value(2).toInt());
    a.setPRIX(query.value(3).toString());
    a.setQUANTITE(query.value(5).toString());
    a.setREFERENCE(id);
    a.setEtat(query.value(6).toString());
    a.setDATE_ACHAT("");
   return a;
}*/
bool stock::verif_nom(QString ch_nom){
    bool test=true;
    int i;
    if(true)
    {
        for(i=0;i<ch_nom.length();i++){
            if(!(((ch_nom[i]>='A')&&(ch_nom[i]<='Z'))||((ch_nom[i]>='a')&&(ch_nom[i]<='z'))||(ch_nom[i]==' '))){
                test=false;
                return  test;
        }
    }
  }
    return  test;
}
