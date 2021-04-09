/********************************************************************************
** Form generated from reading UI file 'stati.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATI_H
#define UI_STATI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_stati
{
public:
    QLabel *label_RedEq2_4;
    QLabel *label_AjEq_5;
    QLabel *label_redEq_5;
    qcustomplot *customPlot;

    void setupUi(QDialog *stati)
    {
        if (stati->objectName().isEmpty())
            stati->setObjectName(QStringLiteral("stati"));
        stati->resize(809, 478);
        stati->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_RedEq2_4 = new QLabel(stati);
        label_RedEq2_4->setObjectName(QStringLiteral("label_RedEq2_4"));
        label_RedEq2_4->setGeometry(QRect(0, 0, 31, 481));
        label_RedEq2_4->setStyleSheet(QLatin1String("color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:20px;"));
        label_AjEq_5 = new QLabel(stati);
        label_AjEq_5->setObjectName(QStringLiteral("label_AjEq_5"));
        label_AjEq_5->setGeometry(QRect(360, 0, 221, 21));
        label_AjEq_5->setStyleSheet(QLatin1String("color:white;\n"
"font: 75 10pt \"Source Code Pro\";\n"
"	font: 87 8pt \"Nexa Rust Sans Black 01\";\n"
"background:#b20837;\n"
"border-radius:10px;"));
        label_redEq_5 = new QLabel(stati);
        label_redEq_5->setObjectName(QStringLiteral("label_redEq_5"));
        label_redEq_5->setGeometry(QRect(0, 0, 811, 31));
        label_redEq_5->setStyleSheet(QLatin1String("color:white;\n"
"\n"
"background:#b20837;\n"
"border-radius:20px;"));
        customPlot = new qcustomplot(stati);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(30, 40, 771, 431));
        label_RedEq2_4->raise();
        label_redEq_5->raise();
        label_AjEq_5->raise();
        customPlot->raise();

        retranslateUi(stati);

        QMetaObject::connectSlotsByName(stati);
    } // setupUi

    void retranslateUi(QDialog *stati)
    {
        stati->setWindowTitle(QApplication::translate("stati", "Dialog", Q_NULLPTR));
        label_RedEq2_4->setText(QString());
        label_AjEq_5->setText(QApplication::translate("stati", "STATISTIQUE", Q_NULLPTR));
        label_redEq_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class stati: public Ui_stati {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATI_H
