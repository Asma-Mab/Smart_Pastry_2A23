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

    a=0;
   ui->toolBox_4->setCurrentIndex(1);
   ui->toolBox_3->setCurrentIndex(1);
   ui->stackedWidget_7->setCurrentIndex(0);
   ui->stackedWidget_10->setCurrentIndex(0);
   ui->stackedWidget_9->setCurrentIndex(0);
   a=1;
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



void accueil::on_pushButton_clicked()
{
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

}

void accueil::on_tableWidget_cellClicked(int row, int column)
{

}

void accueil::on_toolBox_3_currentChanged(int index)
{
    int b=index;
        b=1;

        if (a==1)
         {ui->stackedWidget_9->setCurrentIndex(1);
          ui->stackedWidget_10->setCurrentIndex(1);
          ui->stackedWidget_10->hide();}
}

void accueil::on_toolBox_4_currentChanged(int index)
{
    int b=index;
        b=1;
        if (a==1)
         {ui->stackedWidget_9->setCurrentIndex(1);
          ui->stackedWidget_10->setCurrentIndex(1);
          ui->stackedWidget_10->hide();}


}

void accueil::on_modifier_eq_clicked()
{
    ui->stackedWidget_7->setCurrentIndex(1);
  equipement r;
    r = r.rehcerche(ui->IDE_mo->text().toInt());
    ui->nom_m_2->setText(r.getNom());
    QString stringPrix = QString::number(r.getPrix());
    ui->prix_m_2->setText(stringPrix);
    ui->marque_m_2->setText(r.getMarque());
    ui->caracteristique_m_2->setText(r.getCaracteristique());  
    ui->etat_m_2->setCurrentText(r.getEtat());


}

void accueil::on_supprimer_eq_clicked()
{
    equipement s;
    s.supprimer(ui->IDEs->text().toInt());
    ui->tableView->setModel(s.afficher());
    a=0;
    ui->IDEs->setText("");
    ui->toolBox_3->setCurrentIndex(1);
    ui->toolBox_4->setCurrentIndex(1);
    ui->stackedWidget_7->setCurrentIndex(0);
    ui->stackedWidget_9->setCurrentIndex(0);
    ui->stackedWidget_10->setCurrentIndex(0);
    ui->stackedWidget_10->show();
    a=1;
}

void accueil::on_modifier_valide_m_clicked()
{
     equipement m;
       ui->stackedWidget_7->setCurrentIndex(0);
       m.setNom(ui->nom_m_2->text());
       m.setEtat(ui->etat_m_2->currentText());
       m.setPrix(ui->prix_m_2->text().toInt());
       m.setMarque(ui->marque_m_2->text());
       m.setDate_achat("");
       m.setId_equipement(ui->IDE_mo->text().toInt());
       m.setCaracteristique(ui->caracteristique_m_2->text());
       m.modifier(m);
       ui->tableView->setModel(m.afficher());
}

void accueil::on_tabWidget_2_currentChanged(int index)
{equipement m;
   ui->tableView->setModel(m.afficher());
}

void accueil::on_ajouter_eq_clicked()
{
    equipement t;

       // t.setId_equipement(ui->lineEdit->text().toInt());
        t.setNom(ui->nom_eqa->text());
        t.setPrix(ui->prix_eqa->text().toInt());
        t.setDate_achat(ui->date_eqa->text());
        t.setCaracteristique(ui->caracteristique_eqa->toPlainText());

        t.setMarque(ui->marque_eqa->text());
        t.setEtat(ui->etat_eqa->currentText());
        t.ajouter();
    ui->tableView->setModel(t.afficher());
}
