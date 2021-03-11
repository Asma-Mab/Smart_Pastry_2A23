#ifndef ACCUEIL_H
#define ACCUEIL_H

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

private:
    Ui::accueil *ui;
};
#endif // ACCUEIL_H
