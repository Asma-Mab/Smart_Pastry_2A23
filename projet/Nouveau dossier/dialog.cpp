#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    Connection c;
    bool test=c.createconnect();
    ui->button_profil->setFocus();
    ui->stackedWidget->setCurrentIndex(0);
    ui->tabWidget_10->setCurrentIndex(0);




}

void Dialog::on_button_profil_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget_2->setCurrentIndex(0);
    ui->button_client->setEnabled(1);
}

void Dialog::on_button_employe_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->stackedWidget_2->setCurrentIndex(1);
}

void Dialog::on_button_client_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->stackedWidget_2->setCurrentIndex(2);
}

void Dialog::on_button_produit_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    ui->stackedWidget_2->setCurrentIndex(3);
}

void Dialog::on_button_equipement_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->stackedWidget_2->setCurrentIndex(4);


}

void Dialog::on_button_fournisseurs_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
    ui->stackedWidget_2->setCurrentIndex(5);
}

void Dialog::on_button_evenement_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    ui->stackedWidget_2->setCurrentIndex(6);

}



void Dialog::on_pushButton_clicked()
{
}







void Dialog::on_button_recette_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
    ui->stackedWidget_2->setCurrentIndex(7);
}

void Dialog::on_button_quitter_clicked()
{
    close();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_ajouter_conge_employe_clicked()
{
    conge c;
  QMediaPlayer * music=new QMediaPlayer();
  music->setMedia(QUrl("qrc:/sounds/sound/zapsplat_multimedia_button_click_005_53866.mp3"));
  music->play();

         // t.setId_Employee(ui->lineEdit->text().toInt());
          c.setcin_employe(ui->lineEditc->text().toInt());
          QString date_depart=ui->datedepart_2->date().toString("dd.MM.yyyy");
          QString date_retour=ui->dateretour_2->date().toString("dd.MM.yyyy");
          c.setdate_depart(date_depart);
          c.setdate_retour(date_retour);
       c.setnature(ui->nature_3->currentText());
          c.ajouter11();
          ui->tableView_conge_2->setModel(c.afficher11(c.getcin_employe()));

}

void Dialog::on_tabWidget_10_currentChanged(int index)
{  conge c;
    ui->tableView_conge_2->setModel(c.afficher11(c.getcin_employe()));
}
