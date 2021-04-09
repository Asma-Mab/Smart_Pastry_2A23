/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *lineEdit_4;
    QLabel *label_3;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_4;
    QWidget *tab_2;
    QTableView *tableView;
    QPushButton *pushButton_2;
    QPushButton *modifevent;
    QPushButton *suppevent;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_6;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLabel *label_12;
    QLineEdit *lineEdit_11;
    QPushButton *pb_tri_nb;
    QPushButton *TRI_budgt;
    QPushButton *tri_nom;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 10, 721, 551));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        lineEdit_4 = new QLineEdit(tab);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(100, 100, 113, 22));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 70, 47, 13));
        lineEdit_5 = new QLineEdit(tab);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(100, 130, 113, 22));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 230, 93, 28));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 219, 88);\n"
"background-color: rgb(255, 0, 0);"));
        lineEdit_3 = new QLineEdit(tab);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 70, 113, 22));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 130, 71, 16));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 10, 113, 22));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 40, 47, 13));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 40, 47, 13));
        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 40, 113, 22));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 81, 16));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 100, 47, 13));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableView = new QTableView(tab_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(220, 40, 531, 311));
        tableView->setGridStyle(Qt::DotLine);
        tableView->setSortingEnabled(false);
        tableView->horizontalHeader()->setCascadingSectionResizes(false);
        tableView->horizontalHeader()->setMinimumSectionSize(50);
        tableView->horizontalHeader()->setDefaultSectionSize(85);
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 390, 93, 28));
        modifevent = new QPushButton(tab_2);
        modifevent->setObjectName(QString::fromUtf8("modifevent"));
        modifevent->setGeometry(QRect(10, 250, 91, 31));
        suppevent = new QPushButton(tab_2);
        suppevent->setObjectName(QString::fromUtf8("suppevent"));
        suppevent->setGeometry(QRect(14, 200, 81, 31));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 140, 71, 16));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 80, 47, 13));
        lineEdit_6 = new QLineEdit(tab_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(90, 140, 113, 22));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 20, 81, 16));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 110, 47, 13));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, 50, 47, 13));
        lineEdit_7 = new QLineEdit(tab_2);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(90, 20, 113, 22));
        lineEdit_8 = new QLineEdit(tab_2);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(90, 80, 113, 22));
        lineEdit_9 = new QLineEdit(tab_2);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(90, 50, 113, 22));
        lineEdit_10 = new QLineEdit(tab_2);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(90, 110, 113, 22));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 170, 71, 16));
        lineEdit_11 = new QLineEdit(tab_2);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(90, 170, 113, 20));
        pb_tri_nb = new QPushButton(tab_2);
        pb_tri_nb->setObjectName(QString::fromUtf8("pb_tri_nb"));
        pb_tri_nb->setGeometry(QRect(340, 390, 111, 23));
        TRI_budgt = new QPushButton(tab_2);
        TRI_budgt->setObjectName(QString::fromUtf8("TRI_budgt"));
        TRI_budgt->setGeometry(QRect(464, 390, 91, 23));
        tri_nom = new QPushButton(tab_2);
        tri_nom->setObjectName(QString::fromUtf8("tri_nom"));
        tri_nom->setGeometry(QRect(570, 390, 75, 23));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Budget", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Nombre invit\303\251s", nullptr));
        label_2->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Nom evenement ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Lieu", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "ajoute evenement", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Afficher", nullptr));
        modifevent->setText(QCoreApplication::translate("MainWindow", "modifier", nullptr));
        suppevent->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Nombre invit\303\251s", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Budget", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Nom evenement ", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Lieu", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "id event", nullptr));
        pb_tri_nb->setText(QCoreApplication::translate("MainWindow", "TRI NOMBRE_Invite", nullptr));
        TRI_budgt->setText(QCoreApplication::translate("MainWindow", "TRI PAR BUDGET", nullptr));
        tri_nom->setText(QCoreApplication::translate("MainWindow", "TRI PAR NOM", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Consulter evenement", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
