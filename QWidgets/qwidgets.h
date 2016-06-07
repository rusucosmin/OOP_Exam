#ifndef QWIDGETS_H
#define QWIDGETS_H

#include <QtWidgets/QMainWindow>
#include "ui_qwidgets.h"

class QWidgets : public QMainWindow
{
	Q_OBJECT

public:
	QWidgets(QWidget *parent = 0);
	~QWidgets();
public slots:
	void showMessageBox();

private:
	Ui::QWidgetsClass ui;
};

#endif // QWIDGETS_H
