/********************************************************************************
** Form generated from reading UI file 'billsmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILLSMANAGER_H
#define UI_BILLSMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BillsManagerClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QGridLayout *gridLayout;
    QPushButton *btnSort;
    QFormLayout *formLayout;
    QLabel *labelPaid;
    QLabel *labelSum;
    QLabel *labelSerial;
    QLabel *labelCompany;
    QLineEdit *lineEditCompany;
    QLineEdit *lineEditSerial;
    QLineEdit *lineEditSum;
    QLineEdit *lineEditPaid;
    QPushButton *btnTotal;
    QLabel *labelTotalSum;

    void setupUi(QWidget *BillsManagerClass)
    {
        if (BillsManagerClass->objectName().isEmpty())
            BillsManagerClass->setObjectName(QStringLiteral("BillsManagerClass"));
        BillsManagerClass->resize(596, 400);
        verticalLayout_2 = new QVBoxLayout(BillsManagerClass);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget = new QListWidget(BillsManagerClass);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btnSort = new QPushButton(BillsManagerClass);
        btnSort->setObjectName(QStringLiteral("btnSort"));

        gridLayout->addWidget(btnSort, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        labelPaid = new QLabel(BillsManagerClass);
        labelPaid->setObjectName(QStringLiteral("labelPaid"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelPaid);

        labelSum = new QLabel(BillsManagerClass);
        labelSum->setObjectName(QStringLiteral("labelSum"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelSum);

        labelSerial = new QLabel(BillsManagerClass);
        labelSerial->setObjectName(QStringLiteral("labelSerial"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelSerial);

        labelCompany = new QLabel(BillsManagerClass);
        labelCompany->setObjectName(QStringLiteral("labelCompany"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelCompany);

        lineEditCompany = new QLineEdit(BillsManagerClass);
        lineEditCompany->setObjectName(QStringLiteral("lineEditCompany"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditCompany);

        lineEditSerial = new QLineEdit(BillsManagerClass);
        lineEditSerial->setObjectName(QStringLiteral("lineEditSerial"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditSerial);

        lineEditSum = new QLineEdit(BillsManagerClass);
        lineEditSum->setObjectName(QStringLiteral("lineEditSum"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditSum);

        lineEditPaid = new QLineEdit(BillsManagerClass);
        lineEditPaid->setObjectName(QStringLiteral("lineEditPaid"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditPaid);


        verticalLayout->addLayout(formLayout);

        btnTotal = new QPushButton(BillsManagerClass);
        btnTotal->setObjectName(QStringLiteral("btnTotal"));

        verticalLayout->addWidget(btnTotal);

        labelTotalSum = new QLabel(BillsManagerClass);
        labelTotalSum->setObjectName(QStringLiteral("labelTotalSum"));

        verticalLayout->addWidget(labelTotalSum);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(BillsManagerClass);

        QMetaObject::connectSlotsByName(BillsManagerClass);
    } // setupUi

    void retranslateUi(QWidget *BillsManagerClass)
    {
        BillsManagerClass->setWindowTitle(QApplication::translate("BillsManagerClass", "BillsManager", 0));
        btnSort->setText(QApplication::translate("BillsManagerClass", "Sort", 0));
        labelPaid->setText(QApplication::translate("BillsManagerClass", "Paid:", 0));
        labelSum->setText(QApplication::translate("BillsManagerClass", "Sum:", 0));
        labelSerial->setText(QApplication::translate("BillsManagerClass", "Serial no.:", 0));
        labelCompany->setText(QApplication::translate("BillsManagerClass", "Company:", 0));
        btnTotal->setText(QApplication::translate("BillsManagerClass", "Compute total", 0));
        labelTotalSum->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BillsManagerClass: public Ui_BillsManagerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILLSMANAGER_H
