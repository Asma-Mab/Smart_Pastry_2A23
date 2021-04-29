#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>

namespace Ui {
class admin;
}

class admin : public QDialog
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    void on_tableView_2_activated(const QModelIndex &index);

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();
    void on_pushButton_2_clicked();
    void on_traiter_clicked();

   // void on_pushButton_9_clicked();



   // void on_pushButton_9_clicked();

    void on_affichageemployee_clicked();

    void on_listeemployee_activated(const QModelIndex &index);


    ~admin();

private:
    Ui::admin *ui;
};

#endif // ADMIN_H
