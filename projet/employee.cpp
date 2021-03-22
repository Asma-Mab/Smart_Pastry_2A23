#include "employee.h"
#include <QSqlQuery>
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
datenais="";

}
Employee:: Employee(int c,QString n,QString p,QString dn,QString e,QString pas,int t,QString r,int ev,int a,QString d,QString s)

{
cin=c;nom=n;prenom=p;password=pas;datenais=dn;dateentr=d;role=r;specialite=s;email=e;age=a;telephone=t;evaluation=ev;}
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
    query.prepare("INSERT INTO employee VALUES (?, ?, ?, ? , ?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue(this->cin);
    query.addBindValue(this->nom);
    query.addBindValue(this->prenom);
    query.addBindValue(this->datenais);
    query.addBindValue(this->email);
    query.addBindValue(this->password);
    query.addBindValue(this->telephone);
    query.addBindValue(this->role);
    query.addBindValue(this->evaluation);
    query.addBindValue(this->age);
    query.addBindValue(this->dateentr);
    query.addBindValue(this->specialite);

    return query.exec();
}

bool Employee::supprimer(){
    QSqlQuery query;
    QString stringId = QString::number(cin);

    query.prepare("DELETE FROM employee WHERE CIN=?");
    query.addBindValue(stringId);

    return query.exec();
}

/*QSqlQueryModel * Employee::afficher(){


QSqlQueryModel* model   = new QSqlQueryModel();

model->setQuery("select * from employee");

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
model->setHeaderData(10, Qt::Horizontal,QObject::tr("DATEENTR"));
model->setHeaderData(11, Qt::Horizontal,QObject::tr("SPECIALITE"));
ui->tableView->resizeColumnToContents(0);
ui->tableView->resizeColumnToContents(1);
 ui->tableView->resizeColumnToContents(2);
 ui->tableView->resizeColumnToContents(3);
 ui->tableView->resizeColumnToContents(4);
 ui->tableView->resizeColumnToContents(5);
 ui->tableView->resizeColumnToContents(6);
 ui->tableView->resizeColumnToContents(7);
 ui->tableView->resizeColumnToContents(8);
 ui->tableView->resizeColumnToContents(9);
 ui->tableView->resizeColumnToContents(10);
 ui->tableView->resizeColumnToContents(11);

return model;
}

}
*/
