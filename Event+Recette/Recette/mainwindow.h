#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "connexion.h"
#include <QMainWindow>
#include "evenement.h"
#include "recette.h"
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


    void on_tableView_clicked(const QModelIndex &index);

    void on_modifier_clicked();

    void on_supprimer_clicked();

    void on_chercherfour_clicked();





private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
