#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <string>
#include<QPrinter>
#include <QPdfWriter>
#include <QPainter>
#include <QTextDocument>
#include<QPrintDialog>
#include<QFileDialog>
#include <QSqlQuery>
#include<QSqlQueryModel>
#include<QMediaPlayer>
#include"stati.h"

using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   ui->tableView_5->setModel(E.afficher11());
    ui->tableView->setModel(E.afficher());
    ui->tableView_2->setModel(c.afficher1());
    ui->tableView_3->setModel(c.afficher());
    ui->tableView_4->setModel(c.afficher2());
    conge c;
    Employee E;
    //for email tab
    connect(ui->sendBtn, SIGNAL(clicked()),this, SLOT(sendMail()));
    connect(ui->browseBtn, SIGNAL(clicked()), this, SLOT(browse()));

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
         if(E.verif_tel_et_cin(ui->cin->text())==false){

                QMessageBox::critical(nullptr,QObject::tr("Ajouter un employe"),
                                                 QObject::tr("veuillez saisir correctement votre CIN.\n"
                                                             "Click Cancel to exit ."),QMessageBox::Cancel);
                     }
         else if(E.verif_tel_et_cin(ui->tel->text())==false){

                QMessageBox::critical(nullptr,QObject::tr("Ajouter un employe"),
                                                 QObject::tr("veuillez saisir correctement votre Numero.\n"
                                                             "Click Cancel to exit ."),QMessageBox::Cancel);
                     }
         else if(ui->specialite->text()==""){QMessageBox::critical(nullptr,QObject::tr("Ajouter un employe"),
                                                                   QObject::tr("veuillez saisir votre specialite.\n"
                                                                           "Click Cancel to exit ."),QMessageBox::Cancel);}
       else if(E.verif_nom(ui->nom->text())==false||ui->nom->text()=="")
         {

                         QMessageBox::critical(nullptr,QObject::tr("Ajouter un employe"),
                                                          QObject::tr("veuillez saisir correctement votre nom.\n"
                                                                      "Click Cancel to exit ."),QMessageBox::Cancel);
        }
         else if(E.verif_nom(ui->prenom->text())==false||ui->prenom->text()=="")
         {

                         QMessageBox::critical(nullptr,QObject::tr("Ajouter un employe"),
                                                          QObject::tr("veuillez saisir correctement votre prenom.\n"
                                                                      "Click Cancel to exit ."),QMessageBox::Cancel);
        }
        else E.ajouter();
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

void MainWindow::on_tableView_5_activated(const QModelIndex &index)
{
    QString val=ui->tableView_5->model()->data(index).toString();
        QSqlQuery qry;
        qry.prepare("select * from EMPLOYE where CIN='"+val+"'" );
        if(qry.exec())
          {while (qry.next())
         { ui->mdp_2->setText(qry.value(0).toString());
                ui->cin1_2->setText(qry.value(5).toString());
                ui->nom1_2->setText(qry.value(1).toString());
           ui->prenom1_2->setText(qry.value(2).toString());
           ui->age_2->setText(qry.value(9).toString());
           ui->tel_2->setText(qry.value(6).toString());

         }
      }
}

