/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QLabel *label_12;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *login_2;
    QLineEdit *useranme;
    QLineEdit *password;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(626, 504);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 671, 551));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 50, 50);"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(110, 60, 441, 331));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(150, 0, 131, 61));
        label_12->setStyleSheet(QString::fromUtf8("	font: 87 10pt \"Nexa Rust Sans Black 01\";"));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(40, 120, 61, 21));
        label_15->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(40, 190, 71, 16));
        label_16->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        login_2 = new QPushButton(groupBox_2);
        login_2->setObjectName(QString::fromUtf8("login_2"));
        login_2->setGeometry(QRect(160, 260, 131, 51));
        login_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"	font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 8pt \"Nexa Rust Sans Black 01\";\n"
"    background-color:rgb(39, 39,39);\n"
"background: rgb(51, 50, 50);\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}"));
        useranme = new QLineEdit(groupBox_2);
        useranme->setObjectName(QString::fromUtf8("useranme"));
        useranme->setGeometry(QRect(190, 110, 191, 41));
        password = new QLineEdit(groupBox_2);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(190, 170, 191, 41));
        login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 626, 21));
        login->setMenuBar(menubar);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        login->setStatusBar(statusbar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "MainWindow", nullptr));
        label_2->setText(QString());
        groupBox_2->setTitle(QString());
        label_12->setText(QCoreApplication::translate("login", "Login to dream Pastry", nullptr));
        label_15->setText(QCoreApplication::translate("login", "Username", nullptr));
        label_16->setText(QCoreApplication::translate("login", "Password", nullptr));
        login_2->setText(QCoreApplication::translate("login", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
