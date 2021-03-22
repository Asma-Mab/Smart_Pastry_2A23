#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "smtp.h"
#include <QTextTableFormat>
#include <QStandardItemModel>
#include <QDialog>
#include <QFileDialog>
#include <QMainWindow>
#include "connection.h"
#include<QObject>
#include"employee.h"
#include"conge.h"

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
    void on_Ajouter_clicked();

    void on_pushButton_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_modifier_clicked();

    void on_load_clicked();

    void on_ajouterconge_clicked();

    void on_tableView_2_activated(const QModelIndex &index);

    void on_modifierconge_clicked();

    void on_suppconge_clicked();

    void on_tableView_5_activated(const QModelIndex &index);

    void on_modifier_2_clicked();
    void sendMail();
    void mailSent(QString);
    void browse();
    void on_ajouterconge_2_clicked();

    void on_loading_clicked();

private:
    Ui::MainWindow *ui;
    Employee E;
    conge c;
     QStringList files;
};
#endif // MAINWINDOW_H
