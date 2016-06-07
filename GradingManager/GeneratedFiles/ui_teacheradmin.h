/********************************************************************************
** Form generated from reading UI file 'teacheradmin.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERADMIN_H
#define UI_TEACHERADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeacherAdmin
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QListWidget *listStudents;
    QGridLayout *gridLayout;
    QLabel *labelGroup;
    QLabel *labelId;
    QLabel *labelName;
    QLineEdit *lineEditGroup;
    QLineEdit *lineEditId;
    QLineEdit *lineEditName;
    QPushButton *buttonAdd;
    QPushButton *buttonRemove;

    void setupUi(QWidget *TeacherAdmin)
    {
        if (TeacherAdmin->objectName().isEmpty())
            TeacherAdmin->setObjectName(QStringLiteral("TeacherAdmin"));
        TeacherAdmin->resize(589, 402);
        verticalLayout_2 = new QVBoxLayout(TeacherAdmin);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listStudents = new QListWidget(TeacherAdmin);
        listStudents->setObjectName(QStringLiteral("listStudents"));

        verticalLayout->addWidget(listStudents);


        verticalLayout_2->addLayout(verticalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelGroup = new QLabel(TeacherAdmin);
        labelGroup->setObjectName(QStringLiteral("labelGroup"));

        gridLayout->addWidget(labelGroup, 2, 0, 1, 1);

        labelId = new QLabel(TeacherAdmin);
        labelId->setObjectName(QStringLiteral("labelId"));

        gridLayout->addWidget(labelId, 0, 0, 1, 1);

        labelName = new QLabel(TeacherAdmin);
        labelName->setObjectName(QStringLiteral("labelName"));

        gridLayout->addWidget(labelName, 1, 0, 1, 1);

        lineEditGroup = new QLineEdit(TeacherAdmin);
        lineEditGroup->setObjectName(QStringLiteral("lineEditGroup"));

        gridLayout->addWidget(lineEditGroup, 2, 1, 1, 1);

        lineEditId = new QLineEdit(TeacherAdmin);
        lineEditId->setObjectName(QStringLiteral("lineEditId"));

        gridLayout->addWidget(lineEditId, 0, 1, 1, 1);

        lineEditName = new QLineEdit(TeacherAdmin);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));

        gridLayout->addWidget(lineEditName, 1, 1, 1, 1);

        buttonAdd = new QPushButton(TeacherAdmin);
        buttonAdd->setObjectName(QStringLiteral("buttonAdd"));

        gridLayout->addWidget(buttonAdd, 0, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        buttonRemove = new QPushButton(TeacherAdmin);
        buttonRemove->setObjectName(QStringLiteral("buttonRemove"));

        verticalLayout_2->addWidget(buttonRemove);


        retranslateUi(TeacherAdmin);

        QMetaObject::connectSlotsByName(TeacherAdmin);
    } // setupUi

    void retranslateUi(QWidget *TeacherAdmin)
    {
        TeacherAdmin->setWindowTitle(QApplication::translate("TeacherAdmin", "TeacherAdmin", 0));
        labelGroup->setText(QApplication::translate("TeacherAdmin", "Group:", 0));
        labelId->setText(QApplication::translate("TeacherAdmin", "ID:", 0));
        labelName->setText(QApplication::translate("TeacherAdmin", "Name:", 0));
        buttonAdd->setText(QApplication::translate("TeacherAdmin", "Add Student", 0));
        buttonRemove->setText(QApplication::translate("TeacherAdmin", "Remove Student", 0));
    } // retranslateUi

};

namespace Ui {
    class TeacherAdmin: public Ui_TeacherAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERADMIN_H
