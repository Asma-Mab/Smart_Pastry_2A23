#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QtDebug>
#include <QVariant>
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
void   MainWindow::sendMail()
{
    Smtp* smtp = new Smtp("khaliltrabelsi304@gmail.com","foufou20", "smtp.gmail.com");
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));
        smtp->sendMail("khaliltrabelsi304@gmail.com","khalil.trabelsi@esprit","demande de stock" ,"jib stock ijb");
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
       /* if (s.getQUANTITE() > 500)
            {
            Smtp* smtp = new Smtp("rajianacib@gmail.com", "nbvcxwnbvcxw", "smtp.gmail.com", 465);

                 smtp->sendMail("rajianacib@gmail.com", "khalil.trabelsi@esprit.tn", "STOCK LIMITE", "vous ne pouvez pas stocker plus de 500 produits");
                  QMessageBox::information(this,"message envoyee", "stock saturé verifier votre mail");//fonctionne
            }*/
            if (t.getQUANTITE() < 50)
            {
           qDebug()<<"blabal";
           Smtp* smtp = new Smtp("khaliltrabelsi304@gmail.com", "SolidOldSnake990", "smtp.gmail.com", 465);

                 smtp->sendMail("khaliltrabelsi304@gmail.com", "khalil.trabelsi@esprit.tn" , "STOCK LIMITE","vous n'avez plus de stock c'est moin de 50 produits");
                  QMessageBox::information(this,"message envoyee", "stock en déficite verifier votre mail");/// fonctionne
            }
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
            if (t.getQUANTITE() < 50)
            {
           qDebug()<<"blabal";
           Smtp* smtp = new Smtp("khaliltrabelsi304@gmail.com", "SolidOldSnake990", "smtp.gmail.com", 465);

                 smtp->sendMail("khaliltrabelsi304@gmail.com", "khalil.trabelsi@esprit.tn" , "STOCK LIMITE","vous n'avez plus de stock c'est moin de 50 produits");
                  QMessageBox::information(this,"message envoyee", "stock en déficite verifier votre mail");/// fonctionne
            }
}

void MainWindow::on_pushButton_4_clicked()
{
    stock t;
    t.supprimer(ui->lineEdit->text());
     ui->tableView->setModel(t.afficher());
}

void MainWindow::on_pb_ajouter_clicked()
{
    fournisseur t;
            t.setNOM(ui->lineEdit_4->text());
            t.setPRENOM(ui->lineEdit_7->text());
            t.setTELEPHONE(ui->lineEdit_8->text().toInt());
            t.setEMAIL(ui->lineEdit_10->text());
            t.setSPECIALITE(ui->lineEdit_9->text());

/*qDebug()<<ui->lineEdit_4->text();
qDebug()<<ui->lineEdit_7->text();
qDebug()<<ui->lineEdit_8->text().toInt();
qDebug()<<ui->lineEdit_10->text();
qDebug()<<ui->lineEdit_9->text();*/
            t.ajouter();
            ui->tableView_2->setModel(t.afficher());
}

void MainWindow::on_pb_afficher_clicked()
{
    fournisseur a;
    ui->tableView_2->setModel(a.afficher());
}

void MainWindow::on_pb_modifier_clicked()
{
    fournisseur t;
            t.setNOM(ui->lineEdit_4->text());
            t.setPRENOM(ui->lineEdit_7->text());
            t.setTELEPHONE(ui->lineEdit_8->text().toInt());
            t.setEMAIL(ui->lineEdit_10->text());
            t.setSPECIALITE(ui->lineEdit_9->text());
            t.setID_FOURNISSEUR(ui->lineEdit_11->text().toInt());
            t.modifier(t);
            ui->tableView_2->setModel(t.afficher());
}

void MainWindow::on_tableView_2_activated(const QModelIndex &index)
{
    QString val=ui->tableView_2->model()->data(index).toString();
        QSqlQuery qry;
        qry.prepare("select * from FOURNISSEUR where ID_FOURNISSEUR='"+val+"' or NOM='"+val+"' or PRENOM='"+val+"' or TELEPHONE='"+val+"' or EMAIL='"+val+"' or SPECIALITE='"+val+"'" );
        if(qry.exec())
          {while (qry.next())

         { ui->lineEdit_11->setText(qry.value(0).toString());
           ui->lineEdit_4->setText(qry.value(1).toString());
           ui->lineEdit_7->setText(qry.value(2).toString());
           ui->lineEdit_8->setText(qry.value(8).toString());

           ui->lineEdit_10->setText(qry.value(10).toString());
           ui->lineEdit_9->setText(qry.value(11).toString());

         }
      }
}

void MainWindow::on_pb_suprimer_clicked()
{
    fournisseur t;
    t.supprimer(ui->lineEdit_11->text().toInt());
     ui->tableView_2->setModel(t.afficher());
}



void MainWindow::on_pb_tri_clicked()
{

        stock p;

         QTableView* table=ui->tableView;

        p.trie(table);

    }


void MainWindow::on_tri_prd_clicked()
{
    stock p;

     QTableView* table=ui->tableView;

    p.trie2(table);
}

void MainWindow::on_tri_d_clicked()
{
    stock p;

     QTableView* table=ui->tableView;

    p.trie1(table);
}

void MainWindow::on_pushButton_5_clicked()
{
    stati s;
    s.exec();
}
