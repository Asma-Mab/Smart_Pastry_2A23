#include "accueil.h"
#include "ui_accueil.h"
#include<QMessageBox>
#include<QSqlQueryModel>
#include<QSqlQuery>
#include<QDebug>
#include <QPdfWriter>
#include <QPainter>
#include <QTextDocument>
#include<QFileDialog>

accueil::accueil(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::accueil)
{
    ui->setupUi(this);
    ui->button_profil->setFocus();
    ui->stackedWidget->setCurrentIndex(0);
}

accueil::~accueil()
{
    delete ui;
}


void accueil::on_button_profil_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget_2->setCurrentIndex(0);
    ui->button_client->setEnabled(1);
}

void accueil::on_button_employe_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->stackedWidget_2->setCurrentIndex(1);
}

void accueil::on_button_client_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->stackedWidget_2->setCurrentIndex(2);
}

void accueil::on_button_produit_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    ui->stackedWidget_2->setCurrentIndex(3);
}

void accueil::on_button_equipement_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->stackedWidget_2->setCurrentIndex(4);
}

void accueil::on_button_fournisseurs_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
    ui->stackedWidget_2->setCurrentIndex(5);
}

void accueil::on_button_evenement_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    ui->stackedWidget_2->setCurrentIndex(6);
}


void accueil::on_button_recette_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
    ui->stackedWidget_2->setCurrentIndex(7);
}

void accueil::on_button_quitter_clicked()
{
    close();
}

void accueil::on_aj_clicked()
{
    /* QSqlQuery qry;
     int id_equipement;
     QString nom;
     int prix;
     QString marque;
     QString caracteristique;
     QString date_achat_1 ;
     QString etat;
     id_equipement=ui->id_line->text().toInt();
     nom=ui->nom_line->text();
     date_achat_1 = ui->date_l->text();
     prix=ui->prix_l->text().toInt();
     marque=ui->marque_l->text();
     caracteristique=ui->caracteristique_l->text();
     etat=ui->etat_l->text();
     date_achat_1=ui->date_l->text();
    equipement c (id_equipement,nom,prix,marque,caracteristique,date_achat_1,etat);
    bool test=c.ajouterequipement();
 if (test)
     {
     QMessageBox::information(nullptr,QObject::tr("Ajouter un Bloc"),
                                      QObject::tr("Client ajouté .\n"
                                                  "Click Cancel to exit ."),QMessageBox::Cancel);
      }
 else
 {
     QMessageBox::critical(nullptr,QObject::tr("Ajouter un Bloc"),
                                      QObject::tr("Erreur.\n"
                                                  "Click Cancel to exit ."),QMessageBox::Cancel);
 }*/

}

void accueil::on_button_recette_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
    ui->stackedWidget_2->setCurrentIndex(8);
}
