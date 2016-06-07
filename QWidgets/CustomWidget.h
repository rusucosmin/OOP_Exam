#pragma once
#include "C:\Qt\Qt5.6.0\5.6\msvc2015_64\include\QtWidgets\qwidget.h"
#include <qlabel.h>
#include <QHBoxLayout>
#include <qapplication.h>
#include <qpushbutton.h>
#include <qstring.h>
#include <qdebug.h>
class CustomWidget :
	public QWidget
{
	Q_OBJECT
public:
	CustomWidget(QWidget * parent = Q_NULLPTR);
	~CustomWidget();
public slots:
	void writeRandom() {
		QString x = mlabel->text();
		int nr = x.toInt();
		qDebug() << nr << '\n';
		x = QString::number(nr + 1);
		mlabel->setText(x);
	}
private:
	void initGUI();
	void connectSignalsAndSlots();
	QHBoxLayout *layout;
	QPushButton *bt;
	QLabel *mlabel;
};