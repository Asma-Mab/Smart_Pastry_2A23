#ifndef ACCUEIL_H
#define ACCUEIL_H
#include "equipement.h"
#include <QMainWindow>

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

    void on_aj_clicked();


    void on_button_recette_2_clicked();

    void on_tableWidget_cellClicked(int row, int column);

    void on_toolBox_3_currentChanged(int index);

    void on_toolBox_4_currentChanged(int index);

    void on_modifier_eq_clicked();

    void on_supprimer_eq_clicked();

    void on_modifier_valide_m_clicked();

    void on_tabWidget_2_currentChanged(int index);

    void on_ajouter_eq_clicked();

private:
    Ui::accueil *ui;
    int a;
};
#endif // ACCUEIL_H
