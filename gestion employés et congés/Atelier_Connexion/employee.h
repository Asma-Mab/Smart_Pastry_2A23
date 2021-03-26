#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <QSqlQueryModel>
#include<QString>
#include<QSqlDatabase>
#include<QSqlError>
#include<QSqlQuery>
#include<QFileInfo>
#include<QMessageBox>
#include<QDebug>
#include<QFileDialog>
#include<QDialog>
#include<QtCore>
#include <QObject>
#include<QtGui>
#include "connection.h"
class Employee
{
public:
    Employee();
    Employee(int,QString,QString,QString,QString,QString,int,QString,int,int,QString,QString);
    Employee(int,QString,QString,int,QString,QString);
    Employee(int,QString,QString,int,int,QString);

    int getcin();
    QString getnom();
    QString getprenom();
    int getage();
    int getevaluation();
    int gettelephone();
    QString getdatenais();
    QString getdateentr();
    QString getspecialite();
    QString getemail();
    QString getpassword();
    QString getrole();

    void setnom(QString);
    void setprenom(QString);
    void setcin(int);
    void setage(int);
    void settelephone(int);
    void setevaluation(int);
    void setdatenais(QString);
    void setdateentr(QString);
    void setemail(QString);
    void setpassword(QString);
    void setrole(QString);
    void setspecialite(QString);

    bool ajouter();
     bool modifier();
     bool modifier12();
    bool supprimer(int);
    bool verif_tel_et_cin(QString);
    bool verif_date(QString);
    bool verif_nom(QString);
    QSqlQueryModel * afficher();
    QSqlQueryModel * afficher11();



private:
    int cin,age,telephone,evaluation;
    QString nom,prenom,specialite,role,email,password,datenais,dateentr;


};

#endif // EMPLOYEE_H
