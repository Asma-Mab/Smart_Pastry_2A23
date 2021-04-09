#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QtDebug>
#include <QVariant>
#include <QIntValidator>
#include<QMediaPlayer>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_2->setValidator( new QIntValidator(0, 9999, this));
    ui->lineEdit_10->setValidator( new QIntValidator(10000000, 99999999, this));
    ui->lineEdit_5->setValidator( new QIntValidator(0, 9999, this));
    ui->lineEdit_6->setValidator( new QIntValidator(0, 9999, this));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void   MainWindow::sendMail()
{
    Smtp* smtp = new Smtp("khaliltrabelsi304@gmail.com", "foufou20", "smtp.gmail.com", 465);



    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));
        smtp->sendMail("khaliltrabelsi304@gmail.com","khalil.trabelsi@esprit","demande de stock" ,"jib stock ijb");
        annimation=new QPropertyAnimation(ui->annim,"geometry");
           ui->annim->setText("Email sent!");
            annimation->setDuration(6000);
            annimation->setStartValue(ui->annim->geometry());
            annimation->setEndValue(QRect(300,400,300,20));
            annimation->start();
}

void MainWindow::on_pushButton_clicked()
{ QMediaPlayer * bulletsound = new QMediaPlayer();
    bulletsound->setMedia(QUrl::fromLocalFile("c:/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
    if (bulletsound->state() == QMediaPlayer::PlayingState){
        bulletsound->setPosition(0);
    }
    else if (bulletsound->state() == QMediaPlayer::StoppedState){
        bulletsound->play();
    }








    stock t;
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
            }
            if (t.getQUANTITE() < 50)
            {
           qDebug()<<"blabal";
           Smtp* smtp = new Smtp("khaliltrabelsi304@gmail.com", "foufou20", "smtp.gmail.com", 465);

                 smtp->sendMail("khaliltrabelsi304@gmail.com", "khalil.trabelsi@esprit.tn" , "STOCK LIMITE","vous n'avez plus de stock c'est moin de 50 produits");
                  QMessageBox::information(this,"message envoyee", "stock en déficite verifier votre mail");/// fonctionne
            }*/
}

void MainWindow::on_pushButton_2_clicked()
{QMediaPlayer * bulletsound = new QMediaPlayer();
    bulletsound->setMedia(QUrl::fromLocalFile("c:/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
    if (bulletsound->state() == QMediaPlayer::PlayingState){
        bulletsound->setPosition(0);
    }
    else if (bulletsound->state() == QMediaPlayer::StoppedState){
        bulletsound->play();
    }

    stock a;
    ui->tableView->setModel(a.afficher());
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{QMediaPlayer * bulletsound = new QMediaPlayer();
    bulletsound->setMedia(QUrl::fromLocalFile("c:/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
    if (bulletsound->state() == QMediaPlayer::PlayingState){
        bulletsound->setPosition(0);
    }
    else if (bulletsound->state() == QMediaPlayer::StoppedState){
        bulletsound->play();
    }

    QString val=ui->tableView->model()->data(index).toString();
        QSqlQuery qry;
        qry.prepare("select * from STOCK where REFERENCE='"+val+"'  or NOM_MP='"+val+"'" );
        if(qry.exec())
          {while (qry.next())
         { ui->reference->setText(qry.value(0).toString());
           ui->idf->setText(qry.value(1).toString());
           ui->nomp->setText(qry.value(2).toString());
           ui->date->setDate(qry.value(4).toDate());


           ui->quantiter->setText(qry.value(3).toString());
           ui->prix->setText(qry.value(5).toString());


         }
      }
}

void MainWindow::on_pushButton_3_clicked()
{QMediaPlayer * bulletsound = new QMediaPlayer();
    bulletsound->setMedia(QUrl::fromLocalFile("c:/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
    if (bulletsound->state() == QMediaPlayer::PlayingState){
        bulletsound->setPosition(0);
    }
    else if (bulletsound->state() == QMediaPlayer::StoppedState){
        bulletsound->play();
    }

    stock t;
            t.setREFERENCE(ui->reference->text());
            t.setID_FOURNISSEUR(ui->idf->text().toInt());
            t.setNOM_MP(ui->nomp->text());
            t.setDATE_ACHAT(ui->date->text());
            t.setQUANTITE(ui->quantiter->text().toInt());

            t.setPRIX(ui->prix->text().toInt());
            t.modifier(t);
            ui->tableView->setModel(t.afficher());
            if (t.getQUANTITE() < 50)
            {
          // qDebug()<<"blabal";
           Smtp* smtp = new Smtp("khaliltrabelsi304@gmail.com", "foufou20", "smtp.gmail.com", 465);

                 smtp->sendMail("khaliltrabelsi304@gmail.com", "khalil.trabelsi@esprit.tn" , "STOCK LIMITE","vous n'avez plus de stock c'est moin de 50 produits");
                  QMessageBox::information(this,"message envoyee", "stock en déficite verifier votre mail");/// fonctionne     

            annimation=new QPropertyAnimation(ui->annim,"geometry");
               ui->annim->setText("Email sent!");
                annimation->setDuration(6000);
                annimation->setStartValue(ui->annim->geometry());
                annimation->setEndValue(QRect(300,400,300,20));
                annimation->start();}
}

void MainWindow::on_pushButton_4_clicked()
{QMediaPlayer * bulletsound = new QMediaPlayer();
    bulletsound->setMedia(QUrl::fromLocalFile("c:/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
    if (bulletsound->state() == QMediaPlayer::PlayingState){
        bulletsound->setPosition(0);
    }
    else if (bulletsound->state() == QMediaPlayer::StoppedState){
        bulletsound->play();
    }

    stock t;
    t.supprimer(ui->reference->text());
     ui->tableView->setModel(t.afficher());
}

void MainWindow::on_pb_ajouter_clicked()
{QMediaPlayer * bulletsound = new QMediaPlayer();
    bulletsound->setMedia(QUrl::fromLocalFile("c:/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
    if (bulletsound->state() == QMediaPlayer::PlayingState){
        bulletsound->setPosition(0);
    }
    else if (bulletsound->state() == QMediaPlayer::StoppedState){
        bulletsound->play();
    }

    fournisseur t;
    t.setNOM(ui->lineEdit_4->text());
    t.setPRENOM(ui->lineEdit_7->text());
    t.setEMAIL(ui->lineEdit_8->text());
    t.setTELEPHONE(ui->lineEdit_10->text().toInt());
    t.setSPECIALITE(ui->lineEdit_9->text());


            t.ajouter();
            ui->tableView_2->setModel(t.afficher());
}

void MainWindow::on_pb_afficher_clicked()
{QMediaPlayer * bulletsound = new QMediaPlayer();
    bulletsound->setMedia(QUrl::fromLocalFile("c:/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
    if (bulletsound->state() == QMediaPlayer::PlayingState){
        bulletsound->setPosition(0);
    }
    else if (bulletsound->state() == QMediaPlayer::StoppedState){
        bulletsound->play();
    }

    fournisseur a;
    ui->tableView_2->setModel(a.afficher());
}

void MainWindow::on_pb_modifier_clicked()
{QMediaPlayer * bulletsound = new QMediaPlayer();
    bulletsound->setMedia(QUrl::fromLocalFile("c:/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
    if (bulletsound->state() == QMediaPlayer::PlayingState){
        bulletsound->setPosition(0);
    }
    else if (bulletsound->state() == QMediaPlayer::StoppedState){
        bulletsound->play();
    }

    fournisseur t;
            t.setNOM(ui->nom->text());
            t.setPRENOM(ui->prenom->text());
            t.setTELEPHONE(ui->tele->text().toInt());
            t.setEMAIL(ui->email->text());
            t.setSPECIALITE(ui->special->text());
            t.setID_FOURNISSEUR(ui->id->text().toInt());
            t.modifier(t);
            ui->tableView_2->setModel(t.afficher());
}

void MainWindow::on_tableView_2_activated(const QModelIndex &index)
{QMediaPlayer * bulletsound = new QMediaPlayer();
    bulletsound->setMedia(QUrl::fromLocalFile("c:/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
    if (bulletsound->state() == QMediaPlayer::PlayingState){
        bulletsound->setPosition(0);
    }
    else if (bulletsound->state() == QMediaPlayer::StoppedState){
        bulletsound->play();
    }

    QString val=ui->tableView_2->model()->data(index).toString();
        QSqlQuery qry;
        qry.prepare("select * from FOURNISSEUR where ID_FOURNISSEUR='"+val+"' or NOM='"+val+"' or PRENOM='"+val+"' or TELEPHONE='"+val+"' or EMAIL='"+val+"' or SPECIALITE='"+val+"'" );
        if(qry.exec())
          {while (qry.next())

         { ui->id->setText(qry.value(0).toString());
           ui->nom->setText(qry.value(1).toString());
           ui->prenom->setText(qry.value(2).toString());
           ui->email->setText(qry.value(3).toString());
           ui->tele->setText(qry.value(4).toString());
           ui->special->setText(qry.value(5).toString());

         }
      }
}

void MainWindow::on_pb_suprimer_clicked()
{QMediaPlayer * bulletsound = new QMediaPlayer();
    bulletsound->setMedia(QUrl::fromLocalFile("c:/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
    if (bulletsound->state() == QMediaPlayer::PlayingState){
        bulletsound->setPosition(0);
    }
    else if (bulletsound->state() == QMediaPlayer::StoppedState){
        bulletsound->play();
    }

    fournisseur t;
    t.supprimer(ui->id->text().toInt());
     ui->tableView_2->setModel(t.afficher());
}



void MainWindow::on_pb_tri_clicked()
{
    QMediaPlayer * bulletsound = new QMediaPlayer();
        bulletsound->setMedia(QUrl::fromLocalFile("c:/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
        if (bulletsound->state() == QMediaPlayer::PlayingState){
            bulletsound->setPosition(0);
        }
        else if (bulletsound->state() == QMediaPlayer::StoppedState){
            bulletsound->play();
        }

        stock p;

         QTableView* table=ui->tableView;

        p.trie(table);

    }


void MainWindow::on_tri_prd_clicked()
{QMediaPlayer * bulletsound = new QMediaPlayer();
    bulletsound->setMedia(QUrl::fromLocalFile("c:/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
    if (bulletsound->state() == QMediaPlayer::PlayingState){
        bulletsound->setPosition(0);
    }
    else if (bulletsound->state() == QMediaPlayer::StoppedState){
        bulletsound->play();
    }

    stock p;

     QTableView* table=ui->tableView;

    p.trie2(table);
}

void MainWindow::on_tri_d_clicked()
{QMediaPlayer * bulletsound = new QMediaPlayer();
    bulletsound->setMedia(QUrl::fromLocalFile("c:/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
    if (bulletsound->state() == QMediaPlayer::PlayingState){
        bulletsound->setPosition(0);
    }
    else if (bulletsound->state() == QMediaPlayer::StoppedState){
        bulletsound->play();
    }

    stock p;

     QTableView* table=ui->tableView;

    p.trie1(table);
}

void MainWindow::on_pushButton_5_clicked()
{ QMediaPlayer * bulletsound = new QMediaPlayer();
    bulletsound->setMedia(QUrl::fromLocalFile("c:/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
    if (bulletsound->state() == QMediaPlayer::PlayingState){
        bulletsound->setPosition(0);
    }
    else if (bulletsound->state() == QMediaPlayer::StoppedState){
        bulletsound->play();
    }

    stati s;
    s.exec();
}
