#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QSqlQuery>
#include "reclamation.h"
#include "evaluation.h"
using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow)
{
    ui->setupUi(this);
reclamation r;
   ui->tableView->setModel(r.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()//Ajouter
{
    reclamation r;

       // t.setId_equipement(ui->lineEdit->text().toInt());
        r.setTitre(ui->lineEdit_6->text());

        r.setDate_reclamation(ui->lineEdit_4->text());
        r.setDescription(ui->lineEdit_7->text());

        r.ajouter();
    ui->tableView->setModel(r.afficher());
}



void MainWindow::on_tableView_activated(const QModelIndex &index)//recuperer
{
    QString val=ui->tableView->model()->data(index).toString();
     QSqlQuery query;
      query.prepare("select *  FROM reclamation WHERE ID_reclamation='"+val+"'  ");
      if(query.exec())
      {while(query.next())


          { ui->lineEdit_8->setText(query.value(4).toString());
               ui->lineEdit_9->setText(query.value(3).toString());
              //ui->lineEdit_4->date(query.value(3).toString());

          }

      }
}

void MainWindow::on_pushButton_3_clicked()//supprimer
{
    {
        reclamation r;
        //QMediaPlayer * music=new QMediaPlayer();
        //music->setMedia(QUrl("qrc:/sounds/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
       // music->play();
        r.setTitre(ui->lineEdit_8->text());

              bool test=r.supprimer(r.getTitre());

            ui->tableView->setModel(r.afficher());





    }
}
void MainWindow::on_pushButton_6_clicked()
{
    reclamation r;
        ui->tableView->setModel(r.afficher());
}

void MainWindow::on_pushButton_4_clicked()//modifier
{
    //QMediaPlayer * music=new QMediaPlayer();
       // music->setMedia(QUrl("qrc:/sounds/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
       // music->play();
        QString titre=ui->lineEdit_8->text();
            QString desc=ui->lineEdit_9->text();

            QString d=ui->lineEdit_4->date().toString("dd.MM.yyyy");

           reclamation  r(titre,desc,d);
            bool test=r.modifier();
  ui->tableView->setModel(r.afficher());
    }



/********evaluation******/


void MainWindow::on_pushButton_2_clicked()//afficher
{
    evaluation e;
        int perf =0;
                int fiab = 0;
                int  autonomie=0;
        //performance
       if(ui->faibleperf1_3->isChecked())
       {perf=perf+1;}
       else if (ui->moyenneperf1_3->isChecked())
       {perf=perf+2;}
       else if (ui->excelperf1_3->isChecked())
       {perf=perf+3;}
       if(ui->faibleperf2_3->isChecked())
       {perf=perf+1;}
       else if (ui->moyenneperf2_3->isChecked())
       {perf=perf+2;}
       else if (ui->excelperf2->isChecked())
       {perf=perf+3;}
       e.setPerformance(perf/2);
       //fiabilité
       if(ui->faiblefiab1_3->isChecked())
       {fiab=fiab+1;}
       else if (ui->moyennefiab2_2->isChecked())
       {fiab=fiab+2;}
       else if (ui->excelfiab1_3->isChecked())
       {fiab=fiab+3;}
       if(ui->faiblefiab2->isChecked())
       {fiab=fiab+1;}
       else if (ui->moyennefiab2->isChecked())
       {fiab=fiab+2;}
       else if (ui->excelfiab2_3->isChecked())
       {fiab=fiab+3;}
       if(ui->faiblefiab3->isChecked())
     {fiab=fiab+1;}
       else if (ui->moyennefiab3->isChecked())
       {fiab=fiab+2;}
       else if (ui->excelfiab3->isChecked())
       {fiab=fiab+3;}
       e.setFiabilite(fiab/3);
       //autonomie
       if(ui->faibleauto1_3->isChecked())
       {autonomie=autonomie+1;}
       else if (ui->moyenneauto1->isChecked())
      {autonomie=autonomie+2;}
       else if (ui->excelauto1_3->isChecked())
      {autonomie=autonomie+3;}
       if(ui->faibleauto2_3->isChecked())
       {autonomie=autonomie+1;}
       else if (ui->moyenneauto2->isChecked())
       {autonomie=autonomie+2;}
       else if (ui->excelauto2_3->isChecked())
      {autonomie=autonomie+3;}
       if(ui->faibleauto3_3->isChecked())
      {autonomie=autonomie+1;}
       else if (ui->moyenneauto3->isChecked())
       {autonomie=autonomie+2;}
       else if (ui->excelauto3_3->isChecked())
       {autonomie=autonomie+3;}

       e.setAutonomie(autonomie/3);
       e.setDate_evaluation(ui->dateEval->text());
       e.setCommentaire(ui->lineEdit_desc->text());

      e.ajouter();
      ui->tableView_2->setModel(e.afficher());
}



void MainWindow::on_tableView_2_activated(const QModelIndex &index)//recuperer
{
    QString val=ui->tableView_2->model()->data(index).toString();
     QSqlQuery query;
      query.prepare("select *  FROM evaluation WHERE ID_evaluation='"+val+"'  ");
      if(query.exec())
      {while(query.next())


          { ui->lineEdit->setText(query.value(0).toString());
               ui->lineEdit_2->setText(query.value(4).toString());
              //ui->lineEdit_4->date(query.value(3).toString());

          }

      }
}

void MainWindow::on_pushButton_5_clicked()
{  evaluation e;
    ui->tableView_2->setModel(e.afficher());
}

void MainWindow::on_pushButton_7_clicked()
{evaluation e;
    //QMediaPlayer * music=new QMediaPlayer();
    //music->setMedia(QUrl("qrc:/sounds/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
   // music->play();
    e.setId_evaluation(ui->lineEdit->text().toInt());

          bool test=e.supprimer(e.getId_evaluation());

        ui->tableView_2->setModel(e.afficher());

}

void MainWindow::on_pushButton_8_clicked()
{
    //QMediaPlayer * music=new QMediaPlayer();
       // music->setMedia(QUrl("qrc:/sounds/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
       // music->play();
        QString commentaire=ui->lineEdit_2->text();


            QString d=ui->dateEdit->date().toString("dd.MM.yyyy");

           evaluation e(commentaire,d);
            bool test=e.modifier();
  ui->tableView_2->setModel(e.afficher());
}
