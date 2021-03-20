#include "employee.h"
#include <QSqlQuery>
#include<QtDebug>
#include <QVariant>

Employee::Employee()
{
cin=0;
age=0;
telephone=0;
evaluation=0;
specialite="";
role="";
email="";
password="";
nom="";
prenom="";
datenais="";
dateentr="";

}
Employee:: Employee(int c,QString n,QString p,QString dn,QString e,QString pas,int t,QString r,int ev,int a,QString d,QString s)

{
cin=c;nom=n;prenom=p;password=pas;datenais=dn;dateentr=d;role=r;specialite=s;email=e;age=a;telephone=t;evaluation=ev;}
Employee:: Employee(int c,QString n,QString p,int ev,QString d,QString s)

{
cin=c;nom=n;prenom=p;dateentr=d;specialite=s;evaluation=ev;}
int Employee::getcin(){return cin;};
QString Employee::getnom(){return nom;};
QString Employee::getprenom(){return prenom;};
int Employee::getage(){return age;};
QString Employee::getdatenais(){return datenais;};
QString Employee::getdateentr(){return dateentr;};
QString Employee::getspecialite(){return specialite;};
QString Employee::getemail(){return email;};
QString Employee::getpassword(){return password;};
QString Employee::getrole(){return role;};
int Employee::gettelephone(){return telephone;};
int Employee::getevaluation(){return evaluation;};
void Employee::setnom(QString n){nom=n;};
void Employee::setprenom(QString p){prenom=p;};
void Employee::setcin(int c){cin=c;};
void Employee::setage(int a){age=a;};
void Employee::settelephone(int a){telephone=a;};
void Employee::setevaluation(int ev){evaluation=ev;};
void Employee::setdatenais(QString dn){datenais=dn;};
void Employee::setdateentr(QString de){dateentr=de;};
void Employee::setemail(QString m){email=m;};
void Employee::setpassword(QString p){password=p;};
void Employee::setrole(QString r){role=r;};
void Employee::setspecialite(QString s){specialite=s;};

bool Employee::ajouter(){

    QSqlQuery query;
    QString scin=QString::number(cin);
    QString sa=QString::number(age);
    QString stel=QString::number(telephone);
    QString seval=QString::number(evaluation);


    query.prepare("INSERT INTO EMPLOYE(cin,nom,prenom,datenais,email,password,telephone,role,evaluation,age,dateentr,specialite) VALUES (:c,:n,:p,:dn,:em,:pwd,:tel,:r,:eval,:a,:d,:s)");
    query.bindValue(":c",scin);
    query.bindValue(":n",nom);
    query.bindValue(":p",prenom);
    query.bindValue(":dn",datenais);
    query.bindValue(":em",email);
    query.bindValue(":pwd",password);
    query.bindValue(":tel",stel);
    query.bindValue(":r",role);
    query.bindValue(":eval",seval);
    query.bindValue(":a",sa);
    query.bindValue(":d",dateentr);
    query.bindValue(":s",specialite);

    return query.exec();
}

bool Employee::supprimer(int cinn){
    QSqlQuery query;
    query.prepare("DELETE FROM EMPLOYE WHERE CIN=:cinn");
    query.bindValue(0,cinn);

    return query.exec();
}
bool Employee::modifier()
{
    QSqlQuery query;
    QString scin=QString::number(cin);
    QString seval=QString::number(evaluation);
  query.prepare("Update EMPLOYE set CIN=:c, NOM=:n, PRENOM=:p,EVALUATION=:eval,DATEENTR=:d,SPECIALITE=:s where CIN=:c");
  query.bindValue(":c",scin);
  query.bindValue(":n",nom);
  query.bindValue(":p",prenom);
  query.bindValue(":eval",seval);
  query.bindValue(":d",dateentr);
  query.bindValue(":s",specialite);
  return query.exec();
}
QSqlQueryModel * Employee::afficher(){


QSqlQueryModel* model   = new QSqlQueryModel();

model->setQuery("select * from EMPLOYE");

model->setHeaderData(0, Qt::Horizontal,QObject::tr("CIN"));
model->setHeaderData(1, Qt::Horizontal,QObject::tr("NOM"));
model->setHeaderData(2, Qt::Horizontal,QObject::tr("PRENOM"));
model->setHeaderData(3, Qt::Horizontal,QObject::tr("DATENAIS"));
model->setHeaderData(4, Qt::Horizontal,QObject::tr("EMAIL"));
model->setHeaderData(5, Qt::Horizontal,QObject::tr("PASSWORD"));
model->setHeaderData(6, Qt::Horizontal,QObject::tr("TELEPHONE"));
model->setHeaderData(7, Qt::Horizontal,QObject::tr("ROLE"));
model->setHeaderData(8, Qt::Horizontal,QObject::tr("EVALUATION"));
model->setHeaderData(9, Qt::Horizontal,QObject::tr("AGE"));
model->setHeaderData(10,Qt::Horizontal,QObject::tr("DATEENTR"));
model->setHeaderData(11, Qt::Horizontal,QObject::tr("SPECIALITE"));


return model;
}

