#include "login.h"
#include "dialog.h"


#include<QDialog>
#include "ui_login.h"
#include<QString>
#include<QDebug>
#include<QSqlQuery>
#include<QSqlQueryModel>

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    Connection c;

}

login::~login()
{
    delete ui;
}

void login::on_login_2_clicked()
{
    QString username,password;
    username=ui->useranme->text();
    password=ui->password->text();
    if(!c.createconnect())
    {
      qDebug()<<"failed to open database";

    }
    QSqlQuery qry;
  int a=0;  if(qry.exec("Select * from employe where NOM='"+username+"' and password='"+password+"' "))
    { while(qry.next())
        {QString role= qry.value(7).toString();
        qDebug()<<role;

     if(role=="Admin")
     {
        a=1;
     this->hide();

     }
     else if(role=="EmployÃ©")
     {}
     else
      {}
}

    }
  qDebug()<<a;
    if(a==1)
    {
        Dialog d;
        d.exec();
    }

}
