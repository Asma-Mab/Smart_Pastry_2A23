#include "accueil.h"
#include "ui_accueil.h"
#include "reparateur.h"
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
     ui->valstack->setCurrentIndex(0);
     ui->valstack_2->setCurrentIndex(0);
     ui->valstack_3->setCurrentIndex(0);
    a=0;
   ui->toolBox_4->setCurrentIndex(1);
   ui->toolBox_3->setCurrentIndex(1);
   ui->stackedWidget_7->setCurrentIndex(0);
   ui->stackedWidget_10->setCurrentIndex(0);
   ui->stackedWidget_9->setCurrentIndex(0);

   ui->toolBox_4_2->setCurrentIndex(1);
   ui->toolBox_3_2->setCurrentIndex(1);
   ui->stackedWidget_7_2->setCurrentIndex(0);
   ui->stackedWidget_10_2->setCurrentIndex(0);
   ui->stackedWidget_9_2->setCurrentIndex(0);

   ui->toolBox_3_3->setCurrentIndex(1);
   ui->toolBox_4_3->setCurrentIndex(1);
   ui->stackedWidget_7_3->setCurrentIndex(0);
   ui->stackedWidget_10_3->setCurrentIndex(0);
   ui->stackedWidget_9_3->setCurrentIndex(0);
   a=1;

   ui->tabWidget->setCurrentIndex(0);
           ui->tabWidget_2->setCurrentIndex(0);
           ui->tabWidget_3->setCurrentIndex(0);
           ui->tabWidget_4->setCurrentIndex(0);
           ui->mail_rep->setCurrentIndex(0);
}

accueil::~accueil()
{
    delete ui;
}

//µµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµ
bool accueil::verif_modif(QString nom,QString nom1,int id)
{
    bool test = false;
    QString stringId = QString::number(id);

    QSqlQuery query;
    QString ms = "select * from "+nom+" where "+nom1+" = "+stringId;
    query.prepare(ms);
    query.addBindValue(nom);
    query.addBindValue(nom1);
    query.addBindValue(stringId);
    query.exec();
     if (query.first()==NULL)
     {
         QMessageBox::information(nullptr, QObject::tr("erreur"),
                     QObject::tr("ID non trouvé.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

     }
     else
     {
         test=true;
     }
     return test;

}
//µµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµµ



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

  equipement r;
  accueil a;
   bool test = a.verif_modif("EQUIPEMENT","ID_EQUIPEMENT",ui->IDE_mo->text().toInt());
   if (test==true)
   {
    r = r.rehcerche(ui->IDE_mo->text().toInt());
    ui->stackedWidget_7->setCurrentIndex(1);
    ui->nom_m_2->setText(r.getNom());
   // QString stringPrix = QString::number(r.getPrix());
    ui->prix_m_2->setText(r.getPrix());
    ui->marque_m_2->setText(r.getMarque());
    ui->caracteristique_m_2->setText(r.getCaracteristique());  
    ui->etat_m_2->setCurrentText(r.getEtat());}


}

void accueil::on_supprimer_eq_clicked()
{
    equipement s;
    accueil b;
     bool test = b.verif_modif("EQUIPEMENT","ID_EQUIPEMENT",ui->IDEs->text().toInt());
     if (test==true)
     {
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
    a=1;}
}

void accueil::on_modifier_valide_m_clicked()
{
     equipement m;
       ui->stackedWidget_7->setCurrentIndex(0);
       m.setNom(ui->nom_m_2->text());
       m.setEtat(ui->etat_m_2->currentText());
       m.setPrix(ui->prix_m_2->text());
       m.setMarque(ui->marque_m_2->text());
       m.setDate_achat("");
       m.setId_equipement(ui->IDE_mo->text().toInt());
       m.setCaracteristique(ui->caracteristique_m_2->text());
       m.modifier(m);
       ui->tableView->setModel(m.afficher());

       //***********************************************
       ui->comboBox_eq->clear();
       ui->comboBox_rep->clear();
       QString id = "id:";
       QString nom = "         nom:";
        QString marque = "         marque:";
       QSqlQuery qry;
       qry.prepare("select ID_EQUIPEMENT,NOM,MARQUE from EQUIPEMENT ");
       if(qry.exec())
         {while (qry.next())
        {  QString a ;
               a= id + qry.value(0).toString() + nom + qry.value(1).toString() + marque + qry.value(2).toString();

               ui->comboBox_eq->addItem(a);}}


       //***********************************************
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
        t.setPrix(ui->prix_eqa->text());
        t.setDate_achat(ui->date_eqa->text());
        t.setCaracteristique(ui->caracteristique_eqa->toPlainText());

        t.setMarque(ui->marque_eqa->text());
        t.setEtat(ui->etat_eqa->currentText());
        bool ok;
        ok=t.ajouter();
        if (ok == true)
        {
        ui->valstack_3->setCurrentIndex(1);
        }
    ui->tableView->setModel(t.afficher());
    //***********************************************
    ui->comboBox_eq->clear();
    ui->comboBox_rep->clear();
    QString id = "id:";
    QString nom = "         nom:";
     QString marque = "         marque:";
    QSqlQuery qry;
    qry.prepare("select ID_EQUIPEMENT,NOM,MARQUE from EQUIPEMENT ");
    if(qry.exec())
      {while (qry.next())
     {  QString a ;
            a= id + qry.value(0).toString() + nom + qry.value(1).toString() + marque + qry.value(2).toString();

            ui->comboBox_eq->addItem(a);}}


    //***********************************************
}

void accueil::on_ajouter_rep_clicked()
{
   reparateur t;

    t.setNom(ui->nom_rep->text());
    t.setPrenom(ui->prenom_rep->text());
    t.setTelephone(ui->tel_rep->text());
    t.setEmail(ui->email_rep->text());

    t.setSociete(ui->societe_rep->text());
    t.setSpecialite(ui->specialite_rep->text());
    bool ok;
    ok= t.ajouter();
    if (ok == true)
    {
    ui->valstack_2->setCurrentIndex(1);
    }
ui->tableView_2->setModel(t.afficher());

//******************************************
ui->comboBox_eq->clear();
ui->comboBox_rep->clear();
QString id1 = "id:";
QString nom1 = "    nom et prénom:";
 QString societe = "    société:";
  QString specialite = "    spécialité:";
QSqlQuery qry1;
qry1.prepare("select ID_REPARATEUR,NOM,PRENOM,SOCIETE,SPECIALITE from REPARATEUR ");
if(qry1.exec())
  {while (qry1.next())
 {  QString b ;
        b= id1 + qry1.value(0).toString() + nom1 + qry1.value(1).toString()+" "+ qry1.value(2).toString() + societe + qry1.value(3).toString()+ specialite + qry1.value(4).toString();

        ui->comboBox_rep->addItem(b);}}
//*******************************************



}

void accueil::on_toolBox_3_2_currentChanged(int index)
{
    int b=index;
        b=1;

        if (a==1)
         {ui->stackedWidget_9_2->setCurrentIndex(1);
          ui->stackedWidget_10_2->setCurrentIndex(1);
          ui->stackedWidget_10_2->hide();}
}

void accueil::on_toolBox_4_2_currentChanged(int index)
{
    int b=index;
        b=1;
        if (a==1)
         {ui->stackedWidget_9_2->setCurrentIndex(1);
          ui->stackedWidget_10_2->setCurrentIndex(1);
          ui->stackedWidget_10_2->hide();}
}

void accueil::on_tabWidget_3_currentChanged(int index)
{
    reparateur m;
       ui->tableView_2->setModel(m.afficher());
}

void accueil::on_modifier_valide_m_2_clicked()
{
    reparateur m;
      ui->stackedWidget_7_2->setCurrentIndex(0);
      m.setNom(ui->nom_m_rep->text());
      m.setPrenom(ui->prenom_m_rep->text());
      m.setTelephone(ui->telephone_m_rep->text());
      m.setEmail(ui->email_m_rep->text());
      m.setId_reparateur(ui->IDE_mo_2->text().toInt());
      m.setSociete(ui->societe_m_rep->text());
       m.setSpecialite(ui->specialite_m_rep->text());
      m.modifier(m);
      ui->tableView_2->setModel(m.afficher());

      //******************************************
      ui->comboBox_eq->clear();
      ui->comboBox_rep->clear();
      QString id1 = "id:";
      QString nom1 = "    nom et prénom:";
       QString societe = "    société:";
        QString specialite = "    spécialité:";
      QSqlQuery qry1;
      qry1.prepare("select ID_REPARATEUR,NOM,PRENOM,SOCIETE,SPECIALITE from REPARATEUR ");
      if(qry1.exec())
        {while (qry1.next())
       {  QString b ;
              b= id1 + qry1.value(0).toString() + nom1 + qry1.value(1).toString()+" "+ qry1.value(2).toString() + societe + qry1.value(3).toString()+ specialite + qry1.value(4).toString();

              ui->comboBox_rep->addItem(b);}}
      //*******************************************
}

void accueil::on_modifier_eq_2_clicked()
{

  reparateur r;
  accueil a;
   bool test = a.verif_modif("REPARATEUR","ID_REPARATEUR",ui->IDE_mo_2->text().toInt());
   if (test==true)
   {
  ui->stackedWidget_7_2->setCurrentIndex(1);
    r = r.rehcerche(ui->IDE_mo_2->text().toInt());
    ui->nom_m_rep->setText(r.getNom());
    ui->prenom_m_rep->setText(r.getPrenom());
   // QString stringTel = QString::number(r.getTelephone());
    ui->telephone_m_rep->setText(r.getTelephone());
    ui->societe_m_rep->setText(r.getSociete());
    ui->specialite_m_rep->setText(r.getSpecialite());
    ui->email_m_rep->setText(r.getEmail());
}
}

void accueil::on_supprimer_eq_2_clicked()
{
    reparateur s;
    accueil b;
     bool test = b.verif_modif("REPARATEUR","ID_REPARATEUR",ui->IDEs_2->text().toInt());
     if (test==true)
     {
    s.supprimer(ui->IDEs_2->text().toInt());
    ui->tableView_2->setModel(s.afficher());
    a=0;
    ui->IDEs_2->setText("");
    ui->toolBox_3_2->setCurrentIndex(1);
    ui->toolBox_4_2->setCurrentIndex(1);
    ui->stackedWidget_7_2->setCurrentIndex(0);
    ui->stackedWidget_9_2->setCurrentIndex(0);
    ui->stackedWidget_10_2->setCurrentIndex(0);
    ui->stackedWidget_10_2->show();
    a=1;}
}

void accueil::on_tabWidget_currentChanged(int index)
{
    ui->comboBox_eq->clear();
    ui->comboBox_rep->clear();
    QString id = "id:";
    QString nom = "         nom:";
     QString marque = "         marque:";
    QSqlQuery qry;
    qry.prepare("select ID_EQUIPEMENT,NOM,MARQUE from EQUIPEMENT ");
    if(qry.exec())
      {while (qry.next())
     {  QString a ;
            a= id + qry.value(0).toString() + nom + qry.value(1).toString() + marque + qry.value(2).toString();

            ui->comboBox_eq->addItem(a);}}

    QString id1 = "id:";
    QString nom1 = "    nom et prénom:";
     QString societe = "    société:";
      QString specialite = "    spécialité:";
    QSqlQuery qry1;
    qry1.prepare("select ID_REPARATEUR,NOM,PRENOM,SOCIETE,SPECIALITE from REPARATEUR ");
    if(qry1.exec())
      {while (qry1.next())
     {  QString b ;
            b= id1 + qry1.value(0).toString() + nom1 + qry1.value(1).toString()+" "+ qry1.value(2).toString() + societe + qry1.value(3).toString()+ specialite + qry1.value(4).toString();

            ui->comboBox_rep->addItem(b);}}


}

void accueil::on_ajouter_rep_2_clicked()
{
    reparation t;

    QString a=ui->comboBox_eq->currentText();
    QString a1=ui->comboBox_rep->currentText();
    QString idString;
    QString idString1;

    idString =a[3];
    idString1 =a1[3];
    if (a[4]!=" ")
    { idString +=  a[4];}
     else
    {idString =a[3]; }
    if (a1[4]!=" ")
    { idString1 +=  a1[4];}
     else
    {idString1 =a1[3]; }
    bool ok;
    int id_e = idString.toInt(&ok,10);
    int id_r = idString1.toInt(&ok,10);
     t.setNom(t.recupererNom(id_e));
   t.setId_equipement(id_e);
     t.setId_reparateur(id_r);
     t.setPrix(ui->prix_reparation->text());
     t.setDateLivraison(ui->dateL_reparation->text());
     t.setDateReception(ui->dateR_reparation->text());
     ok=t.ajouter();

     if (ok == true)
     {
     ui->valstack->setCurrentIndex(1);
     }
 ui->tableView_3->setModel(t.afficher());
}

void accueil::on_toolBox_3_3_currentChanged(int index)
{
    int b=index;
        b=1;

        if (a==1)
         {ui->stackedWidget_9_3->setCurrentIndex(1);
          ui->stackedWidget_10_3->setCurrentIndex(1);
          ui->stackedWidget_10_3->hide();}
}

void accueil::on_toolBox_4_3_currentChanged(int index)
{
    int b=index;
        b=1;
        if (a==1)
         {ui->stackedWidget_9_3->setCurrentIndex(1);
          ui->stackedWidget_10_3->setCurrentIndex(1);
          ui->stackedWidget_10_3->hide();}
}

void accueil::on_modifier_eq_3_clicked()
{

  reparation r;
  accueil a;
  bool test = a.verif_modif("REPARATION","ID_REPARATION",ui->IDE_mo_3->text().toInt());
  if (test==true)
  {
  ui->stackedWidget_7_3->setCurrentIndex(1);
    r = r.rehcerche(ui->IDE_mo_3->text().toInt());
    ui->nom_reparation_m->setText(r.getNom());
    ui->prix_reparation_m->setText(r.getPrix());
    ui->dateL_m->setText(r.getDateLivraison());
    ui->dateR_m->setText(r.getDateReception());
}
}

void accueil::on_supprimer_eq_3_clicked()
{
    reparation s;
    accueil b;
     bool test = b.verif_modif("REPARATION","ID_REPARATION",ui->IDEs_3->text().toInt());
     if (test==true)
     {
    s.supprimer(ui->IDEs_3->text().toInt());
    ui->tableView_3->setModel(s.afficher());
    a=0;
    ui->IDEs_2->setText("");
    ui->toolBox_3_3->setCurrentIndex(1);
    ui->toolBox_4_3->setCurrentIndex(1);
    ui->stackedWidget_7_3->setCurrentIndex(0);
    ui->stackedWidget_9_3->setCurrentIndex(0);
    ui->stackedWidget_10_3->setCurrentIndex(0);
    ui->stackedWidget_10_3->show();
    a=1;}
}

void accueil::on_modifier_valide_m_3_clicked()
{
    reparation m;
      ui->stackedWidget_7_3->setCurrentIndex(0);
      m.setNom(ui->nom_reparation_m->text());
      m.setPrix(ui->prix_reparation_m->text());
      m.setDateLivraison(ui->dateL_m->text());
      m.setDateReception(ui->dateR_m->text());
      m.setId_reparation(ui->IDE_mo_3->text().toInt());

      m.modifier(m);
      ui->tableView_3->setModel(m.afficher());
}

void accueil::on_tabWidget_4_currentChanged(int index)
{  reparation m;
   ui->tableView_3->setModel(m.afficher());
}

void accueil::on_ajouter_rep_4_clicked()
{
    ui->valstack->setCurrentIndex(0);
}

void accueil::on_ajouter_rep_5_clicked()
{
    ui->valstack_2->setCurrentIndex(0);
}

void accueil::on_ajouter_rep_6_clicked()
{
    ui->valstack_3->setCurrentIndex(0);
}

void accueil::on_modifier_valide_m_4_clicked()
{
    stati s;
            s.exec();
}



void   accueil::sendMail()
{


    animation1 = new QPropertyAnimation(ui->mailing,"geometry");
    ui->mailing->setText("envoie") ;
    animation1->setDuration(1000);
    animation1->setStartValue(ui->mailing->geometry());
  //  animation->setEndValue(QRect(200,200,100,50));
    animation1->start();




    reparation r;
    reparateur t;
   QDate d= d.currentDate();
   int jj= d.day();
   int mm =d.month();
   int yy = d.year();
 qDebug()<<jj<<" "<<mm<<" "<<yy;
    r=r.rehcerche(ui->mail->text().toInt());
   t = t.rehcerche(r.getId_reparateur());
  QString msg="Bonjour "+t.getPrenom()+", Je viens par le présent email vous informer qu'il vous reste ";
  QSqlQuery query ;
 bool ok;


   QString nbjr= r.getDateReception();
   QChar nbjr1= nbjr[0];
    QChar nbjr2= nbjr[1];
         QString  nbjrr= nbjr1 ;
   nbjrr+= nbjr2;



   int nbr = nbjrr.toInt(&ok,10);




   QChar nbmr1= nbjr[3];
    QChar nbmr2= nbjr[4];
     QString nbm =nbmr1  ;
   nbm += nbmr2;



   int nbrm = nbm.toInt(&ok,10);
    qDebug()<<nbm;




   QChar nbyr1= nbjr[6];
    QChar nbyr2= nbjr[7];
    QChar nbyr3= nbjr[8];
     QChar nbyr4= nbjr[9];
     QString nbyr =nbyr1  ;
   nbyr += nbyr2;
   nbyr += nbyr3;
   nbyr += nbyr4;



   int nbry = nbyr.toInt(&ok,10);
   int ja = r.mois(nbrm,nbry);
   if (jj>nbr)
   {
     nbr+=ja;
     nbrm-=1;
   }
   if (mm>nbrm)
   {
     nbrm+=12;
     nbry-=1;
   }

  nbr -=jj;
  nbrm -=mm;
   nbry -=yy;





   QString j = QString::number(nbr);
   QString m = QString::number(nbrm);
    QString y = QString::number(nbry);

    if (nbr>0)
    { msg+=j;
       if (nbr==1)
       {
           msg+=" jour";
       }
       else if (nbr>1)
       {
           msg+=" jours";
       }
    }

    if (nbrm>0)
    {


        if (nbry==0)
         {
            msg+= " et ";
        }
        else
        {
            if (nbr>0)
            msg+=", ";
        }

        msg+=m;
        msg+=" mois";

    }

    if (nbry>0)
    {  if ((nbr>0)||(nbrm>0))
          msg+="et ";

        msg+=y;
        msg+=" ans";

    }





   msg+=" avant la date de réception de la machine "+ r.getNom()+".\n informez nous par un email si vous voulez reporter cette date \nCordialement";
   Smtp* smtp = new Smtp("dreamPastryMail@gmail.com","esprit20", "smtp.gmail.com");
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));


        smtp->sendMail("dreamPastryMail@gmail.com", t.getEmail() , "réparation du machine",msg);
}
void   accueil::mailSent(QString status)
{

    if(status == "Message sent")
      {  QMessageBox::warning( nullptr, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
         ui->mailing->setText("envoyer");
    }


}







void accueil::on_mailing_clicked()
{
    sendMail();

}

void accueil::on_mail_reparation_clicked()
{
    ui->mail_rep->setCurrentIndex(1);
}

void accueil::on_ajouter_rep_7_clicked()
{
     ui->mail_rep->setCurrentIndex(0);
}

void accueil::on_pdf_reparation_clicked()
{
    ui->mail_rep->setCurrentIndex(2);
}

void accueil::on_ajouter_rep_8_clicked()
{
    ui->mail_rep->setCurrentIndex(0);
}

void accueil::on_mailing_2_clicked()
{
    QString str;
       int id = ui->mail_2->text().toInt();
       QString ids =    QString::number(id);
       reparation t;
       reparateur r;

       t= t.rehcerche(id);
       int id1= t.getId_reparateur();
       r=r.rehcerche(id1);
       QString nom=r.getNom();
       QString prenom=r.getPrenom();
        t.pdf(str,ids,nom,prenom,t);
}
