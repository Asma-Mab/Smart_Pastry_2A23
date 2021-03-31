#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "connexion.h"
#include <QMainWindow>
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

    void on_pushButton_3_clicked();

    void on_tableView_2_activated(const QModelIndex &index);

    void on_modifierecette_clicked();

    void on_supprecette_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
