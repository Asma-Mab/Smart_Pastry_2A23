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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget_5;
    QWidget *tab_10;
    QTabWidget *tabWidget_6;
    QWidget *tab_11;
    QGroupBox *groupBox_21;
    QLabel *label_redEq_13;
    QLabel *label_RedEq2_12;
    QLabel *label_AjEq_13;
    QTableView *listeemployee;
    QPushButton *affichageemployee;
    QPushButton *eval360;
    QLineEdit *id;
    QWidget *ajouter_reclam;
    QLabel *label_62;
    QLabel *label_63;
    QLabel *label_64;
    QLabel *label_65;
    QLabel *label_66;
    QLabel *label_67;
    QLabel *label_68;
    QLabel *label_69;
    QLabel *label_70;
    QLabel *label_71;
    QLabel *label_72;
    QLabel *label_73;
    QLabel *label_74;
    QLabel *label_75;
    QPushButton *pushButton_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_17;
    QRadioButton *moyenneperf2_3;
    QRadioButton *excelperf2;
    QRadioButton *faibleperf2_3;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_18;
    QRadioButton *faibleperf1_3;
    QRadioButton *moyenneperf1_3;
    QRadioButton *excelperf1_3;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_19;
    QRadioButton *faiblefiab1_3;
    QRadioButton *moyennefiab2;
    QRadioButton *excelfiab1_3;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_20;
    QRadioButton *faiblefiab2;
    QRadioButton *moyennefiab2_2;
    QRadioButton *excelfiab2_3;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_21;
    QRadioButton *faiblefiab3;
    QRadioButton *moyennefiab3;
    QRadioButton *excelfiab3;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_22;
    QRadioButton *faibleauto1_3;
    QRadioButton *moyenneauto1;
    QRadioButton *excelauto1_3;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_23;
    QRadioButton *faibleauto2_3;
    QRadioButton *moyenneauto2;
    QRadioButton *excelauto2_3;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_24;
    QRadioButton *faibleauto3_3;
    QRadioButton *moyenneauto3;
    QRadioButton *excelauto3_3;
    QLineEdit *cin1;
    QTextEdit *commentaire;
    QLabel *label_76;
    QLabel *label_77;
    QLabel *send;
    QGroupBox *groupBox_20;
    QLabel *label_redEq_12;
    QLabel *label_AjEq_12;
    QLabel *label;
    QLineEdit *email;
    QPushButton *anim;
    QWidget *consulter_reclam;
    QGroupBox *groupBox_19;
    QLabel *label_redEq_11;
    QLabel *label_RedEq2_11;
    QLabel *label_AjEq_11;
    QTableView *tableView_2;
    QGroupBox *groupBox;
    QLineEdit *lineEdit_6;
    QLabel *label_78;
    QTextEdit *commentaire_2;
    QLabel *label_79;
    QLineEdit *dateEdit;
    QLabel *label_80;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *listeeval;
    QPushButton *trie;
    QPushButton *trie1;
    QPushButton *trie2;
    QWidget *tab_12;
    QGroupBox *groupBox_22;
    QLabel *label_redEq_14;
    QLabel *label_RedEq2_13;
    QLabel *label_AjEq_14;
    QPushButton *afficher_reclam;
    QLineEdit *id_reclam;
    QTableView *affichagereclam;
    QLabel *label_81;
    QGroupBox *groupBox_2;
    QPushButton *traiter;
    QPushButton *stat;
    QLineEdit *rech;
    QPushButton *recherche;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1185, 584);
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget_5 = new QTabWidget(centralwidget);
        tabWidget_5->setObjectName(QString::fromUtf8("tabWidget_5"));
        tabWidget_5->setGeometry(QRect(20, 0, 951, 531));
        tabWidget_5->setStyleSheet(QString::fromUtf8("QTabBar::tab{\n"
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
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        tabWidget_6 = new QTabWidget(tab_10);
        tabWidget_6->setObjectName(QString::fromUtf8("tabWidget_6"));
        tabWidget_6->setGeometry(QRect(0, 0, 951, 501));
        tab_11 = new QWidget();
        tab_11->setObjectName(QString::fromUtf8("tab_11"));
        groupBox_21 = new QGroupBox(tab_11);
        groupBox_21->setObjectName(QString::fromUtf8("groupBox_21"));
        groupBox_21->setGeometry(QRect(0, 0, 941, 451));
        groupBox_21->setStyleSheet(QString::fromUtf8("\n"
"QGroupBox  {\n"
"    border: 1px solid;\n"
"    \n"
"  \n"
"    border-radius: 20px;\n"
"}"));
        label_redEq_13 = new QLabel(groupBox_21);
        label_redEq_13->setObjectName(QString::fromUtf8("label_redEq_13"));
        label_redEq_13->setGeometry(QRect(0, -5, 941, 51));
        label_redEq_13->setStyleSheet(QString::fromUtf8("color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:20px;"));
        label_RedEq2_12 = new QLabel(groupBox_21);
        label_RedEq2_12->setObjectName(QString::fromUtf8("label_RedEq2_12"));
        label_RedEq2_12->setGeometry(QRect(0, 0, 51, 421));
        label_RedEq2_12->setStyleSheet(QString::fromUtf8("color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:20px;"));
        label_AjEq_13 = new QLabel(groupBox_21);
        label_AjEq_13->setObjectName(QString::fromUtf8("label_AjEq_13"));
        label_AjEq_13->setGeometry(QRect(350, 10, 211, 21));
        label_AjEq_13->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 10pt \"Nexa Rust Sans Black 01\";\n"
"background:#b20837;\n"
"border-radius:10px;"));
        listeemployee = new QTableView(groupBox_21);
        listeemployee->setObjectName(QString::fromUtf8("listeemployee"));
        listeemployee->setGeometry(QRect(120, 90, 721, 251));
        listeemployee->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: white;\n"
