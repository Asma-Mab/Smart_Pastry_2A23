#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QSqlQuery>
#include "Recette.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow)
{
    ui->setupUi(this);
  RECETTE e;
   //ui->tableView->setModel(e.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()//Ajouter
{
    RECETTE t;

       // t.setID_RECETTE(ui->lineEdit->text().toInt());
        t.setNOM(ui->lineEdit->text());
        t.setCATEGORIE(ui->lineEdit_2->text());
        t.setID_PRODUIT(ui->lineEdit_3->text().toInt());
        t.setDESCRIPTION(ui->lineEdit_4->text());

        t.setNOMBRE_INGREDIENT(ui->lineEdit_5->text().toInt());
        t.ajouter();
    ui->tableView_2->setModel(t.afficher());
}


void MainWindow::on_pushButton_3_clicked()
{RECETTE t;
    ui->tableView_2->setModel(t.afficher());
}


void MainWindow::on_tableView_2_activated(const QModelIndex &index)
{
    QString val=ui->tableView_2->model()->data(index).toString();
        QSqlQuery qry;
        qry.prepare("select * from recette where id_recette='"+val+"'" );
        if(qry.exec())
          {while (qry.next())
         { ui->lineEdit_11->setText(qry.value(0).toString());
           ui->lineEdit_9->setText(qry.value(1).toString());
           ui->lineEdit_10->setText(qry.value(3).toString());
           ui->lineEdit_7->setText(qry.value(2).toString());
           ui->lineEdit_8->setText(qry.value(4).toString());
    ui->lineEdit_6->setText(qry.value(5).toString());
         }
      }
}

void MainWindow::on_modifierecette_clicked()
{   RECETTE c;
            int id=ui->lineEdit_11->text().toInt();
            QString dp=ui->lineEdit_9->text();
            QString dr=ui->lineEdit_10->text();
            QString r=ui->lineEdit_7->text();

            int cf=ui->lineEdit_8->text().toInt();
    int n=ui->lineEdit_6->text().toInt();
            qDebug()<<n;
            qDebug()<<cf;

          RECETTE C(id,dp,dr,r,cf,n);
            bool test=C.modifier();
            if (test)
            {
                 ui->tableView_2->setModel(c.afficher());

            QMessageBox::information(nullptr,QObject::tr("Modification recette"),
                                     QObject::tr("recette modifié.\n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);
            }
}


void MainWindow::on_supprecette_clicked()
{
    RECETTE c;

    c.setID_RECETTE(ui->lineEdit_11->text().toInt());

          bool test=c.supprimer(c.getID_RECETTE());
         if (test)
         {

          QMessageBox::information(nullptr,QObject::tr("Supprimer recette"),
                                   QObject::tr("recette supprimée.\n"
                                               "Click ok to exit."), QMessageBox::Cancel);
        ui->tableView_2->setModel(c.afficher());


         }
}
