
#include "stati.h"
#include "ui_stati.h"
#include<iostream>
stati::stati(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stati)
{
    ui->setupUi(this);
}

stati::~stati()
{
    delete ui;
}
/*int stati::Statistique()
{
    QSqlQuery query;
    int count=0 ;

    QSqlQuery requete("SELECT * FROM reclamation where etat='non traité' ") ;
    while(requete.next())
    {
            count++ ;
    }

return count ;



}






void stati::paintEvent(QPaintEvent *)
{

    QSqlQuery a=Statistique() ;
   int  b=a.value(2).toInt();

    //cout<<b<<endl ;
    int c=3;
    //cout<<c<<endl ;


        float s2= b*100 ;
        float s3=c*100;
        float nb = b+c ;
        float q2 ;
        q2 = s2/nb ;
        float q3;
        q3=s3/nb;
        float y  ;
        y = (q2*360)/100 ;
        float m;
        m= (q3*360)/100;

    QPainter painter(this);
    QRectF size=QRectF(150,40,this->width()-300,this->width()-300);

    painter.setBrush(Qt::white);
    painter.drawPie(size,0,16*y);
    ui->label_2->setText("performance") ;
    painter.setBrush(Qt::red);
    painter.drawPie(size,16*y,16*m);
    //ui->label_3->setText("En travail") ;


}
/*void stati::paintEvent2(QPaintEvent *)
{

    QSqlQuery a=Statistique() ;
   int  p=a.value(3).toInt();
  int  b=a.value(1).toInt();
    //cout<<b<<endl ;
    int c=3;
    //cout<<c<<endl ;

float s1= p*100 ;
        float s2= b*100 ;
        float s3=c*100;
        float nb = b+c ;
        float nb1 = p+c ;
        float q2 ;
        q2 = s2/nb ;
        float q1 ;
        q1 = s1/nb1 ;
        float q3;
        q3=s3/nb;
        float y  ;
        y = (q2*360)/100 ;
        float m;
        m= (q3*360)/100;
        float y1  ;
        y = (q1*360)/100 ;


    QPainter painter(this);
    QRectF size=QRectF(50,40,this->width()-300,this->width()-300);
 QRectF size1=QRectF(0,0,this->width()-300,this->width()-300);
    painter.setBrush(Qt::red);
    painter.drawPie(size,0,16*y);
    painter.drawPie(size1,0,16*y1);
    ui->label_2->setText("fiabilite") ;
    painter.setBrush(Qt::white);
    painter.drawPie(size,16*y,16*m);
     painter.drawPie(size1,16*y1,16*m);
    //ui->label_3->setText("En travail") ;


}
/*
void stati::paintEvent1(QPaintEvent *)
{

    QSqlQuery a=Statistique() ;
   int  b=a.value(1).toInt();

    //cout<<b<<endl ;
    int c=3;
    //cout<<c<<endl ;


        float s2= b*100 ;
        float s3=c*100;
        float nb = b+c ;
        float q2 ;
        q2 = s2/nb ;
        float q3;
        q3=s3/nb;
        float y  ;
        y = (q2*360)/100 ;
        float m;
        m= (q3*360)/100;

    QPainter painter(this);
    QRectF size=QRectF(100,40,this->width()-300,this->width()-300);

    painter.setBrush(Qt::white);
    painter.drawPie(size,0,16*y);
    ui->label_2->setText("performance") ;
    painter.setBrush(Qt::red);
    painter.drawPie(size,16*y,16*m);
    //ui->label_3->setText("En travail") ;


}
*/
/*
void stati::on_pushButton_clicked()
{
    hide();
}
*/