void MainWindow::on_modifier_2_clicked()
{
    QMediaPlayer * music=new QMediaPlayer();
        music->setMedia(QUrl("qrc:/sounds/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
        music->play();
        int cin=ui->mdp_2->text().toInt();
        QString mdp=ui->cin1_2->text();
        int age=ui->age_2->text().toInt();
        int tel=ui->tel_2->text().toInt();
        QString nom=ui->nom1_2->text();
        QString prenom=ui->prenom1_2->text();
        Employee e(cin,nom,prenom,age,tel,mdp);
            bool test=e.modifier12();
            if (test)
            {
                 ui->tableView_5->setModel(E.afficher11());
            QMessageBox::information(nullptr,QObject::tr("Modification Profil"),
                                     QObject::tr("Profil modifié.\n"
                                                 "Click ok to exit."), QMessageBox::Cancel);
            }
}
//mailing
void  MainWindow::browse()
{
    files.clear();

    QFileDialog dialog(this);
    dialog.setDirectory(QDir::homePath());
    dialog.setFileMode(QFileDialog::ExistingFiles);

    if (dialog.exec())
        files = dialog.selectedFiles();

    QString fileListString;
    foreach(QString file, files)
        fileListString.append( "\"" + QFileInfo(file).fileName() + "\" " );

    ui->file->setText( fileListString );

}
void   MainWindow::sendMail()
{     ui->anim->setText("Sending...") ;
    Smtp* smtp = new Smtp("farah.braiki@esprit.tn","191JFT4636", "smtp.gmail.com");
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    if( !files.isEmpty() )
        smtp->sendMail("farah.braiki@esprit.tn", ui->rcpt->currentText() , ui->subject->text(),ui->msg->toPlainText(), files );
    else
        smtp->sendMail("farah.braiki@esprit.tn", ui->rcpt->currentText() , ui->subject->text(),ui->msg->toPlainText());
}
void   MainWindow::mailSent(QString status)
{

    if(status == "Message sent")
      //  QMessageBox::warning( nullptr, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
    {animation = new QPropertyAnimation(ui->anim,"geometry");
        ui->anim->setText("Email sent!") ;
        animation->setDuration(1000);
        animation->setStartValue(ui->anim->geometry());
        animation->setEndValue(QRect(200,200,100,50));
        animation->start();
    }
    ui->rcpt->clear();
    ui->subject->clear();
    ui->file->clear();
    ui->msg->clear();
    ui->mail_pass->clear();
}

void MainWindow::on_ajouterconge_2_clicked()
{
    conge c;
  QMediaPlayer * music=new QMediaPlayer();
  music->setMedia(QUrl("qrc:/sounds/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
  music->play();
  qDebug()<< music->errorString();
         // t.setId_Employee(ui->lineEdit->text().toInt());
          c.setcin_employe(ui->lineEditc->text().toInt());
          QString date_depart=ui->datedepart->date().toString("dd.MM.yyyy");
          QString date_retour=ui->dateretour->date().toString("dd.MM.yyyy");
          c.setdate_depart(date_depart);
          c.setdate_retour(date_retour);
       c.setnature(ui->nature_3->currentText());
          c.ajouter11();
          ui->tableView_6->setModel(c.afficher11(c.getcin_employe()));
          ui->tableView_2->setModel(c.afficher1());
          ui->tableView_3->setModel(c.afficher());
          ui->tableView_4->setModel(c.afficher2());
}


void MainWindow::on_loading_clicked()
{
    conge c1;
       QMediaPlayer * music=new QMediaPlayer();
       music->setMedia(QUrl("qrc:/sounds/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
       music->play();
       c1.setcin_employe(ui->lineEditc->text().toInt());
       qDebug()<<ui->lineEditc->text().toInt();

           ui->tableView_6->setModel(c1.afficher11(c1.getcin_employe()));
}

void MainWindow::on_load_2_clicked()
{
    QMediaPlayer * music=new QMediaPlayer();
        music->setMedia(QUrl("qrc:/sounds/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
        music->play();
    QSqlQueryModel * modal=new QSqlQueryModel();
    QSqlQuery *query=new QSqlQuery();
    query->prepare("Select email from EMPLOYE");
    query->exec();
    modal->setQuery(*query);
    ui->rcpt->setModel(modal);
}

void MainWindow::on_pushButton_4_clicked()
{
    QString str;

           str.append("<html><head></head><body><center><h1>"+QString("Attestation de travail")+"</h1></center>");
           str.append("<p><font size='+3'>") ;



           QString val=ui->cin1->text();

           QSqlQuery* query=new QSqlQuery();
           query->exec("select * from EMPLOYE where CIN='"+val+"'");

           while(query->next())
           {
           str.append("  <b>"+QString("Je soussignée Mme:Braiki Farah")+"</b>"+ QString(",atteste par la présente que Mr/Mme ")+" ");
           str.append(query->value(1).toString()) ;
           str.append(""+QString("né le ")+" ") ;
           str.append(query->value(3).toString());
           str.append(""+QString("Titulaire de la CIN N° ")+"<br> ") ;
           str.append(query->value(0).toString());
           str.append(""+QString("délivrée le ")+" ") ;
           str.append(query->value(10).toString());
           str.append(""+QString("est salarié au sein de notre Micro entreprise de Patisserie Dream Pastry comme Patissier(ère) spécialisée en ")+" ") ;
           str.append(query->value(11).toString());
           str.append("</p></font>") ;
           str.append("<hr>") ;
           str.append("<br>") ;
           str.append("<img src=':/img/img/signature.jpg' width='200' height='200'>");
           str.append("<center><img src=':/img/img/fff.png' width='500' height='400'></center>");




           }
        str.append("</body></html>") ;

        QPrinter printer ;
        printer.setOrientation(QPrinter::Portrait);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setPaperSize(QPrinter::A4) ;

        QString path=QFileDialog::getSaveFileName(NULL,"Convertir en PDF","..","PDF(*.pdf)");

        if (path.isEmpty()) return ;
        printer.setOutputFileName(path) ;

        QTextDocument doc;
        doc.setHtml(str) ;
        doc.print(&printer);
}

void MainWindow::on_pushButton_2_clicked()
{  QMediaPlayer * music=new QMediaPlayer();
    music->setMedia(QUrl("qrc:/sounds/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
    music->play();
   stati s;
   s.exec();
}

void MainWindow::on_anim_clicked()
{
    ui->anim->setVisible(false);
}