"selection-background-color: gray;\n"
""));
        affichageemployee = new QPushButton(groupBox_21);
        affichageemployee->setObjectName(QString::fromUtf8("affichageemployee"));
        affichageemployee->setGeometry(QRect(600, 350, 171, 23));
        affichageemployee->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"	font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 7pt \"Nexa Rust Sans Black 01\";\n"
"    background-color: rgb(51, 50, 50);\n"
"background:  rgb(51, 50, 50);\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}\n"
""));
        eval360 = new QPushButton(groupBox_21);
        eval360->setObjectName(QString::fromUtf8("eval360"));
        eval360->setGeometry(QRect(260, 350, 171, 23));
        eval360->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"	font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 7pt \"Nexa Rust Sans Black 01\";\n"
"    background-color: rgb(51, 50, 50);\n"
"background:  rgb(51, 50, 50);\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}\n"
""));
        id = new QLineEdit(groupBox_21);
        id->setObjectName(QString::fromUtf8("id"));
        id->setGeometry(QRect(280, 380, 113, 20));
        tabWidget_6->addTab(tab_11, QString());
        ajouter_reclam = new QWidget();
        ajouter_reclam->setObjectName(QString::fromUtf8("ajouter_reclam"));
        label_62 = new QLabel(ajouter_reclam);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        label_62->setGeometry(QRect(290, 40, 211, 20));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        label_62->setFont(font1);
        label_63 = new QLabel(ajouter_reclam);
        label_63->setObjectName(QString::fromUtf8("label_63"));
        label_63->setGeometry(QRect(510, 40, 191, 16));
        label_63->setFont(font1);
        label_64 = new QLabel(ajouter_reclam);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        label_64->setGeometry(QRect(710, 40, 201, 20));
        label_64->setFont(font1);
        label_65 = new QLabel(ajouter_reclam);
        label_65->setObjectName(QString::fromUtf8("label_65"));
        label_65->setGeometry(QRect(0, 60, 121, 16));
        QPalette palette;
        QBrush brush(QColor(170, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush2(QColor(170, 0, 0, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush4(QColor(0, 0, 0, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        label_65->setPalette(palette);
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label_65->setFont(font2);
        label_66 = new QLabel(ajouter_reclam);
        label_66->setObjectName(QString::fromUtf8("label_66"));
        label_66->setGeometry(QRect(0, 80, 151, 16));
        QFont font3;
        font3.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        label_66->setFont(font3);
        label_67 = new QLabel(ajouter_reclam);
        label_67->setObjectName(QString::fromUtf8("label_67"));
        label_67->setGeometry(QRect(0, 100, 151, 16));
        label_67->setFont(font3);
        label_68 = new QLabel(ajouter_reclam);
        label_68->setObjectName(QString::fromUtf8("label_68"));
        label_68->setGeometry(QRect(0, 180, 71, 16));
        label_68->setFont(font1);
        label_69 = new QLabel(ajouter_reclam);
        label_69->setObjectName(QString::fromUtf8("label_69"));
        label_69->setGeometry(QRect(0, 120, 91, 16));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        label_69->setPalette(palette1);
        label_69->setFont(font2);
        label_70 = new QLabel(ajouter_reclam);
        label_70->setObjectName(QString::fromUtf8("label_70"));
        label_70->setGeometry(QRect(0, 140, 141, 16));
        label_70->setFont(font1);
        label_71 = new QLabel(ajouter_reclam);
        label_71->setObjectName(QString::fromUtf8("label_71"));
        label_71->setGeometry(QRect(0, 160, 91, 16));
        label_71->setFont(font1);
        label_72 = new QLabel(ajouter_reclam);
        label_72->setObjectName(QString::fromUtf8("label_72"));
        label_72->setGeometry(QRect(0, 200, 101, 16));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label_72->setPalette(palette2);
        label_72->setFont(font2);
        label_73 = new QLabel(ajouter_reclam);
        label_73->setObjectName(QString::fromUtf8("label_73"));
        label_73->setGeometry(QRect(0, 220, 321, 16));
        QFont font4;
        font4.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font4.setPointSize(8);
        font4.setBold(true);
        font4.setWeight(75);
        label_73->setFont(font4);
        label_74 = new QLabel(ajouter_reclam);
        label_74->setObjectName(QString::fromUtf8("label_74"));
        label_74->setGeometry(QRect(0, 240, 241, 16));
        QFont font5;
        font5.setPointSize(8);
        font5.setBold(true);
        font5.setWeight(75);
        label_74->setFont(font5);
        label_75 = new QLabel(ajouter_reclam);
        label_75->setObjectName(QString::fromUtf8("label_75"));
        label_75->setGeometry(QRect(0, 260, 241, 16));
        label_75->setFont(font1);
        pushButton_2 = new QPushButton(ajouter_reclam);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(690, 350, 201, 21));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"	font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 7pt \"Nexa Rust Sans Black 01\";\n"
"    background-color: rgb(51, 50, 50);\n"
"background:  rgb(51, 50, 50);\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../ghof/premiereapp1/ressource/icons8-coche-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        horizontalLayoutWidget = new QWidget(ajouter_reclam);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(290, 100, 621, 21));
        horizontalLayout_17 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        moyenneperf2_3 = new QRadioButton(horizontalLayoutWidget);
        moyenneperf2_3->setObjectName(QString::fromUtf8("moyenneperf2_3"));

        horizontalLayout_17->addWidget(moyenneperf2_3);

        excelperf2 = new QRadioButton(horizontalLayoutWidget);
        excelperf2->setObjectName(QString::fromUtf8("excelperf2"));

        horizontalLayout_17->addWidget(excelperf2);

        faibleperf2_3 = new QRadioButton(horizontalLayoutWidget);
        faibleperf2_3->setObjectName(QString::fromUtf8("faibleperf2_3"));

        horizontalLayout_17->addWidget(faibleperf2_3);

        horizontalLayoutWidget_2 = new QWidget(ajouter_reclam);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(290, 80, 621, 20));
        horizontalLayout_18 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        faibleperf1_3 = new QRadioButton(horizontalLayoutWidget_2);
        faibleperf1_3->setObjectName(QString::fromUtf8("faibleperf1_3"));

        horizontalLayout_18->addWidget(faibleperf1_3);

        moyenneperf1_3 = new QRadioButton(horizontalLayoutWidget_2);
        moyenneperf1_3->setObjectName(QString::fromUtf8("moyenneperf1_3"));

        horizontalLayout_18->addWidget(moyenneperf1_3);

        excelperf1_3 = new QRadioButton(horizontalLayoutWidget_2);
        excelperf1_3->setObjectName(QString::fromUtf8("excelperf1_3"));

        horizontalLayout_18->addWidget(excelperf1_3);

        horizontalLayoutWidget_3 = new QWidget(ajouter_reclam);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(290, 140, 621, 21));
        horizontalLayout_19 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        faiblefiab1_3 = new QRadioButton(horizontalLayoutWidget_3);
        faiblefiab1_3->setObjectName(QString::fromUtf8("faiblefiab1_3"));

        horizontalLayout_19->addWidget(faiblefiab1_3);

        moyennefiab2 = new QRadioButton(horizontalLayoutWidget_3);
        moyennefiab2->setObjectName(QString::fromUtf8("moyennefiab2"));

        horizontalLayout_19->addWidget(moyennefiab2);

        excelfiab1_3 = new QRadioButton(horizontalLayoutWidget_3);
        excelfiab1_3->setObjectName(QString::fromUtf8("excelfiab1_3"));

        horizontalLayout_19->addWidget(excelfiab1_3);

        horizontalLayoutWidget_4 = new QWidget(ajouter_reclam);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(290, 160, 621, 21));
        horizontalLayout_20 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        faiblefiab2 = new QRadioButton(horizontalLayoutWidget_4);
        faiblefiab2->setObjectName(QString::fromUtf8("faiblefiab2"));

        horizontalLayout_20->addWidget(faiblefiab2);

        moyennefiab2_2 = new QRadioButton(horizontalLayoutWidget_4);
        moyennefiab2_2->setObjectName(QString::fromUtf8("moyennefiab2_2"));

        horizontalLayout_20->addWidget(moyennefiab2_2);

        excelfiab2_3 = new QRadioButton(horizontalLayoutWidget_4);
        excelfiab2_3->setObjectName(QString::fromUtf8("excelfiab2_3"));

        horizontalLayout_20->addWidget(excelfiab2_3);

        horizontalLayoutWidget_5 = new QWidget(ajouter_reclam);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(290, 180, 621, 21));
        horizontalLayout_21 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        faiblefiab3 = new QRadioButton(horizontalLayoutWidget_5);
        faiblefiab3->setObjectName(QString::fromUtf8("faiblefiab3"));

        horizontalLayout_21->addWidget(faiblefiab3);

        moyennefiab3 = new QRadioButton(horizontalLayoutWidget_5);
        moyennefiab3->setObjectName(QString::fromUtf8("moyennefiab3"));

        horizontalLayout_21->addWidget(moyennefiab3);

        excelfiab3 = new QRadioButton(horizontalLayoutWidget_5);
        excelfiab3->setObjectName(QString::fromUtf8("excelfiab3"));

        horizontalLayout_21->addWidget(excelfiab3);

        horizontalLayoutWidget_6 = new QWidget(ajouter_reclam);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(290, 220, 621, 21));
        horizontalLayout_22 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(0, 0, 0, 0);
        faibleauto1_3 = new QRadioButton(horizontalLayoutWidget_6);
        faibleauto1_3->setObjectName(QString::fromUtf8("faibleauto1_3"));

        horizontalLayout_22->addWidget(faibleauto1_3);

        moyenneauto1 = new QRadioButton(horizontalLayoutWidget_6);
        moyenneauto1->setObjectName(QString::fromUtf8("moyenneauto1"));
        moyenneauto1->setChecked(false);

        horizontalLayout_22->addWidget(moyenneauto1);

        excelauto1_3 = new QRadioButton(horizontalLayoutWidget_6);
        excelauto1_3->setObjectName(QString::fromUtf8("excelauto1_3"));

        horizontalLayout_22->addWidget(excelauto1_3);

        horizontalLayoutWidget_7 = new QWidget(ajouter_reclam);
        horizontalLayoutWidget_7->setObjectName(QString::fromUtf8("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(290, 240, 621, 21));
        horizontalLayout_23 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(0, 0, 0, 0);
        faibleauto2_3 = new QRadioButton(horizontalLayoutWidget_7);
        faibleauto2_3->setObjectName(QString::fromUtf8("faibleauto2_3"));

        horizontalLayout_23->addWidget(faibleauto2_3);

        moyenneauto2 = new QRadioButton(horizontalLayoutWidget_7);
        moyenneauto2->setObjectName(QString::fromUtf8("moyenneauto2"));

        horizontalLayout_23->addWidget(moyenneauto2);

        excelauto2_3 = new QRadioButton(horizontalLayoutWidget_7);
        excelauto2_3->setObjectName(QString::fromUtf8("excelauto2_3"));
        excelauto2_3->setCheckable(true);
        excelauto2_3->setChecked(false);

        horizontalLayout_23->addWidget(excelauto2_3);

        horizontalLayoutWidget_8 = new QWidget(ajouter_reclam);
        horizontalLayoutWidget_8->setObjectName(QString::fromUtf8("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(290, 260, 621, 21));
        horizontalLayout_24 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        horizontalLayout_24->setContentsMargins(0, 0, 0, 0);
        faibleauto3_3 = new QRadioButton(horizontalLayoutWidget_8);
        faibleauto3_3->setObjectName(QString::fromUtf8("faibleauto3_3"));

        horizontalLayout_24->addWidget(faibleauto3_3);

        moyenneauto3 = new QRadioButton(horizontalLayoutWidget_8);
        moyenneauto3->setObjectName(QString::fromUtf8("moyenneauto3"));

        horizontalLayout_24->addWidget(moyenneauto3);

        excelauto3_3 = new QRadioButton(horizontalLayoutWidget_8);
        excelauto3_3->setObjectName(QString::fromUtf8("excelauto3_3"));

        horizontalLayout_24->addWidget(excelauto3_3);

        cin1 = new QLineEdit(ajouter_reclam);
        cin1->setObjectName(QString::fromUtf8("cin1"));
        cin1->setGeometry(QRect(300, 340, 201, 20));
        cin1->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: white;\n"
"selection-background-color: gray;"));
        commentaire = new QTextEdit(ajouter_reclam);
        commentaire->setObjectName(QString::fromUtf8("commentaire"));
        commentaire->setGeometry(QRect(290, 290, 621, 41));
        commentaire->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: white;\n"
"selection-background-color: gray;"));
        label_76 = new QLabel(ajouter_reclam);
        label_76->setObjectName(QString::fromUtf8("label_76"));
        label_76->setGeometry(QRect(90, 300, 101, 16));
        QFont font6;
        font6.setPointSize(10);
        font6.setBold(true);
        font6.setWeight(75);
        label_76->setFont(font6);
        label_77 = new QLabel(ajouter_reclam);
        label_77->setObjectName(QString::fromUtf8("label_77"));
        label_77->setGeometry(QRect(90, 340, 91, 16));
        label_77->setFont(font6);
        send = new QLabel(ajouter_reclam);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(340, 410, 101, 16));
        send->setFont(font6);
        groupBox_20 = new QGroupBox(ajouter_reclam);
        groupBox_20->setObjectName(QString::fromUtf8("groupBox_20"));
        groupBox_20->setGeometry(QRect(-20, 0, 1141, 471));
        groupBox_20->setStyleSheet(QString::fromUtf8("\n"
"QGroupBox  {\n"
"    border: 1px solid;\n"
"    \n"
"  \n"
"    border-radius: 20px;\n"
"}"));
        label_redEq_12 = new QLabel(groupBox_20);
        label_redEq_12->setObjectName(QString::fromUtf8("label_redEq_12"));
        label_redEq_12->setGeometry(QRect(0, -5, 971, 41));
        label_redEq_12->setStyleSheet(QString::fromUtf8("color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:20px;"));
        label_AjEq_12 = new QLabel(groupBox_20);
        label_AjEq_12->setObjectName(QString::fromUtf8("label_AjEq_12"));
        label_AjEq_12->setGeometry(QRect(350, 10, 211, 21));
        label_AjEq_12->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 10pt \"Nexa Rust Sans Black 01\";\n"
