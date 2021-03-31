#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QSqlQuery>
#include "evenement.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow)
{
    ui->setupUi(this);
  evenement e;
   //ui->tableView->setModel(e.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()//Ajouter
{
    evenement t;

        t.setNOM_EVENEMENT(ui->lineEdit->text());
        t.setTYPE(ui->lineEdit_2->text());
        t.setBUDGET(ui->lineEdit_3->text().toFloat());
        t.setLIEU(ui->lineEdit_4->text());

        t.setNOMBRE_INVITE(ui->lineEdit_5->text().toInt());
        qDebug()<<ui->lineEdit_5->text();
        t.ajouter();
    ui->tableView->setModel(t.afficher());
}


void MainWindow::on_pushButton_2_clicked()
{evenement t;
    ui->tableView->setModel(t.afficher());
}




void MainWindow::on_tableView_activated(const QModelIndex &index)
{QString val=ui->tableView->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("select * from evenement where id_evenement='"+val+"' " );
    if(qry.exec())
      {while (qry.next())
     { ui->lineEdit_7->setText(qry.value(1).toString());
       ui->lineEdit_9->setText(qry.value(2).toString());
       ui->lineEdit_8->setText(qry.value(3).toString());
       ui->lineEdit_10->setText(qry.value(4).toString());
       ui->lineEdit_6->setText(qry.value(5).toString());
       ui->lineEdit_11->setText(qry.value(0).toString());


     }
  }
}

void MainWindow::on_suppevent_clicked()
{
    evenement e;

    e.setID_EVENEMENT(ui->lineEdit_11->text().toInt());

          bool test=e.supprimer(e.getID_EVENEMENT());
         if (test)
         {

          QMessageBox::information(nullptr,QObject::tr("Supprimer event"),
                                   QObject::tr("event supprimé.\n"
                                               "Click ok to exit."), QMessageBox::Cancel);

        ui->tableView->setModel(e.afficher());

         }
}

void MainWindow::on_modifevent_clicked()
{
        int idevenement=ui->lineEdit_11->text().toInt();
            QString nomevent=ui->lineEdit_7->text();
            QString type=ui->lineEdit_9->text();
           float budget=ui->lineEdit_8->text().toFloat();
            QString lieu=ui->lineEdit_10->text();
            int nombreinv=ui->lineEdit_6->text().toInt();

            evenement e(idevenement,nomevent,type,budget,lieu,nombreinv);
            bool test=e.modifier();
            if (test)
            {
                 ui->tableView->setModel(e.afficher());
            QMessageBox::information(nullptr,QObject::tr("Modification evenement"),
                                     QObject::tr("Employé modifié.\n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);

}
}
