#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QSqlQuery>
#include "reclamation.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow)
{
    ui->setupUi(this);
reclamation r;
   ui->tableView->setModel(r.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()//Ajouter
{
    reclamation r;

       // t.setId_equipement(ui->lineEdit->text().toInt());
        r.setTitre(ui->lineEdit_6->text());

        r.setDate_reclamation(ui->lineEdit_4->text());
        r.setEtat(ui->lineEdit_7->text());

        r.ajouter();
    ui->tableView->setModel(r.afficher());
}


void MainWindow::on_pushButton_2_clicked()
{reclamation r;
    ui->tableView->setModel(r.afficher());
}


