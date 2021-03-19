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


void MainWindow::on_pushButton_2_clicked()
{reclamation r;
    ui->tableView->setModel(r.afficher());
}







void MainWindow::on_pushButtoneval_clicked()
{evaluation e;
    int perf =0;
            int fiab = 0;
            int  autonomie=0;
    //performance
   if(ui->faibleperf1->isChecked())
   {perf=perf+1;}
   else if (ui->moyenneperf1->isChecked())
   {perf=perf+2;}
   else if (ui->excelperf1->isChecked())
   {perf=perf+3;}
   if(ui->faibleperf2->isChecked())
   {perf=perf+1;}
   else if (ui->moyenneperf2->isChecked())
   {perf=perf+2;}
   else if (ui->exelperf2->isChecked())
   {perf=perf+3;}
   e.setPerformance(perf/2);
   //fiabilité
   if(ui->faiblefiab1->isChecked())
   {fiab=fiab+1;}
   else if (ui->moyenefiab1->isChecked())
   {fiab=fiab+2;}
   else if (ui->excelfiab1->isChecked())
   {fiab=fiab+3;}
   if(ui->faiblefiab_2->isChecked())
   {fiab=fiab+1;}
   else if (ui->moyenefiab_2->isChecked())
   {fiab=fiab+2;}
   else if (ui->excelfiab2->isChecked())
   {fiab=fiab+3;}
   if(ui->faiblefiab_3->isChecked())
 {fiab=fiab+1;}
   else if (ui->moyenefiab_3->isChecked())
   {fiab=fiab+2;}
   else if (ui->excelfiab_3->isChecked())
   {fiab=fiab+3;}
   e.setFiabilite(fiab/3);
   //autonomie
   if(ui->faibleauto1->isChecked())
   {autonomie=autonomie+1;}
   else if (ui->moyeneauto1->isChecked())
  {autonomie=autonomie+2;}
   else if (ui->excelauto1->isChecked())
  {autonomie=autonomie+3;}
   if(ui->faibleauto2->isChecked())
   {autonomie=autonomie+1;}
   else if (ui->moyeneauto2->isChecked())
   {autonomie=autonomie+2;}
   else if (ui->excelauto2->isChecked())
  {autonomie=autonomie+3;}
   if(ui->faibleauto3->isChecked())
  {autonomie=autonomie+1;}
   else if (ui->moyeneauto3->isChecked())
   {autonomie=autonomie+2;}
   else if (ui->excelauto3->isChecked())
   {autonomie=autonomie+3;}

   e.setAutonomie(autonomie/3);
   e.setDate_evaluation(ui->dateEval->text());
   e.setCommentaire(ui->lineEdit_7->text());

  e.ajouter();
  ui->tableView_2->setModel(e.afficher());

}

void MainWindow::on_tableView_activated(const QModelIndex &index)
{
    QString val=ui->tableView->model()->data(index).toString();
     QSqlQuery query;
      query.prepare("select *  FROM reclamation WHERE ID_reclamation='"+val+"' ");
      if(query.exec())
      {while(query.next())


          { ui->lineEdit_6->setText(query.value(4).toString());
               ui->lineEdit_7->setText(query.value(3).toString());
              //ui->lineEdit_4->date(query.value(3).toString());

          }

      }
}

void MainWindow::on_pushButton_3_clicked()
{
    {
        reclamation r;
        //QMediaPlayer * music=new QMediaPlayer();
        //music->setMedia(QUrl("qrc:/sounds/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
       // music->play();
        r.setTitre(ui->lineEdit_6->text());

              bool test=r.supprimer(r.getTitre());

            ui->tableView->setModel(r.afficher());





    }
}


void MainWindow::on_pushButton_4_clicked()
{
    //QMediaPlayer * music=new QMediaPlayer();
       // music->setMedia(QUrl("qrc:/sounds/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
       // music->play();
        QString titre=ui->lineEdit_6->text();
            QString desc=ui->lineEdit_7->text();

            QString d=ui->lineEdit_4->date().toString("dd.MM.yyyy");

           reclamation  r(titre,desc,d);
            bool test=r.modifier();
  ui->tableView->setModel(r.afficher());
    }
