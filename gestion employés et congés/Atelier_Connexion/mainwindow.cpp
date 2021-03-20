#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <string>
#include <QSqlQuery>
#include<QSqlQueryModel>
#include<QMediaPlayer>

using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setModel(E.afficher());
    ui->tableView_2->setModel(c.afficher1());
    ui->tableView_3->setModel(c.afficher());
    ui->tableView_4->setModel(c.afficher2());
    conge c;
    Employee E;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Ajouter_clicked()
{
    Employee E;
QMediaPlayer * music=new QMediaPlayer();
music->setMedia(QUrl("qrc:/sounds/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
music->play();
qDebug()<< music->errorString();
       // t.setId_Employee(ui->lineEdit->text().toInt());
        E.setnom(ui->nom->text());
        E.setcin(ui->cin->text().toInt());
        E.setprenom(ui->prenom->text());
       E.setage(ui->age->text().toInt());
          E.settelephone(ui->tel->text().toInt());
          E.setevaluation(ui->eval->text().toInt());
          QString datenString=ui->datenais->date().toString("dd.MM.yyyy");
          QString datentreString=ui->dateentr->date().toString("dd.MM.yyyy");
          E.setdatenais(datenString);
          qDebug()<<datenString;
          qDebug()<<datentreString;
          E.setdateentr(datentreString);
          E.setemail(ui->email->text());
          qDebug()<<ui->email->text();
         E.setpassword(ui->mdp->text());
          E.setrole(ui->role->currentText());
         E.setspecialite(ui->specialite->text());
        E.ajouter();
        ui->tableView->setModel(E.afficher());
}




void MainWindow::on_pushButton_clicked()
{
    Employee E1;
    QMediaPlayer * music=new QMediaPlayer();
    music->setMedia(QUrl("qrc:/sounds/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
    music->play();
    E1.setcin(ui->supcin->text().toInt());

          bool test=E1.supprimer(E1.getcin());
         if (test)
         {

          QMessageBox::information(nullptr,QObject::tr("Supprimer employé"),
                                   QObject::tr("Employé supprimé.\n"
                                               "Click ok to exit."), QMessageBox::Cancel);
        ui->tableView->setModel(E.afficher());
         }




}

void MainWindow::on_tableView_activated(const QModelIndex &index)
{QString val=ui->tableView->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("select * from Employe where CIN='"+val+"' or nom='"+val+"' or prenom='"+val+"' or evaluation='"+val+"' or dateentr='"+val+"' or specialite='"+val+"'" );
    if(qry.exec())
      {while (qry.next())
     { ui->cin1->setText(qry.value(0).toString());
       ui->nom1->setText(qry.value(1).toString());
       ui->prenom1->setText(qry.value(2).toString());
       ui->eval1->setText(qry.value(8).toString());
       qDebug()<<ui->eval1->text();

       ui->dateentr1->setDate(qry.value(10).toDate());
       ui->specialite1->setText(qry.value(11).toString());
       qDebug()<<ui->specialite1->text();

     }
  }
}

void MainWindow::on_modifier_clicked()
{QMediaPlayer * music=new QMediaPlayer();
    music->setMedia(QUrl("qrc:/sounds/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
    music->play();
    int cin=ui->cin1->text().toInt();
        QString nom=ui->nom1->text();
        QString prenom=ui->prenom1->text();
        int eval=ui->eval1->text().toInt();
        QString d=ui->dateentr1->date().toString("dd.MM.yyyy");
        QString s=ui->specialite1->text();
        Employee e(cin,nom,prenom,eval,d,s);
        bool test=e.modifier();
        if (test)
        {
             ui->tableView->setModel(E.afficher());
        QMessageBox::information(nullptr,QObject::tr("Modification Employé"),
                                 QObject::tr("Employé modifié.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
        }
}


void MainWindow::on_load_clicked()
{
    QMediaPlayer * music=new QMediaPlayer();
        music->setMedia(QUrl("qrc:/sounds/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
        music->play();
    QSqlQueryModel * modal=new QSqlQueryModel();
    QSqlQuery *query=new QSqlQuery();
    query->prepare("Select CIN from EMPLOYE");
    query->exec();
    modal->setQuery(*query);
    ui->cinemploye_2->setModel(modal);

}

void MainWindow::on_ajouterconge_clicked()
{
  conge c;
QMediaPlayer * music=new QMediaPlayer();
music->setMedia(QUrl("qrc:/sounds/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
music->play();
qDebug()<< music->errorString();
       // t.setId_Employee(ui->lineEdit->text().toInt());
        c.setcin_employe(ui->cinemploye_2->currentText().toInt());
        QString date_depart=ui->datedepart->date().toString("dd.MM.yyyy");
        QString date_retour=ui->dateretour->date().toString("dd.MM.yyyy");
        c.setdate_depart(date_depart);
        c.setdate_retour(date_retour);
     c.setconfirmation(ui->confirmation->currentText());
     c.setnature(ui->nature->currentText());
        c.ajouter();
        ui->tableView_2->setModel(c.afficher1());
        ui->tableView_3->setModel(c.afficher());
        ui->tableView_4->setModel(c.afficher2());
}

void MainWindow::on_tableView_2_activated(const QModelIndex &index)
{
    QString val=ui->tableView_2->model()->data(index).toString();
        QSqlQuery qry;
        qry.prepare("select * from CONGE where confirmation='"+val+"'" );
        if(qry.exec())
          {while (qry.next())
         { ui->idconge_2->setText(qry.value(5).toString());
                ui->confirmation_2->setCurrentText(qry.value(4).toString());
           ui->nature_2->setCurrentText(qry.value(3).toString());
           ui->date_depart_2->setText(qry.value(1).toString());
           ui->date_retour_2->setText(qry.value(2).toString());

         }
      }
}

void MainWindow::on_modifierconge_clicked()
{
    QMediaPlayer * music=new QMediaPlayer();
        music->setMedia(QUrl("qrc:/sounds/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
        music->play();
     int id=ui->idconge_2->text().toInt();
            QString dp=ui->date_depart_2->text();
            QString dr=ui->date_retour_2->text();
            QString cf=ui->confirmation_2->currentText();
            QString n=ui->nature_2->currentText();
            qDebug()<<n;
            qDebug()<<cf;

          conge C(dp,dr,cf,n,id);
            bool test=C.modifier();
            if (test)
            {
                 ui->tableView_2->setModel(c.afficher1());
                 ui->tableView_3->setModel(c.afficher());
                 ui->tableView_4->setModel(c.afficher2());
            QMessageBox::information(nullptr,QObject::tr("Modification Congé"),
                                     QObject::tr("Congé modifié.\n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);
            }
}

void MainWindow::on_suppconge_clicked()
{
    conge c;
    QMediaPlayer * music=new QMediaPlayer();
    music->setMedia(QUrl("qrc:/sounds/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
    music->play();
    c.setidconge(ui->idconge_2->text().toInt());

          bool test=c.supprimer(c.getidconge());
         if (test)
         {

          QMessageBox::information(nullptr,QObject::tr("Supprimer congé"),
                                   QObject::tr("congé supprimé.\n"
                                               "Click ok to exit."), QMessageBox::Cancel);
        ui->tableView_2->setModel(c.afficher1());
        ui->tableView_3->setModel(c.afficher());
        ui->tableView_4->setModel(c.afficher2());

         }
}
