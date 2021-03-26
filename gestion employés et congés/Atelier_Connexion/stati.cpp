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
int stati::Statistique_partie2()
{
    QSqlQuery query;
    int count=0 ;

    QSqlQuery requete("SELECT * FROM employe INNER JOIN conge ON employe.cin=conge.cin_employe where conge.date_retour>TO_CHAR(SYSDATE,'DD-MM-YYYY')") ;
    while(requete.next())
    {
            count++ ;
    }

return count ;



}
int stati::Statistique_partie3()
{
    QSqlQuery query;
    int c=0 ;
    QSqlQuery requete("select * from employe") ;
    while(requete.next())
    {
            c++ ;
    }

return c-Statistique_partie2() ;



}

void stati::paintEvent(QPaintEvent *)
{

    int b=Statistique_partie2();
    cout<<b<<endl ;
    int c=Statistique_partie3();
    cout<<c<<endl ;


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

    painter.setBrush(Qt::red);
    painter.drawPie(size,0,16*y);
    ui->label_2->setText("En congé") ;
    painter.setBrush(Qt::blue);
    painter.drawPie(size,16*y,16*m);
    ui->label_3->setText("En travail") ;


}


void stati::on_pushButton_clicked()
{
    hide();


}
