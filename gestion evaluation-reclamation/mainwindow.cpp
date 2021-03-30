#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QSqlQuery>
#include "reclamation.h"
#include "evaluation.h"
#include "smtp.h"
#include "stati.h"
#include "employee.h"
#include<QPrinter>

#include <QPdfWriter>

#include <QPainter>

#include <QTextDocument>

#include<QPrintDialog>

#include<QFileDialog>




using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   /* annimation=new QPropertyAnimation(ui->pushButton,"geometry");
    annimation->setDuration(1000);
    annimation->setStartValue(ui->pushButton->geometry());
    annimation->setEndValue(QRect(300,300,100,50));
    annimation->start();*/
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
        r.setDescription(ui->desc->toPlainText());
        if(r.verif(ui->desc->toPlainText())==false||ui->desc->toPlainText()=="")
                 {

                                 QMessageBox::critical(nullptr,QObject::tr("Ajouter une reclamation"),
                                                                  QObject::tr("veuillez saisir correctement la  description.\n"
                                                                              "Click Cancel to exit ."),QMessageBox::Cancel);
                }
        if(r.verif(ui->lineEdit_6->text())==false||ui->lineEdit_6->text()=="")
                 {

                                 QMessageBox::critical(nullptr,QObject::tr("Ajouter une reclamation"),
                                                                  QObject::tr("veuillez saisir correctement le titre.\n"
                                                                              "Click Cancel to exit ."),QMessageBox::Cancel);
                }
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

void MainWindow::on_afficher_reclam_clicked()
{
    reclamation r;
        ui->affichagereclam->setModel(r.afficher());
}
void MainWindow::on_affichagereclam_activated(const QModelIndex &index)
{
    QString val=ui->affichagereclam->model()->data(index).toString();
     QSqlQuery query;
      query.prepare("select *  FROM reclamation WHERE ID_reclamation='"+val+"'  ");
      if(query.exec())
      {while(query.next())


          { ui->id_reclam->setText(query.value(0).toString());


          }

      }

}
void MainWindow::on_traiter_clicked()
{ int id=ui->id_reclam->text().toInt();
    reclamation r(id);
    bool test=r.modifieretat();
ui->affichagereclam->setModel(r.afficher());
}
/********evaluation******/


void MainWindow::on_pushButton_2_clicked()//ajouter
{
    evaluation e;
    if(e.verif(ui->commentaire->toPlainText())==false||ui->commentaire->toPlainText()=="")
             {

                             QMessageBox::critical(nullptr,QObject::tr("Ajouter une reclamation"),
                                                              QObject::tr("veuillez saisir correctement la  description.\n"
                                                                          "Click Cancel to exit ."),QMessageBox::Cancel);
            }

        float perf =0;
                float fiab = 0;
               float  autonomie=0;
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
       e.setCommentaire(ui->commentaire->toPlainText());
  e.setCin_employe(ui->cin1->text());
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
       int  id=ui->lineEdit->text().toInt();


            QString d=ui->dateEdit->date().toString("dd.MM.yyyy");

           evaluation e(commentaire,d,id);
            bool test=e.modifier();
  ui->tableView_2->setModel(e.afficher());
}






