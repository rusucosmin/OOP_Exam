/********************************************************************************
** Form generated from reading UI file 'gradingmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADINGMANAGER_H
#define UI_GRADINGMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GradingManagerClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QListWidget *listStudents;
    QHBoxLayout *horizontalLayout;
    QLabel *labelGrade;
    QLineEdit *lineEditGrade;
    QPushButton *buttonGrade;

    void setupUi(QWidget *GradingManagerClass)
    {
        if (GradingManagerClass->objectName().isEmpty())
            GradingManagerClass->setObjectName(QStringLiteral("GradingManagerClass"));
        GradingManagerClass->resize(600, 400);
        verticalLayout_2 = new QVBoxLayout(GradingManagerClass);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listStudents = new QListWidget(GradingManagerClass);
        listStudents->setObjectName(QStringLiteral("listStudents"));

        verticalLayout->addWidget(listStudents);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelGrade = new QLabel(GradingManagerClass);
        labelGrade->setObjectName(QStringLiteral("labelGrade"));

        horizontalLayout->addWidget(labelGrade);

        lineEditGrade = new QLineEdit(GradingManagerClass);
        lineEditGrade->setObjectName(QStringLiteral("lineEditGrade"));

        horizontalLayout->addWidget(lineEditGrade);

        buttonGrade = new QPushButton(GradingManagerClass);
        buttonGrade->setObjectName(QStringLiteral("buttonGrade"));

        horizontalLayout->addWidget(buttonGrade);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(GradingManagerClass);

        QMetaObject::connectSlotsByName(GradingManagerClass);
    } // setupUi

    void retranslateUi(QWidget *GradingManagerClass)
    {
        GradingManagerClass->setWindowTitle(QApplication::translate("GradingManagerClass", "GradingManager", 0));
        labelGrade->setText(QApplication::translate("GradingManagerClass", "Grade for the Student:", 0));
        buttonGrade->setText(QApplication::translate("GradingManagerClass", "Grade", 0));
    } // retranslateUi

};

namespace Ui {
    class GradingManagerClass: public Ui_GradingManagerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADINGMANAGER_H