"background:#b20837;\n"
"border-radius:10px;"));
        label = new QLabel(groupBox_20);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 370, 111, 16));
        label->setFont(font6);
        email = new QLineEdit(groupBox_20);
        email->setObjectName(QString::fromUtf8("email"));
        email->setGeometry(QRect(320, 370, 201, 20));
        email->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: white;\n"
"selection-background-color: gray;"));
        anim = new QPushButton(groupBox_20);
        anim->setObjectName(QString::fromUtf8("anim"));
        anim->setGeometry(QRect(710, 380, 201, 20));
        anim->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"	font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 7pt \"Nexa Rust Sans Black 01\";\n"
"    background-color: rgb(51, 50, 50);\n"
"background:  rgb(51, 50, 50);\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}\n"
""));
        tabWidget_6->addTab(ajouter_reclam, QString());
        groupBox_20->raise();
        label_62->raise();
        label_63->raise();
        label_64->raise();
        label_65->raise();
        label_66->raise();
        label_67->raise();
        label_68->raise();
        label_69->raise();
        label_70->raise();
        label_71->raise();
        label_72->raise();
        label_73->raise();
        label_74->raise();
        label_75->raise();
        pushButton_2->raise();
        horizontalLayoutWidget->raise();
        horizontalLayoutWidget_2->raise();
        horizontalLayoutWidget_3->raise();
        horizontalLayoutWidget_4->raise();
        horizontalLayoutWidget_5->raise();
        horizontalLayoutWidget_6->raise();
        horizontalLayoutWidget_7->raise();
        horizontalLayoutWidget_8->raise();
        cin1->raise();
        commentaire->raise();
        label_76->raise();
        label_77->raise();
        send->raise();
        consulter_reclam = new QWidget();
        consulter_reclam->setObjectName(QString::fromUtf8("consulter_reclam"));
        groupBox_19 = new QGroupBox(consulter_reclam);
        groupBox_19->setObjectName(QString::fromUtf8("groupBox_19"));
        groupBox_19->setGeometry(QRect(0, 0, 941, 481));
        groupBox_19->setStyleSheet(QString::fromUtf8("\n"
"QGroupBox  {\n"
"    border: 1px solid;\n"
"    \n"
"  \n"
"    border-radius: 20px;\n"
"}"));
        label_redEq_11 = new QLabel(groupBox_19);
        label_redEq_11->setObjectName(QString::fromUtf8("label_redEq_11"));
        label_redEq_11->setGeometry(QRect(0, 0, 941, 41));
        label_redEq_11->setStyleSheet(QString::fromUtf8("color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:20px;"));
        label_RedEq2_11 = new QLabel(groupBox_19);
        label_RedEq2_11->setObjectName(QString::fromUtf8("label_RedEq2_11"));
        label_RedEq2_11->setGeometry(QRect(0, 0, 51, 461));
        label_RedEq2_11->setStyleSheet(QString::fromUtf8("color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:20px;"));
        label_AjEq_11 = new QLabel(groupBox_19);
        label_AjEq_11->setObjectName(QString::fromUtf8("label_AjEq_11"));
        label_AjEq_11->setGeometry(QRect(350, 10, 211, 21));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Nexa Rust Sans Black 01"));
        font7.setPointSize(10);
        font7.setBold(false);
        font7.setItalic(false);
        font7.setWeight(10);
        label_AjEq_11->setFont(font7);
        label_AjEq_11->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 10pt \"Nexa Rust Sans Black 01\";\n"
