/********************************************************************************
** Form generated from reading UI file 'accueil.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCUEIL_H
#define UI_ACCUEIL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_accueil
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *button_profil;
    QPushButton *button_employe;
    QPushButton *button_produit;
    QPushButton *button_equipement;
    QPushButton *button_evenement;
    QPushButton *button_fournisseurs;
    QPushButton *button_client;
    QPushButton *button_recette;
    QPushButton *button_quitter;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_8;
    QStackedWidget *stackedWidget;
    QWidget *profil;
    QGroupBox *groupBox;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *lineEdit;
    QLabel *label_16;
    QLineEdit *lineEdit_2;
    QLabel *label_17;
    QLineEdit *lineEdit_3;
    QLabel *label_18;
    QLineEdit *lineEdit_4;
    QLabel *label_19;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_10;
    QWidget *employes;
    QWidget *clients;
    QWidget *produits;
    QWidget *equipements;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QGroupBox *groupBox_2;
    QLineEdit *description_line;
    QDateEdit *date_reclam;
    QPushButton *aj;
    QLineEdit *titre_line;
    QWidget *tab_5;
    QTableView *tableView;
    QWidget *tab_2;
    QTabWidget *tabWidget_3;
    QWidget *tab_6;
    QWidget *tab_7;
    QWidget *tab_3;
    QTabWidget *tabWidget_4;
    QWidget *tab_8;
    QWidget *tab_9;
    QWidget *fournisseurs;
    QWidget *evenements;
    QWidget *recettes;
    QStackedWidget *stackedWidget_2;
    QWidget *page;
    QLabel *label_11;
    QFrame *line;
    QWidget *page_2;
    QLabel *label_20;
    QFrame *line_2;
    QWidget *page_3;
    QFrame *line_3;
    QLabel *label_21;
    QWidget *page_4;
    QFrame *line_4;
    QLabel *label_22;
    QWidget *page_5;
    QFrame *line_5;
    QLabel *label_23;
    QWidget *page_6;
    QLabel *label_24;
    QFrame *line_6;
    QWidget *page_7;
    QLabel *label_25;
    QFrame *line_7;
    QWidget *page_8;
    QLabel *label_26;
    QFrame *line_8;
    QPushButton *button_evaluation;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *accueil)
    {
        if (accueil->objectName().isEmpty())
            accueil->setObjectName(QString::fromUtf8("accueil"));
        accueil->resize(1200, 800);
        centralwidget = new QWidget(accueil);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-5, -5, 1211, 31));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(178, 30, 58);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-5, 25, 251, 741));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 50, 50);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 20, 128, 151));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(178, 30, 58);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(260, 40, 131, 121));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/img/img/Untitled design (6).png")));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 10, 61, 91));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/img/img/DREAM PASTRY.png")));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 50, 131, 20));
        label_6->setStyleSheet(QString::fromUtf8("\n"
"font: 11pt \"Impact\";\n"
"color: rgb(255, 255, 255);\n"
""));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(190, 40, 41, 31));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/img/img/154067405_1632533030284127_9027939143200895570_n.png")));
        button_profil = new QPushButton(centralwidget);
        button_profil->setObjectName(QString::fromUtf8("button_profil"));
        button_profil->setGeometry(QRect(-1, 130, 247, 51));
        button_profil->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"	font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 8pt \"Nexa Rust Sans Black 01\";\n"
"    background-color:rgb(39, 39,39);\n"
"background: transparent;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/154347018_1093458397748791_4413400449242006441_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_profil->setIcon(icon);
        button_profil->setIconSize(QSize(40, 40));
        button_profil->setFlat(false);
        button_employe = new QPushButton(centralwidget);
        button_employe->setObjectName(QString::fromUtf8("button_employe"));
        button_employe->setGeometry(QRect(-1, 181, 247, 51));
        button_employe->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"	font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 8pt \"Nexa Rust Sans Black 01\";\n"
"    background-color:rgb(39, 39,39);\n"
"background: transparent;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/Untitled design (18).png"), QSize(), QIcon::Normal, QIcon::Off);
        button_employe->setIcon(icon1);
        button_employe->setIconSize(QSize(30, 30));
        button_produit = new QPushButton(centralwidget);
        button_produit->setObjectName(QString::fromUtf8("button_produit"));
        button_produit->setGeometry(QRect(-1, 283, 247, 51));
        button_produit->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"	font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 8pt \"Nexa Rust Sans Black 01\";\n"
"    background-color:rgb(39, 39,39);\n"
"background: transparent;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/Untitled design (22).png"), QSize(), QIcon::Normal, QIcon::Off);
        button_produit->setIcon(icon2);
        button_produit->setIconSize(QSize(40, 40));
        button_equipement = new QPushButton(centralwidget);
        button_equipement->setObjectName(QString::fromUtf8("button_equipement"));
        button_equipement->setGeometry(QRect(-1, 334, 247, 51));
        button_equipement->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"	font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 8pt \"Nexa Rust Sans Black 01\";\n"
"    background-color:rgb(39, 39,39);\n"
"background: transparent;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/img/Untitled design (23).png"), QSize(), QIcon::Normal, QIcon::Off);
        button_equipement->setIcon(icon3);
        button_equipement->setIconSize(QSize(40, 40));
        button_evenement = new QPushButton(centralwidget);
        button_evenement->setObjectName(QString::fromUtf8("button_evenement"));
        button_evenement->setGeometry(QRect(-1, 436, 247, 51));
        button_evenement->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"	font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 8pt \"Nexa Rust Sans Black 01\";\n"
"    background-color:rgb(39, 39,39);\n"
"background: transparent;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/img/Untitled design (25).png"), QSize(), QIcon::Normal, QIcon::Off);
        button_evenement->setIcon(icon4);
        button_evenement->setIconSize(QSize(40, 40));
        button_fournisseurs = new QPushButton(centralwidget);
        button_fournisseurs->setObjectName(QString::fromUtf8("button_fournisseurs"));
        button_fournisseurs->setGeometry(QRect(-1, 385, 247, 51));
        button_fournisseurs->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"	font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 8pt \"Nexa Rust Sans Black 01\";\n"
"    background-color:rgb(39, 39,39);\n"
"background: transparent;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/img/Untitled design (24).png"), QSize(), QIcon::Normal, QIcon::Off);
        button_fournisseurs->setIcon(icon5);
        button_fournisseurs->setIconSize(QSize(40, 40));
        button_client = new QPushButton(centralwidget);
        button_client->setObjectName(QString::fromUtf8("button_client"));
        button_client->setGeometry(QRect(-1, 231, 247, 51));
        button_client->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"	font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 8pt \"Nexa Rust Sans Black 01\";\n"
"    background-color:rgb(39, 39,39);\n"
"background: transparent;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/img/Untitled design (21).png"), QSize(), QIcon::Normal, QIcon::Off);
        button_client->setIcon(icon6);
        button_client->setIconSize(QSize(35, 35));
        button_recette = new QPushButton(centralwidget);
        button_recette->setObjectName(QString::fromUtf8("button_recette"));
        button_recette->setGeometry(QRect(-1, 487, 247, 51));
        button_recette->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"	font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 8pt \"Nexa Rust Sans Black 01\";\n"
"    background-color:rgb(39, 39,39);\n"
"background: transparent;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/img/Untitled design (26).png"), QSize(), QIcon::Normal, QIcon::Off);
        button_recette->setIcon(icon7);
        button_recette->setIconSize(QSize(40, 40));
        button_quitter = new QPushButton(centralwidget);
        button_quitter->setObjectName(QString::fromUtf8("button_quitter"));
        button_quitter->setGeometry(QRect(0, 589, 247, 51));
        button_quitter->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"	font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 8pt \"Nexa Rust Sans Black 01\";\n"
"    background-color:rgb(39, 39,39);\n"
"background: transparent;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/img/Untitled design (28).png"), QSize(), QIcon::Normal, QIcon::Off);
        button_quitter->setIcon(icon8);
        button_quitter->setIconSize(QSize(40, 40));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(246, 27, 14, 144));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(389, 27, 811, 151));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(246, 169, 961, 598));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(250, 180, 931, 581));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        profil = new QWidget();
        profil->setObjectName(QString::fromUtf8("profil"));
        groupBox = new QGroupBox(profil);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 901, 551));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(40, 40, 121, 61));
        label_12->setStyleSheet(QString::fromUtf8("	font: 87 10pt \"Nexa Rust Sans Black 01\";"));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(60, 100, 441, 21));
        label_13->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Segoe UI\";\n"
""));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(436, 100, 111, 20));
        label_14->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Segoe UI\";\n"
"color: rgb(85, 85, 255);"));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(50, 190, 56, 16));
        label_15->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(50, 220, 361, 41));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(50, 280, 71, 16));
        label_16->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(50, 310, 361, 41));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(50, 370, 71, 16));
        label_17->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(50, 400, 361, 41));
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(500, 190, 101, 16));
        label_18->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(500, 220, 361, 41));
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(500, 280, 141, 16));
        label_19->setStyleSheet(QString::fromUtf8("font: 10pt \"MS Shell Dlg 2\";"));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(500, 310, 361, 41));
        pushButton_10 = new QPushButton(groupBox);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(600, 430, 131, 51));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        stackedWidget->addWidget(profil);
        employes = new QWidget();
        employes->setObjectName(QString::fromUtf8("employes"));
        stackedWidget->addWidget(employes);
        clients = new QWidget();
        clients->setObjectName(QString::fromUtf8("clients"));
        stackedWidget->addWidget(clients);
        produits = new QWidget();
        produits->setObjectName(QString::fromUtf8("produits"));
        stackedWidget->addWidget(produits);
        equipements = new QWidget();
        equipements->setObjectName(QString::fromUtf8("equipements"));
        tabWidget = new QTabWidget(equipements);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 901, 551));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab{\n"
"    color:white;\n"
"	font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 8pt \"Nexa Rust Sans Black 01\";\n"
"    background-color:rgb(39, 39,39);\n"
"background:  rgb(51, 50, 50);\n"
"border-top-left-radius:10px;\n"
"border-top-right-radius:10px;\n"
"min-width:120px;\n"
"height:30px;\n"
"\n"
"}\n"
"QTabBar::tab::hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-top-left-radius:10px;\n"
"border-top-right-radius:10px;\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-top-left-radius:10px;\n"
"border-top-right-radius:10px;\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(-1, -2, 901, 521));
        tabWidget_2->setStyleSheet(QString::fromUtf8("QTabBar::tab{\n"
"\n"
"height:28px;\n"
"\n"
"}"));
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        groupBox_2 = new QGroupBox(tab_4);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(60, 0, 691, 411));
        description_line = new QLineEdit(groupBox_2);
        description_line->setObjectName(QString::fromUtf8("description_line"));
        description_line->setGeometry(QRect(90, 140, 113, 22));
        date_reclam = new QDateEdit(groupBox_2);
        date_reclam->setObjectName(QString::fromUtf8("date_reclam"));
        date_reclam->setGeometry(QRect(350, 100, 110, 22));
        aj = new QPushButton(groupBox_2);
        aj->setObjectName(QString::fromUtf8("aj"));
        aj->setGeometry(QRect(370, 360, 93, 28));
        titre_line = new QLineEdit(groupBox_2);
        titre_line->setObjectName(QString::fromUtf8("titre_line"));
        titre_line->setGeometry(QRect(80, 50, 113, 22));
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tableView = new QTableView(tab_5);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 40, 771, 381));
        tabWidget_2->addTab(tab_5, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget_3 = new QTabWidget(tab_2);
        tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(-1, -2, 901, 521));
        tabWidget_3->setStyleSheet(QString::fromUtf8("QTabBar::tab{\n"
"\n"
"height:28px;\n"
"\n"
"}"));
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tabWidget_3->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        tabWidget_3->addTab(tab_7, QString());
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget_4 = new QTabWidget(tab_3);
        tabWidget_4->setObjectName(QString::fromUtf8("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(-1, -2, 901, 521));
        tabWidget_4->setStyleSheet(QString::fromUtf8("QTabBar::tab{\n"
"\n"
"height:28px;\n"
"\n"
"}"));
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        tabWidget_4->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        tabWidget_4->addTab(tab_9, QString());
        tabWidget->addTab(tab_3, QString());
        stackedWidget->addWidget(equipements);
        fournisseurs = new QWidget();
        fournisseurs->setObjectName(QString::fromUtf8("fournisseurs"));
        stackedWidget->addWidget(fournisseurs);
        evenements = new QWidget();
        evenements->setObjectName(QString::fromUtf8("evenements"));
        stackedWidget->addWidget(evenements);
        recettes = new QWidget();
        recettes->setObjectName(QString::fromUtf8("recettes"));
        stackedWidget->addWidget(recettes);
        stackedWidget_2 = new QStackedWidget(centralwidget);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(590, 40, 371, 121));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_11 = new QLabel(page);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(110, 40, 361, 41));
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(91, 90, 91);\n"
"font: 18pt \"PRIMETIME\";\n"
""));
        line = new QFrame(page);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(110, 80, 109, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        stackedWidget_2->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_20 = new QLabel(page_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(30, 40, 361, 41));
        label_20->setStyleSheet(QString::fromUtf8("color: rgb(91, 90, 91);\n"
"font: 18pt \"PRIMETIME\";\n"
""));
        line_2 = new QFrame(page_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(38, 80, 291, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        stackedWidget_2->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        line_3 = new QFrame(page_3);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(48, 80, 261, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_21 = new QLabel(page_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(40, 40, 361, 41));
        label_21->setStyleSheet(QString::fromUtf8("color: rgb(91, 90, 91);\n"
"font: 18pt \"PRIMETIME\";\n"
""));
        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        line_4 = new QFrame(page_4);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(40, 80, 291, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_22 = new QLabel(page_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(40, 40, 361, 41));
        label_22->setStyleSheet(QString::fromUtf8("color: rgb(91, 90, 91);\n"
"font: 18pt \"PRIMETIME\";\n"
""));
        stackedWidget_2->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        line_5 = new QFrame(page_5);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(20, 80, 341, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label_23 = new QLabel(page_5);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(10, 40, 361, 41));
        label_23->setStyleSheet(QString::fromUtf8("color: rgb(91, 90, 91);\n"
"font: 18pt \"PRIMETIME\";\n"
""));
        stackedWidget_2->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        label_24 = new QLabel(page_6);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(0, 40, 371, 41));
        label_24->setStyleSheet(QString::fromUtf8("color: rgb(91, 90, 91);\n"
"font: 18pt \"PRIMETIME\";\n"
""));
        line_6 = new QFrame(page_6);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(10, 80, 351, 20));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        stackedWidget_2->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        label_25 = new QLabel(page_7);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(10, 40, 361, 41));
        label_25->setStyleSheet(QString::fromUtf8("color: rgb(91, 90, 91);\n"
"font: 18pt \"PRIMETIME\";\n"
""));
        line_7 = new QFrame(page_7);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(10, 80, 341, 20));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        stackedWidget_2->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        label_26 = new QLabel(page_8);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(40, 40, 361, 41));
        label_26->setStyleSheet(QString::fromUtf8("color: rgb(91, 90, 91);\n"
"font: 18pt \"PRIMETIME\";\n"
""));
        line_8 = new QFrame(page_8);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(50, 80, 281, 20));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        stackedWidget_2->addWidget(page_8);
        button_evaluation = new QPushButton(centralwidget);
        button_evaluation->setObjectName(QString::fromUtf8("button_evaluation"));
        button_evaluation->setGeometry(QRect(0, 538, 247, 51));
        button_evaluation->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"	font: 75 8pt \"Source Code Pro\";\n"
"	font: 87 7pt \"Nexa Rust Sans Black 01\";\n"
"    background-color:rgb(39, 39,39);\n"
"background: transparent;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}"));
        button_evaluation->setIcon(icon7);
        button_evaluation->setIconSize(QSize(40, 40));
        accueil->setCentralWidget(centralwidget);
        menubar = new QMenuBar(accueil);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 21));
        accueil->setMenuBar(menubar);
        statusbar = new QStatusBar(accueil);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        accueil->setStatusBar(statusbar);

        retranslateUi(accueil);

        stackedWidget->setCurrentIndex(4);
        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);
        tabWidget_4->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(accueil);
    } // setupUi

    void retranslateUi(QMainWindow *accueil)
    {
        accueil->setWindowTitle(QCoreApplication::translate("accueil", "Dream Pastry", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QCoreApplication::translate("accueil", "DREAM PASTRY", nullptr));
        label_7->setText(QString());
        button_profil->setText(QCoreApplication::translate("accueil", " Profil                     ", nullptr));
        button_employe->setText(QCoreApplication::translate("accueil", "  employ\303\251s                ", nullptr));
        button_produit->setText(QCoreApplication::translate("accueil", "  Produits                  ", nullptr));
        button_equipement->setText(QCoreApplication::translate("accueil", " Equipements            ", nullptr));
        button_evenement->setText(QCoreApplication::translate("accueil", " Evenements             ", nullptr));
        button_fournisseurs->setText(QCoreApplication::translate("accueil", "Fournisseurs/stock", nullptr));
        button_client->setText(QCoreApplication::translate("accueil", "  Clients/Commande ", nullptr));
        button_recette->setText(QCoreApplication::translate("accueil", " RECETTES                  ", nullptr));
        button_quitter->setText(QCoreApplication::translate("accueil", " Quitter                    ", nullptr));
        label_9->setText(QString());
        label_10->setText(QString());
        label_8->setText(QString());
        groupBox->setTitle(QString());
        label_12->setText(QCoreApplication::translate("accueil", "Mon profil", nullptr));
        label_13->setText(QCoreApplication::translate("accueil", "Ces informations seront affich\303\251es publiquement sur", nullptr));
        label_14->setText(QCoreApplication::translate("accueil", "votre profil", nullptr));
        label_15->setText(QCoreApplication::translate("accueil", "NOM", nullptr));
        label_16->setText(QCoreApplication::translate("accueil", "PRENOM", nullptr));
        label_17->setText(QCoreApplication::translate("accueil", "EMAIL", nullptr));
        label_18->setText(QCoreApplication::translate("accueil", "TELEPHONE", nullptr));
        label_19->setText(QCoreApplication::translate("accueil", "PASSWORD", nullptr));
        pushButton_10->setText(QCoreApplication::translate("accueil", "sauvegarder ", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("accueil", "GroupBox", nullptr));
        aj->setText(QCoreApplication::translate("accueil", "PushButton", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("accueil", "Ajouter", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("accueil", "Consulter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("accueil", "Equipements", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QCoreApplication::translate("accueil", "Ajouter", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QCoreApplication::translate("accueil", "Consulter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("accueil", "Reparateurs", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_8), QCoreApplication::translate("accueil", "Ajouter", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_9), QCoreApplication::translate("accueil", "Consulter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("accueil", "Reparation", nullptr));
        label_11->setText(QCoreApplication::translate("accueil", "Profil", nullptr));
        label_20->setText(QCoreApplication::translate("accueil", "Gestion Employes", nullptr));
        label_21->setText(QCoreApplication::translate("accueil", "Gestion Clients", nullptr));
        label_22->setText(QCoreApplication::translate("accueil", "Gestion Produits", nullptr));
        label_23->setText(QCoreApplication::translate("accueil", "Gestion Equipements", nullptr));
        label_24->setText(QCoreApplication::translate("accueil", "Gestion Fournisseurs", nullptr));
        label_25->setText(QCoreApplication::translate("accueil", "Gestion Evenements", nullptr));
        label_26->setText(QCoreApplication::translate("accueil", "Gestion Recettes", nullptr));
        button_evaluation->setText(QCoreApplication::translate("accueil", "Evaluation/Reclamation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class accueil: public Ui_accueil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCUEIL_H
