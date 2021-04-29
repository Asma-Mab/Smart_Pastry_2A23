#include "admin.h"
#include "ui_admin.h"
#include"evaluation.h"
admin::admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);
}

admin::~admin()
{
    delete ui;
}
void admin::on_pushButton_2_clicked()//ajouter
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



void admin::on_tableView_2_activated(const QModelIndex &index)//recuperer
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

void admin::on_pushButton_5_clicked()
{  evaluation e;
    ui->tableView_2->setModel(e.afficher());
}

void admin::on_pushButton_7_clicked()
{evaluation e;
    //QMediaPlayer * music=new QMediaPlayer();
    //music->setMedia(QUrl("qrc:/sounds/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
   // music->play();
    e.setId_evaluation(ui->lineEdit->text().toInt());

          bool test=e.supprimer(e.getId_evaluation());

        ui->tableView_2->setModel(e.afficher());

}

void admin::on_pushButton_8_clicked()
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