"background:#b20837;\n"
"border-radius:10px;"));
        tableView_2 = new QTableView(groupBox_19);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(70, 70, 711, 151));
        tableView_2->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: white;\n"
"selection-background-color: gray;\n"
""));
        groupBox = new QGroupBox(groupBox_19);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(60, 230, 711, 171));
        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(120, 20, 291, 20));
        lineEdit_6->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: white;\n"
"selection-background-color: gray;"));
        label_78 = new QLabel(groupBox);
        label_78->setObjectName(QString::fromUtf8("label_78"));
        label_78->setGeometry(QRect(20, 20, 81, 20));
        label_78->setFont(font1);
        commentaire_2 = new QTextEdit(groupBox);
        commentaire_2->setObjectName(QString::fromUtf8("commentaire_2"));
        commentaire_2->setGeometry(QRect(120, 50, 291, 71));
        commentaire_2->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: white;\n"
"selection-background-color: gray;"));
        label_79 = new QLabel(groupBox);
        label_79->setObjectName(QString::fromUtf8("label_79"));
        label_79->setGeometry(QRect(20, 70, 81, 20));
        label_79->setFont(font1);
        dateEdit = new QLineEdit(groupBox);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(120, 140, 291, 20));
        dateEdit->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: white;\n"
"selection-background-color: gray;"));
        label_80 = new QLabel(groupBox);
        label_80->setObjectName(QString::fromUtf8("label_80"));
        label_80->setGeometry(QRect(10, 140, 101, 20));
        label_80->setFont(font1);
        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(480, 100, 141, 31));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"	font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 7pt \"Nexa Rust Sans Black 01\";\n"
