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
    QWidget *ajouter;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *tab_2;
    QPushButton *pushButton_3;
    QTableView *tableView_2;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *modifierecette;
    QPushButton *supprecette;
    QLineEdit *lineEdit_11;
    QLabel *label;
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
        tabWidget->setGeometry(QRect(10, 10, 781, 551));
        ajouter = new QWidget();
        ajouter->setObjectName(QString::fromUtf8("ajouter"));
        pushButton = new QPushButton(ajouter);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 230, 93, 28));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 219, 88);\n"
"background-color: rgb(255, 0, 0);"));
        lineEdit = new QLineEdit(ajouter);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 20, 113, 22));
        lineEdit_5 = new QLineEdit(ajouter);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(120, 140, 113, 22));
        lineEdit_3 = new QLineEdit(ajouter);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(120, 80, 113, 22));
        lineEdit_4 = new QLineEdit(ajouter);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(120, 110, 113, 22));
        lineEdit_2 = new QLineEdit(ajouter);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 50, 113, 22));
        label_2 = new QLabel(ajouter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 20, 61, 16));
        label_3 = new QLabel(ajouter);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 50, 47, 13));
        label_4 = new QLabel(ajouter);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 50, 47, 13));
        label_5 = new QLabel(ajouter);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 110, 111, 16));
        label_6 = new QLabel(ajouter);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 140, 91, 20));
        label_7 = new QLabel(ajouter);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 80, 61, 16));
        tabWidget->addTab(ajouter, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 330, 111, 28));
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(230, 100, 421, 291));
        tableView_2->setGridStyle(Qt::DotLine);
        tableView_2->setSortingEnabled(false);
        tableView_2->horizontalHeader()->setCascadingSectionResizes(false);
        tableView_2->horizontalHeader()->setMinimumSectionSize(50);
        tableView_2->horizontalHeader()->setDefaultSectionSize(85);
        lineEdit_6 = new QLineEdit(tab_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(110, 160, 113, 22));
        lineEdit_10 = new QLineEdit(tab_2);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(110, 70, 113, 22));
        lineEdit_8 = new QLineEdit(tab_2);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(110, 130, 113, 22));
        lineEdit_9 = new QLineEdit(tab_2);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(110, 40, 111, 22));
        lineEdit_7 = new QLineEdit(tab_2);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(110, 100, 113, 22));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 100, 61, 16));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 70, 47, 13));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 40, 61, 16));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, 160, 91, 20));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(0, 130, 111, 20));
        modifierecette = new QPushButton(tab_2);
        modifierecette->setObjectName(QString::fromUtf8("modifierecette"));
        modifierecette->setGeometry(QRect(20, 250, 111, 31));
        supprecette = new QPushButton(tab_2);
        supprecette->setObjectName(QString::fromUtf8("supprecette"));
        supprecette->setGeometry(QRect(20, 290, 111, 31));
        lineEdit_11 = new QLineEdit(tab_2);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(110, 10, 113, 20));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 81, 16));
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
        pushButton->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nom recette", nullptr));
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "cat\303\251gorie", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "NOMBRE_INGREDIENT", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "ID_PRODUIT", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ajouter), QCoreApplication::translate("MainWindow", "ajouter recette", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Afficher", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "cat\303\251gorie", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Nom recette", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "ID_PRODUIT", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "NOMBRE_INGREDIENT", nullptr));
        modifierecette->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        supprecette->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ID_recette", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "consulter recette", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
