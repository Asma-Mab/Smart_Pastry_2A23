#ifndef ACCUEIL_H
#define ACCUEIL_H
#include "equipement.h"
#include "reparateur.h"
#include "reparation.h"
#include <QMainWindow>
#include <QPrinter>
#include "stati.h"
#include "smtp.h"
#include <QPropertyAnimation>
QT_BEGIN_NAMESPACE
namespace Ui { class accueil; }
QT_END_NAMESPACE

class accueil : public QMainWindow
{
    Q_OBJECT

public:
    accueil(QWidget *parent = nullptr);
    ~accueil();

private slots:
    void on_button_profil_clicked();

    void on_button_employe_clicked();

    void on_button_equipement_clicked();

    void on_pushButton_clicked();

    void on_button_client_clicked();

    void on_button_produit_clicked();

    void on_button_fournisseurs_clicked();

    void on_button_evenement_clicked();

    void on_button_recette_clicked();

    void on_button_quitter_clicked();

    void on_toolBox_3_currentChanged(int index);

    void on_toolBox_4_currentChanged(int index);

    void on_modifier_eq_clicked();

    void on_supprimer_eq_clicked();

    void on_modifier_valide_m_clicked();

    void on_tabWidget_2_currentChanged(int index);

    void on_ajouter_eq_clicked();

    void on_ajouter_rep_clicked();

    void on_toolBox_3_2_currentChanged(int index);

    void on_toolBox_4_2_currentChanged(int index);

    void on_tabWidget_3_currentChanged(int index);

    void on_modifier_valide_m_2_clicked();

    void on_modifier_eq_2_clicked();

    void on_supprimer_eq_2_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_ajouter_rep_2_clicked();

    void on_toolBox_3_3_currentChanged(int index);

    void on_toolBox_4_3_currentChanged(int index);

    void on_modifier_eq_3_clicked();

    void on_supprimer_eq_3_clicked();

    void on_modifier_valide_m_3_clicked();

    void on_tabWidget_4_currentChanged(int index);

    void on_ajouter_rep_4_clicked();

    void on_ajouter_rep_5_clicked();

    void on_ajouter_rep_6_clicked();

    void on_modifier_valide_m_4_clicked();
    void sendMail();

        void mailSent(QString);


        void on_mailing_clicked();

        void on_mail_reparation_clicked();

        void on_ajouter_rep_7_clicked();

        void on_pdf_reparation_clicked();

        void on_ajouter_rep_8_clicked();

        void on_mailing_2_clicked();

private:
    Ui::accueil *ui;
    int a;
     QPropertyAnimation *animation;
     QPropertyAnimation *animation1;


};
#endif // ACCUEIL_H