"    background-color: rgb(51, 50, 50);\n"
"background:  rgb(51, 50, 50);\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../ghof/premiereapp1/ressource/icons8-modifier-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon1);
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(480, 50, 141, 31));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"	font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 7pt \"Nexa Rust Sans Black 01\";\n"
"    background-color: rgb(51, 50, 50);\n"
"background:  rgb(51, 50, 50);\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../ghof/premiereapp1/ressource/icons8-effacer-26.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon2);
        listeeval = new QPushButton(groupBox_19);
        listeeval->setObjectName(QString::fromUtf8("listeeval"));
        listeeval->setGeometry(QRect(810, 70, 111, 23));
        listeeval->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"	font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 7pt \"Nexa Rust Sans Black 01\";\n"
"    background-color: rgb(51, 50, 50);\n"
"background:  rgb(51, 50, 50);\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}\n"
""));
        trie = new QPushButton(groupBox_19);
        trie->setObjectName(QString::fromUtf8("trie"));
        trie->setGeometry(QRect(810, 100, 111, 23));
        trie->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"	font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 7pt \"Nexa Rust Sans Black 01\";\n"
"    background-color: rgb(51, 50, 50);\n"
"background:  rgb(51, 50, 50);\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}\n"
""));
        trie1 = new QPushButton(groupBox_19);
        trie1->setObjectName(QString::fromUtf8("trie1"));
        trie1->setGeometry(QRect(814, 130, 111, 23));
        trie1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"	font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 7pt \"Nexa Rust Sans Black 01\";\n"
