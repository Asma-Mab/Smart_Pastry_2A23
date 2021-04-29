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

Employee::Employee(int c,QString n,QString p,int a,int t,QString pas)

{cin=c;nom=n;prenom=p;password=pas;age=a;telephone=t;}
Employee::Employee(int c)

{cin=c;}

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

//model->setHeaderData(9, Qt::Horizontal,QObject::tr("AGE"));

//model->setHeaderData(10,Qt::Horizontal,QObject::tr("DATEENTR"));

//model->setHeaderData(11, Qt::Horizontal,QObject::tr("SPECIALITE"));





return model;

}

QSqlQueryModel* Employee::recherche(const QString &str,QString rech)
{
    QSqlQueryModel* model=new QSqlQueryModel();
    if(rech=="idobjetnom"){
        model->setQuery("select * from employee where cin like '"+str+"%' or prenom like '"+str+"%' or nom like '"+str+"%'");
    }
    else if(rech=="idobjet"){
        model->setQuery("select * from employee where cin like '"+str+"%' or prenom like '"+str+"%' ");
    }
    else if(rech=="idnom"){
        model->setQuery("select * from employee where cin like '"+str+"%' or nom like '"+str+"%' ");
    }
    else if(rech =="objetnom"){
        model->setQuery("select * from employee where nom like '"+str+"%' or prenom like '"+str+"%' ");
    }
    else if(rech=="id"){
        model->setQuery("select * from employee where cin like '"+str+"%'  ");
    }
    else if(rech=="objet"){
        model->setQuery("select * from employee where prenom like '"+str+"%' ");
    }
    else if(rech=="nom"){
        model->setQuery("select * from employee where nom like '"+str+"%' ");
    }

    model->setHeaderData(0, Qt::Horizontal,QObject::tr("CIN"));

    model->setHeaderData(1, Qt::Horizontal,QObject::tr("NOM"));

    model->setHeaderData(2, Qt::Horizontal,QObject::tr("PRENOM"));

    model->setHeaderData(3, Qt::Horizontal,QObject::tr("DATENAIS"));

    model->setHeaderData(4, Qt::Horizontal,QObject::tr("EMAIL"));

    model->setHeaderData(5, Qt::Horizontal,QObject::tr("PASSWORD"));

    model->setHeaderData(6, Qt::Horizontal,QObject::tr("TELEPHONE"));

    model->setHeaderData(7, Qt::Horizontal,QObject::tr("ROLE"));

    model->setHeaderData(8, Qt::Horizontal,QObject::tr("EVALUATION"));

    return model;
}

bool Employee::modifiereval()
{
    QSqlQuery query;
QString id=QString::number(cin);
  query.prepare("update employe SET EVALUATION='1' where cin=:id");
 query.bindValue(":id",id);

  return query.exec();


}
