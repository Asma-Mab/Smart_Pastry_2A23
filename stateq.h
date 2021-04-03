#ifndef stateq_H
#define stateq_H

#include <QPainter>
#include <QSqlQuery>
#include <QDialog>
using namespace std;

namespace Ui {
class stateq;
}

class stateq : public QDialog
{
    Q_OBJECT

public:
    explicit stateq(QWidget *parent = nullptr);
       int Statistique_partie2() ;
       int Statistique_partie3() ;


     void paintEvent(QPaintEvent *) ;
    ~stateq();
private slots:
    void on_pushButton_clicked();

private:
    Ui::stati *ui;
};

#endif // STATI_H