"    background-color: rgb(51, 50, 50);\n"
"background:  rgb(51, 50, 50);\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}\n"
""));
        trie2 = new QPushButton(groupBox_19);
        trie2->setObjectName(QString::fromUtf8("trie2"));
        trie2->setGeometry(QRect(814, 160, 111, 23));
        trie2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"	font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 7pt \"Nexa Rust Sans Black 01\";\n"
"    background-color: rgb(51, 50, 50);\n"
"background:  rgb(51, 50, 50);\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}\n"
""));
        groupBox->raise();
        label_redEq_11->raise();
        label_RedEq2_11->raise();
        label_AjEq_11->raise();
        tableView_2->raise();
        listeeval->raise();
        trie->raise();
        trie1->raise();
        trie2->raise();
        tabWidget_6->addTab(consulter_reclam, QString());
        tabWidget_5->addTab(tab_10, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QString::fromUtf8("tab_12"));
        groupBox_22 = new QGroupBox(tab_12);
        groupBox_22->setObjectName(QString::fromUtf8("groupBox_22"));
        groupBox_22->setGeometry(QRect(40, -10, 941, 481));
        groupBox_22->setStyleSheet(QString::fromUtf8("\n"
"QGroupBox  {\n"
"    border: 1px solid;\n"
"    \n"
"  \n"
"    border-radius: 20px;\n"
"}"));
        label_redEq_14 = new QLabel(groupBox_22);
        label_redEq_14->setObjectName(QString::fromUtf8("label_redEq_14"));
        label_redEq_14->setGeometry(QRect(0, -5, 941, 51));
        label_redEq_14->setStyleSheet(QString::fromUtf8("color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:20px;"));
        label_RedEq2_13 = new QLabel(groupBox_22);
        label_RedEq2_13->setObjectName(QString::fromUtf8("label_RedEq2_13"));
        label_RedEq2_13->setGeometry(QRect(0, 0, 51, 471));
        label_RedEq2_13->setStyleSheet(QString::fromUtf8("color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:20px;"));
        label_AjEq_14 = new QLabel(groupBox_22);
        label_AjEq_14->setObjectName(QString::fromUtf8("label_AjEq_14"));
        label_AjEq_14->setGeometry(QRect(380, 10, 211, 21));
        label_AjEq_14->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 10pt \"Nexa Rust Sans Black 01\";\n"
