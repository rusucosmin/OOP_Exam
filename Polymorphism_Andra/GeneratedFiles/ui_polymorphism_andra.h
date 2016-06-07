/********************************************************************************
** Form generated from reading UI file 'polymorphism_andra.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYMORPHISM_ANDRA_H
#define UI_POLYMORPHISM_ANDRA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <qdebug.h>

QT_BEGIN_NAMESPACE

class Ui_Polymorphism_AndraClass
{
public:
    QWidget *centralWidget;
    QListView *listView;
    QPushButton *pushButton;
    QTextEdit *valueTextBox;
    QComboBox *analysisType;
    QTextEdit *systolicTextBox;
    QTextEdit *diastolicTextBox;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Polymorphism_AndraClass)
    {
        if (Polymorphism_AndraClass->objectName().isEmpty())
            Polymorphism_AndraClass->setObjectName(QStringLiteral("Polymorphism_AndraClass"));
        Polymorphism_AndraClass->resize(643, 496);
        centralWidget = new QWidget(Polymorphism_AndraClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(0, 0, 601, 192));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 240, 75, 23));
        valueTextBox = new QTextEdit(centralWidget);
        valueTextBox->setObjectName(QStringLiteral("valueTextBox"));
        valueTextBox->setGeometry(QRect(30, 240, 151, 31));
        analysisType = new QComboBox(centralWidget);
        analysisType->setObjectName(QStringLiteral("analysisType"));
        analysisType->setGeometry(QRect(30, 210, 69, 22));
        systolicTextBox = new QTextEdit(centralWidget);
        systolicTextBox->setObjectName(QStringLiteral("systolicTextBox"));
        systolicTextBox->setGeometry(QRect(30, 280, 151, 31));
        diastolicTextBox = new QTextEdit(centralWidget);
        diastolicTextBox->setObjectName(QStringLiteral("diastolicTextBox"));
        diastolicTextBox->setGeometry(QRect(30, 320, 151, 31));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 320, 75, 23));
        Polymorphism_AndraClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Polymorphism_AndraClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 643, 21));
        Polymorphism_AndraClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Polymorphism_AndraClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Polymorphism_AndraClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Polymorphism_AndraClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Polymorphism_AndraClass->setStatusBar(statusBar);

        retranslateUi(Polymorphism_AndraClass);

        QMetaObject::connectSlotsByName(Polymorphism_AndraClass);
    } // setupUi

    void retranslateUi(QMainWindow *Polymorphism_AndraClass)
    {
        Polymorphism_AndraClass->setWindowTitle(QApplication::translate("Polymorphism_AndraClass", "Polymorphism_Andra", 0));
        pushButton->setText(QApplication::translate("Polymorphism_AndraClass", "PushButton", 0));
#ifndef QT_NO_WHATSTHIS
        valueTextBox->setWhatsThis(QApplication::translate("Polymorphism_AndraClass", "<html><head/><body><p>salut</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        analysisType->clear();
        analysisType->insertItems(0, QStringList()
         << QApplication::translate("Polymorphism_AndraClass", "BMI", 0)
         << QApplication::translate("Polymorphism_AndraClass", "BP", 0)
        );
        pushButton_2->setText(QApplication::translate("Polymorphism_AndraClass", "PushButton", 0));
    } // retranslateUi
	public slots:
	void onClick() {
		qDebug() << "clicked\n";
	}

};

namespace Ui {
    class Polymorphism_AndraClass: public Ui_Polymorphism_AndraClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYMORPHISM_ANDRA_H
