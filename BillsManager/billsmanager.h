#ifndef BILLSMANAGER_H
#define BILLSMANAGER_H

#include <QtWidgets/QWidget>
#include "ui_billsmanager.h"
#include <Repository.h>

class BillsManager : public QWidget
{
	Q_OBJECT

public:
	BillsManager(Repository *r, QWidget *parent = 0);
	~BillsManager();

public slots:
	void populateList();
	void sortList();
	void populateForm();
	void computeTotal();

private:
	void connectSignalsAndSlots();
	int getSelectedItem();

	Ui::BillsManagerClass ui;
	Repository *r;
};

#endif // BILLSMANAGER_H