"background:#b20837;\n"
"border-radius:10px;"));
        afficher_reclam = new QPushButton(groupBox_22);
        afficher_reclam->setObjectName(QString::fromUtf8("afficher_reclam"));
        afficher_reclam->setGeometry(QRect(460, 310, 221, 23));
        afficher_reclam->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"	font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 7pt \"Nexa Rust Sans Black 01\";\n"
"    background-color: rgb(51, 50, 50);\n"
"background:  rgb(51, 50, 50);\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}\n"
""));
        id_reclam = new QLineEdit(groupBox_22);
        id_reclam->setObjectName(QString::fromUtf8("id_reclam"));
        id_reclam->setGeometry(QRect(720, 180, 161, 20));
        id_reclam->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: white;\n"
"selection-background-color: gray;"));
        affichagereclam = new QTableView(groupBox_22);
        affichagereclam->setObjectName(QString::fromUtf8("affichagereclam"));
        affichagereclam->setGeometry(QRect(70, 100, 621, 201));
        affichagereclam->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: white;\n"
"selection-background-color: gray;\n"
""));
        label_81 = new QLabel(groupBox_22);
        label_81->setObjectName(QString::fromUtf8("label_81"));
        label_81->setGeometry(QRect(750, 150, 111, 20));
        label_81->setFont(font1);
        groupBox_2 = new QGroupBox(groupBox_22);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(710, 110, 181, 121));
        QFont font8;
        font8.setBold(true);
        font8.setWeight(75);
        groupBox_2->setFont(font8);
        traiter = new QPushButton(groupBox_22);
        traiter->setObjectName(QString::fromUtf8("traiter"));
        traiter->setGeometry(QRect(750, 250, 111, 23));
        traiter->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"	font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 7pt \"Nexa Rust Sans Black 01\";\n"
"    background-color: rgb(51, 50, 50);\n"
"background:  rgb(51, 50, 50);\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}\n"
""));
        stat = new QPushButton(groupBox_22);
        stat->setObjectName(QString::fromUtf8("stat"));
        stat->setGeometry(QRect(170, 310, 161, 23));
        stat->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    color:white;\n"
