#include "qwidgets.h"
#include <QtWidgets/QApplication>
#include <qlabel.h>
#include <qlineedit.h>
#include <qpushbutton.h>
#include <qlistwidget.h>
#include <string>
#include "CustomWidget.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	/*
	QLineEdit lineEdit;
	QLabel q("&Edit");
	q.setBuddy(&lineEdit);
	lineEdit.show();
	
	QPushButton *btn = new QPushButton("Push me");
	btn->show();
	
	QListWidget list;
	for (int i = 0; i < 10; ++i) {
		list.addItem(new QListWidgetItem(QString::fromStdString(to_string(i))));
	}
	list.show();*/
	QWidgets q;
	q.show();
	/*
	CustomWidget c;
	c.show();*/
	return a.exec();
}