void MainWindow::on_pdf_clicked()
{
    QString str;
               str.append("<html><head></head><body><center>"+QString("Resultat de l'evaluation "));

               str.append("</center>") ;

               /*str.append("<td>"+QString("NOM")+"</td>") ;
               str.append("<td>"+QString("PRENOM")+"</td>") ;
               str.append("<td>"+QString("FIABLITE")+"</td>") ;
               str.append("<td>"+QString("PERFORMANCE")+"</td>") ;
               str.append("<td>"+QString("AUTONOMIE")+"</td>") ;
            str.append("<td>"+QString("COMMENTAIRE")+"</td>") ;
            str.append("<td>"+QString("PRIME")+"</td>") ;*/
               QSqlQuery* qury=new QSqlQuery();
 QString val=ui->cin->text();


               QSqlQuery* query=new QSqlQuery();
                query->exec("select * from EMPLOYE where CIN='"+val+"'");
                qury->exec("select * from evaluation where cin_employe='"+val+"'");
               while(query->next()and qury->next())
               { float a=(qury->value(1).toInt()+qury->value(2).toInt()+qury->value(3).toInt())/3;
                   QString salaire;
                   if(a==1)
                   {
                       salaire="un";

                       }
                           else  if(a>1 && a<=2)
                            {salaire="deux";
                 }


                         else if(a>2 && a<=3)
                         {salaire="trois";
}

str.append("<p>"+QString("Bravo chér(e) ")) ;
                   str.append(query->value(1).toString());
                   str.append("   ");
                   str.append(query->value(2).toString());
str.append("  vous aurez un prime de  ");
str.append(salaire);
str.append("  salaires ""</p>");
str.append("<p>""Merci de contacter le service financier""</p>");
str.append(" --------------------------------------------------------------------------------------------------------------");
str.append("<filedset>");
str.append("<p>""Voici votre chéque ""</p>");
str.append("<p>""  chéque personel                                                         Num:____" "</p>");
str.append("<p>"" payer à l 'ordre de __________Evaluation___________""</p>");
str.append("<p>" "Montant_________________");
str.append(salaire);
str.append("  _______""</p>");
str.append("<p>""à___");
str.append(query->value(1).toString());
str.append("   ");
str.append(query->value(2).toString());
str.append("_______Date___________");
str.append("______________09/04/2021_____________""</p>");
str.append("                                                                                                  " " Signature");
str.append("</filedset>");
















               }

            str.append("</body></html>") ;

            QPrinter printer ;
            printer.setOrientation(QPrinter::Portrait);
            printer.setOutputFormat(QPrinter::PdfFormat);
            printer.setPaperSize(QPrinter::A4) ;

            QString path=QFileDialog::getSaveFileName(NULL,"Convertir a PDF","..","PDF(*.pdf)");

            if (path.isEmpty()) return ;
            printer.setOutputFileName(path) ;

            QTextDocument doc;
            doc.setHtml(str) ;
            doc.print(&printer);
}


void MainWindow::on_affichageemployee_clicked()
{
    Employee E ;
       ui->listeemployee->setModel(E.afficher());
}

void MainWindow::on_listeemployee_activated(const QModelIndex &index)
{
    QString val=ui->listeemployee->model()->data(index).toString();
     QSqlQuery query;
      query.prepare("select *  FROM EMPLOYE WHERE cin='"+val+"'  ");
      if(query.exec())
      {while(query.next())


          { ui->cin1->setText(query.value(0).toString());
               //ui->email->setText(query.value(4).toString());
              //ui->lineEdit_4->date(query.value(3).toString());

          }

      }
}

void MainWindow::on_voirevaluation_clicked()
{
    QString val=ui->cin->text();

     QSqlQuery query;
      query.prepare("select *  FROM evaluation WHERE cin_employe='"+val+"'  ");
     //int  fiabilite=query.value(3).toInt();
     //int autonomie=query.value(1).toInt();
      //int performance=query.value(2).toInt();
      if(query.exec())
      {while(query.next())


          {
             if(query.value(3).toInt()<2)

      {ui->fiabilite->setText("*Fiabilité");}

            if(query.value(2).toInt()<2)

      {ui->performance->setText("*Performance");}
             if(query.value(1).toInt()<2)

      {ui->autonomie->setText("*autonomie");}
float a=(query.value(1).toInt()+query.value(2).toInt()+query.value(3).toInt())/3;
ui->prime->setText("et un prime de un salaire");
if(a==1)
{ui->augmentation->setText("vous un prime de un salaire ");
}
        else  if(a>1 && a<=2)
         {ui->augmentation->setText("vous aurez une augmentation de 10%");
         ui->prime->setText("et un prime de deux salaire");
}


      else if(a>2 && a<=3)
      {ui->augmentation->setText("vous aurez une augmentation de 20%");
      ui->prime->setText("et un prime de trois salaire");}



     qDebug()<<a;


          }}
      stati s;

      s.exec();

}