"	font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 7pt \"Nexa Rust Sans Black 01\";\n"
"    background-color: rgb(51, 50, 50);\n"
"background:  rgb(51, 50, 50);\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:10px;\n"
"}\n"
""));
        rech = new QLineEdit(groupBox_22);
        rech->setObjectName(QString::fromUtf8("rech"));
        rech->setGeometry(QRect(260, 60, 113, 20));
        recherche = new QPushButton(groupBox_22);
        recherche->setObjectName(QString::fromUtf8("recherche"));
        recherche->setGeometry(QRect(400, 60, 75, 23));
        tabWidget_5->addTab(tab_12, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1185, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget_5->setCurrentIndex(0);
        tabWidget_6->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_21->setTitle(QString());
        label_redEq_13->setText(QString());
        label_RedEq2_12->setText(QString());
        label_AjEq_13->setText(QCoreApplication::translate("MainWindow", "liste des employees", nullptr));
        affichageemployee->setText(QCoreApplication::translate("MainWindow", "afficher liste des employees", nullptr));
        eval360->setText(QCoreApplication::translate("MainWindow", "ajouter au liste des evaluations", nullptr));
        tabWidget_6->setTabText(tabWidget_6->indexOf(tab_11), QCoreApplication::translate("MainWindow", "liste employee", nullptr));
        label_62->setText(QCoreApplication::translate("MainWindow", "AU DESSOUS DU NIVEAU ATTENDU", nullptr));
        label_63->setText(QCoreApplication::translate("MainWindow", "ATTEINTE DU NIVEAU ATTENDU", nullptr));
        label_64->setText(QCoreApplication::translate("MainWindow", "AU DESSUS DU NIVEAU ATTENDU", nullptr));
        label_65->setText(QCoreApplication::translate("MainWindow", "PERFORMANCE", nullptr));
        label_66->setText(QCoreApplication::translate("MainWindow", "qualit\303\251 du travail fourni", nullptr));
        label_67->setText(QCoreApplication::translate("MainWindow", "qualit\303\251 du travail produit", nullptr));
        label_68->setText(QCoreApplication::translate("MainWindow", "int\303\251grit\303\251", nullptr));
        label_69->setText(QCoreApplication::translate("MainWindow", "discipline", nullptr));
        label_70->setText(QCoreApplication::translate("MainWindow", "respet des deadlines", nullptr));
        label_71->setText(QCoreApplication::translate("MainWindow", "ponctualit\303\251", nullptr));
        label_72->setText(QCoreApplication::translate("MainWindow", "AUTONOMIE", nullptr));
        label_73->setText(QCoreApplication::translate("MainWindow", "capacit\303\251 \303\240 travailler dune mani\303\251re independence", nullptr));
        label_74->setText(QCoreApplication::translate("MainWindow", "capacit\303\251 de resolution du probl\303\251me", nullptr));
        label_75->setText(QCoreApplication::translate("MainWindow", "capacit\303\251 de faire face \303\240 des imprevus", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "evaluer", nullptr));
        moyenneperf2_3->setText(QString());
        excelperf2->setText(QString());
        faibleperf2_3->setText(QString());
        faibleperf1_3->setText(QString());
        moyenneperf1_3->setText(QString());
        excelperf1_3->setText(QString());
        faiblefiab1_3->setText(QString());
        moyennefiab2->setText(QString());
        excelfiab1_3->setText(QString());
        faiblefiab2->setText(QString());
        moyennefiab2_2->setText(QString());
        excelfiab2_3->setText(QString());
        faiblefiab3->setText(QString());
        moyennefiab3->setText(QString());
        excelfiab3->setText(QString());
        faibleauto1_3->setText(QString());
        moyenneauto1->setText(QString());
        excelauto1_3->setText(QString());
        faibleauto2_3->setText(QString());
        moyenneauto2->setText(QString());
        excelauto2_3->setText(QString());
        faibleauto3_3->setText(QString());
        moyenneauto3->setText(QString());
        excelauto3_3->setText(QString());
        cin1->setPlaceholderText(QCoreApplication::translate("MainWindow", "cin..", nullptr));
        commentaire->setPlaceholderText(QCoreApplication::translate("MainWindow", "commentaire..", nullptr));
        label_76->setText(QCoreApplication::translate("MainWindow", "commentaire", nullptr));
        label_77->setText(QCoreApplication::translate("MainWindow", "cin employee", nullptr));
        send->setText(QString());
        groupBox_20->setTitle(QString());
        label_redEq_12->setText(QString());
        label_AjEq_12->setText(QCoreApplication::translate("MainWindow", "Ajouter Evaluation", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Email employee", nullptr));
        email->setText(QString());
        email->setPlaceholderText(QCoreApplication::translate("MainWindow", "email", nullptr));
        anim->setText(QString());
        tabWidget_6->setTabText(tabWidget_6->indexOf(ajouter_reclam), QCoreApplication::translate("MainWindow", "ajouter", nullptr));
        groupBox_19->setTitle(QString());
        label_redEq_11->setText(QString());
        label_RedEq2_11->setText(QString());
        label_AjEq_11->setText(QCoreApplication::translate("MainWindow", "consulter les evaluations", nullptr));
        groupBox->setTitle(QString());
        lineEdit_6->setPlaceholderText(QCoreApplication::translate("MainWindow", "id..", nullptr));
        label_78->setText(QCoreApplication::translate("MainWindow", "id evaluation", nullptr));
        commentaire_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "commentaire..", nullptr));
        label_79->setText(QCoreApplication::translate("MainWindow", "commentaire", nullptr));
        dateEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "date eval..", nullptr));
        label_80->setText(QCoreApplication::translate("MainWindow", "date evaluation", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "modifier", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "supprimer", nullptr));
        listeeval->setText(QCoreApplication::translate("MainWindow", "liste des evaluations", nullptr));
        trie->setText(QCoreApplication::translate("MainWindow", "trie par discipline", nullptr));
        trie1->setText(QCoreApplication::translate("MainWindow", "trie par autonomie", nullptr));
        trie2->setText(QCoreApplication::translate("MainWindow", "trie par performance", nullptr));
        tabWidget_6->setTabText(tabWidget_6->indexOf(consulter_reclam), QCoreApplication::translate("MainWindow", "consulter", nullptr));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_10), QCoreApplication::translate("MainWindow", "evaluation", nullptr));
        groupBox_22->setTitle(QString());
        label_redEq_14->setText(QString());
        label_RedEq2_13->setText(QString());
        label_AjEq_14->setText(QCoreApplication::translate("MainWindow", "liste des reclamations", nullptr));
        afficher_reclam->setText(QCoreApplication::translate("MainWindow", "afficher listes des reclamations", nullptr));
        label_81->setText(QCoreApplication::translate("MainWindow", "Id reclamation", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Traitement des reclamations", nullptr));
        traiter->setText(QCoreApplication::translate("MainWindow", "traiter", nullptr));
        stat->setText(QCoreApplication::translate("MainWindow", "statistique", nullptr));
        recherche->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_12), QCoreApplication::translate("MainWindow", "reclamation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
