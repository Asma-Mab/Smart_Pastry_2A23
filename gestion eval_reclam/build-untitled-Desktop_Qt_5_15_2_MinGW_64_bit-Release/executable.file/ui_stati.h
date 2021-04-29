/********************************************************************************
** Form generated from reading UI file 'stati.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATI_H
#define UI_STATI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stati
{
public:
    QLabel *label_2;
    QWidget *widget;
    QPushButton *pushButton;
    QWidget *widget_2;
    QLabel *label;

    void setupUi(QDialog *stati)
    {
        if (stati->objectName().isEmpty())
            stati->setObjectName(QString::fromUtf8("stati"));
        stati->resize(400, 300);
        label_2 = new QLabel(stati);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 250, 71, 16));
        widget = new QWidget(stati);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(260, 250, 21, 21));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        QBrush brush1(QColor(255, 85, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        QBrush brush2(QColor(240, 240, 240, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        widget->setPalette(palette);
        pushButton = new QPushButton(stati);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 250, 75, 23));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        widget_2 = new QWidget(stati);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(260, 220, 21, 21));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush);
        QBrush brush3(QColor(255, 0, 0, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        widget_2->setPalette(palette1);
        label = new QLabel(stati);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 220, 47, 13));

        retranslateUi(stati);

        QMetaObject::connectSlotsByName(stati);
    } // setupUi

    void retranslateUi(QDialog *stati)
    {
        stati->setWindowTitle(QCoreApplication::translate("stati", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("stati", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("stati", "fermer", nullptr));
        label->setText(QCoreApplication::translate("stati", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stati: public Ui_stati {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATI_H
