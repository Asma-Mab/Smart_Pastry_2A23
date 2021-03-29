#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "connexion.h"
#include <QMainWindow>
#include "reclamation.h"
#include <QTextTableFormat>
#include <QStandardItemModel>
#include <QDialog>
#include <QFileDialog>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots :
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    //void on_excelfiabilite_clicked();



    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();



    void on_pushButton_6_clicked();





    void on_tableView_2_activated(const QModelIndex &index);

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_afficher_reclam_clicked();

    void on_affichagereclam_activated(const QModelIndex &index);

    void on_traiter_clicked();

   // void on_pushButton_9_clicked();

    void on_pdf_clicked();

   // void on_pushButton_9_clicked();

    void on_affichageemployee_clicked();

    void on_listeemployee_activated(const QModelIndex &index);

    void on_voirevaluation_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
