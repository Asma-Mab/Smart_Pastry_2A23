#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "connexion.h"
#include <QMainWindow>
#include "evenement.h"
#include <QPrinter>
#include "qcustomplot.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void plot();
    void stat();

private slots :
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();



    void on_tableView_activated(const QModelIndex &index);

    void on_suppevent_clicked();

    void on_modifevent_clicked();

    void on_pb_tri_nb_clicked();

    void on_TRI_budgt_clicked();

    void on_tri_nom_clicked();
    void on_chercherfour_clicked();
    void on_PDF_clicked();

    void on_cher1_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_3_clicked();


private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
