#ifndef STATISTIQUE_EQ_H
#define STATISTIQUE_EQ_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class statistique_eq; }
QT_END_NAMESPACE

class statistique_eq : public QMainWindow
{
    Q_OBJECT

public:
    statistique_eq(QWidget *parent = nullptr);
    ~statistique_eq();



private slots:
    void make();
private:
    Ui::statistique_eq *ui;
};
#endif // STATISTIQUE_EQ_H
