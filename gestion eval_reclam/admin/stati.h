#ifndef STATI_H
#define STATI_H
#include <QPainter>
#include <QSqlQuery>
#include <QDialog>
using namespace std;

namespace Ui {
class stati;
}

class stati : public QDialog
{
    Q_OBJECT

public:
    explicit stati(QWidget *parent = nullptr);
       int Statistique1();
       int Statistique2();
       int Statistique_partie3() ;


    void paintEvent(QPaintEvent *) ;
      //void paintEvent2(QPaintEvent *) ;
     //  void paintEvent1(QPaintEvent *) ;
    ~stati();
private slots:



     void on_pushButton_clicked();

private:
    Ui::stati *ui;
};

#endif // STATI_H
