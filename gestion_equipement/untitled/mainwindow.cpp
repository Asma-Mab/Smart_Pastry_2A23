#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QSqlQuery>
#include "equipement.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow)
{
    ui->setupUi(this);
  equipement e;
   //ui->tableView->setModel(e.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()//Ajouter
{
    equipement t;

       // t.setId_equipement(ui->lineEdit->text().toInt());
        t.setNom(ui->lineEdit_2->text());
        t.setPrix(ui->lineEdit_3->text().toInt());
        t.setDate_achat(ui->lineEdit_4->text());
        t.setCaracteristique(ui->lineEdit_5->text());

        t.setMarque(ui->lineEdit_6->text());
        t.setEtat(ui->lineEdit_7->text());
        t.ajouter();
    ui->tableView->setModel(t.afficher());
}


void MainWindow::on_pushButton_2_clicked()
{equipement t;
    ui->tableView->setModel(t.afficher());
}
