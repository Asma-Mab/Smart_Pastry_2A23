#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{ stock t;
        t.setREFERENCE(ui->lineEdit->text());
        t.setID_FOURNISSEUR(ui->lineEdit_2->text().toInt());
        t.setNOM_MP(ui->lineEdit_3->text());
        t.setDATE_ACHAT(ui->dateEdit->text());
        t.setQUANTITE(ui->lineEdit_5->text().toInt());

        t.setPRIX(ui->lineEdit_6->text().toInt());


        t.ajouter();
        ui->tableView->setModel(t.afficher());
}

void MainWindow::on_pushButton_2_clicked()
{
    stock a;
    ui->tableView->setModel(a.afficher());
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    QString val=ui->tableView->model()->data(index).toString();
        QSqlQuery qry;
        qry.prepare("select * from STOCK where REFERENCE='"+val+"' or ID_FOURNISSEUR='"+val+"' or NOM_MP='"+val+"' or QUANTITE='"+val+"' or DATE_ACHAT='"+val+"' or PRIX='"+val+"'" );
        if(qry.exec())
          {while (qry.next())
         { ui->lineEdit->setText(qry.value(0).toString());
           ui->lineEdit_2->setText(qry.value(1).toString());
           ui->lineEdit_3->setText(qry.value(2).toString());
           ui->dateEdit->setDate(qry.value(4).toDate());


           ui->lineEdit_5->setText(qry.value(3).toString());
           ui->lineEdit_6->setText(qry.value(5).toString());


         }
      }
}

void MainWindow::on_pushButton_3_clicked()
{
    stock t;
            t.setREFERENCE(ui->lineEdit->text());
            t.setID_FOURNISSEUR(ui->lineEdit_2->text().toInt());
            t.setNOM_MP(ui->lineEdit_3->text());
            t.setDATE_ACHAT(ui->dateEdit->text());
            t.setQUANTITE(ui->lineEdit_5->text().toInt());

            t.setPRIX(ui->lineEdit_6->text().toInt());
            t.modifier(t);
            ui->tableView->setModel(t.afficher());
}

void MainWindow::on_pushButton_4_clicked()
{
    stock t;
    t.supprimer(ui->lineEdit->text());
     ui->tableView->setModel(t.afficher());
}
