#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>



using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   recette e;
   //ui->tableView->setModel(e.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()//Ajouter
{
    recette t;

       // t.setId_EVENEMENT(ui->lineEdit->text().toInt());
        t.setnom(ui->lineEdit->text());
        t.setcategorie(ui->lineEdit_2->text());
        t.setnb_ingredient(ui->lineEdit_3->text().toInt());
        t.setdescription(ui->lineEdit_4->text());

        t.setid_produit(ui->lineEdit_5->text().toInt());
        t.ajouter();
    ui->tableView->setModel(t.afficher());
}


void MainWindow::on_pushButton_2_clicked()
{recette t;
    ui->tableView->setModel(t.afficher());
}


void MainWindow::on_tableView_clicked(const QModelIndex &index)
{ QString val=ui->tableView->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("select * from recette where ID_RECETTE='"+val+"' or NOM='"+val+"' or CATEGORIE='"+val+"' or NOMBRE_INGREDIENT='"+val+"' or DESCRIPTION='"+val+"' or ID_PRODUIT='"+val+"'" );
    if(qry.exec())
      {while (qry.next())
     { ui->lineEdit->setText(qry.value(1).toString());
       ui->lineEdit_2->setText(qry.value(2).toString());
       ui->lineEdit_3->setText(qry.value(3).toString());
       ui->lineEdit_4->setText(qry.value(4).toString());


       ui->lineEdit_5->setText(qry.value(5).toString());
       ui->lineEdit_6->setText(qry.value(0).toString());


     }
  }
}
void MainWindow::on_chercherfour_clicked()
{ recette t;
    QString nomm = ui->cher1->text();
       ui->tableView->setModel(t.cherch_four(nomm));
}

void MainWindow::on_modifier_clicked()
{
    recette t;

        t.setID_recette(ui->lineEdit_6->text().toInt());
        t.setnom(ui->lineEdit->text());
        t.setcategorie(ui->lineEdit_2->text());
        t.setnb_ingredient(ui->lineEdit_3->text().toInt());
        t.setdescription(ui->lineEdit_4->text());

        t.setid_produit(ui->lineEdit_5->text().toInt());
        t.modifier(t);
    ui->tableView->setModel(t.afficher());
}

void MainWindow::on_supprimer_clicked()
{  recette s;
    int id = ui->lineEdit_6->text().toInt();
    s.supprimer(id);
    ui->tableView->setModel(s.afficher());
}


