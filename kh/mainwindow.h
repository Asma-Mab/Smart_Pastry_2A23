#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QDebug>
#include <QMainWindow>
#include "stock.h"
#include "fournisseur.h"
#include "smtp.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pb_ajouter_clicked();

    void on_pb_afficher_clicked();

    void on_pb_modifier_clicked();

    void on_tableView_2_activated(const QModelIndex &index);

    void on_pb_suprimer_clicked();


    void on_pb_tri_clicked();

    void on_tri_prd_clicked();

    void on_tri_d_clicked();

    void sendMail();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
