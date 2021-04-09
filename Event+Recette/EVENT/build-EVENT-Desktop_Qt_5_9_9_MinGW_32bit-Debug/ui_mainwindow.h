/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
#include "qcustomplot.h"

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
    QPushButton *chercherfour;
    QLineEdit *cher1;
    QPushButton *PDF;
    QPushButton *pushButton_3;
    QWidget *tab_3;
    QCustomPlot *customPlot;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 781, 551));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        lineEdit_4 = new QLineEdit(tab);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(100, 100, 113, 22));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 70, 47, 13));
        lineEdit_5 = new QLineEdit(tab);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(100, 130, 113, 22));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 230, 93, 28));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(255, 219, 88);\n"
"background-color: rgb(255, 0, 0);"));
        lineEdit_3 = new QLineEdit(tab);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 70, 113, 22));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 130, 71, 16));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 10, 113, 22));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 47, 13));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 40, 47, 13));
        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 40, 113, 22));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 81, 16));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 100, 47, 13));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableView = new QTableView(tab_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(220, 40, 531, 311));
        tableView->setGridStyle(Qt::DotLine);
        tableView->setSortingEnabled(false);
        tableView->horizontalHeader()->setCascadingSectionResizes(false);
        tableView->horizontalHeader()->setDefaultSectionSize(85);
        tableView->horizontalHeader()->setMinimumSectionSize(50);
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 370, 121, 41));
        modifevent = new QPushButton(tab_2);
        modifevent->setObjectName(QStringLiteral("modifevent"));
        modifevent->setGeometry(QRect(10, 250, 91, 31));
        suppevent = new QPushButton(tab_2);
        suppevent->setObjectName(QStringLiteral("suppevent"));
        suppevent->setGeometry(QRect(14, 200, 81, 31));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, 140, 71, 16));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, 80, 47, 13));
        lineEdit_6 = new QLineEdit(tab_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(90, 140, 113, 22));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 20, 81, 16));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 110, 47, 13));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(0, 50, 47, 13));
        lineEdit_7 = new QLineEdit(tab_2);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(90, 20, 113, 22));
        lineEdit_8 = new QLineEdit(tab_2);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(90, 80, 113, 22));
        lineEdit_9 = new QLineEdit(tab_2);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(90, 50, 113, 22));
        lineEdit_10 = new QLineEdit(tab_2);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(90, 110, 113, 22));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 170, 71, 16));
        lineEdit_11 = new QLineEdit(tab_2);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(90, 170, 113, 20));
        pb_tri_nb = new QPushButton(tab_2);
        pb_tri_nb->setObjectName(QStringLiteral("pb_tri_nb"));
        pb_tri_nb->setGeometry(QRect(570, 360, 111, 23));
        TRI_budgt = new QPushButton(tab_2);
        TRI_budgt->setObjectName(QStringLiteral("TRI_budgt"));
        TRI_budgt->setGeometry(QRect(600, 380, 91, 23));
        tri_nom = new QPushButton(tab_2);
        tri_nom->setObjectName(QStringLiteral("tri_nom"));
        tri_nom->setGeometry(QRect(620, 400, 75, 23));
        chercherfour = new QPushButton(tab_2);
        chercherfour->setObjectName(QStringLiteral("chercherfour"));
        chercherfour->setGeometry(QRect(0, 320, 181, 23));
        cher1 = new QLineEdit(tab_2);
        cher1->setObjectName(QStringLiteral("cher1"));
        cher1->setGeometry(QRect(32, 349, 141, 21));
        PDF = new QPushButton(tab_2);
        PDF->setObjectName(QStringLiteral("PDF"));
        PDF->setGeometry(QRect(90, 410, 101, 31));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(240, 450, 151, 28));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        customPlot = new QCustomPlot(tab_3);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(30, 60, 731, 391));
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Budget", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Nombre invit\303\251s", Q_NULLPTR));
        label_2->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Nom evenement ", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Lieu", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "ajoute evenement", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        modifevent->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        suppevent->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Nombre invit\303\251s", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Budget", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Nom evenement ", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Lieu", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "id event", Q_NULLPTR));
        pb_tri_nb->setText(QApplication::translate("MainWindow", "TRI NOMBRE_Invite", Q_NULLPTR));
        TRI_budgt->setText(QApplication::translate("MainWindow", "TRI PAR BUDGET", Q_NULLPTR));
        tri_nom->setText(QApplication::translate("MainWindow", "TRI PAR NOM", Q_NULLPTR));
        chercherfour->setText(QApplication::translate("MainWindow", "CHERCHER", Q_NULLPTR));
        PDF->setText(QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "statistique", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Consulter evenement", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "statistique", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
