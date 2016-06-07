#include "billsmanager.h"
#include <qmessagebox.h>
#include <qlistwidget.h>

BillsManager::BillsManager(Repository *_r, QWidget *parent)
	: QWidget(parent), r(_r)
{
	ui.setupUi(this);
	/*for (auto it : r->getAll()) {
		QMessageBox::information(this, "TITLE", QString::fromStdString(it.toString()), QMessageBox::Ok, QMessageBox::Ok);
	}*/
	connectSignalsAndSlots();
	populateList();
}

BillsManager::~BillsManager()
{

}

void BillsManager::populateList() {
	ui.listWidget->clear();
	for (auto it : r->getAll()) {
		ui.listWidget->addItem(new QListWidgetItem(QString::fromStdString(it.getCompany() + " " + to_string(it.getSum()))));
	}
}

void BillsManager::connectSignalsAndSlots() {
	QObject::connect(ui.btnSort, SIGNAL(clicked()), this, SLOT(sortList()));
	QObject::connect(ui.listWidget, SIGNAL(itemSelectionChanged()), this, SLOT(populateForm()));
	QObject::connect(ui.btnTotal, SIGNAL(clicked()), this, SLOT(computeTotal()));
}

void BillsManager::sortList() {
	r->sortBills();
	populateList();
}

int BillsManager::getSelectedItem() {
	auto all = ui.listWidget->selectedItems();
	if (all.size() == 0)
		return -1;
	else
		return ui.listWidget->row(all[0]);
}

void BillsManager::populateForm() {
	int id = getSelectedItem();
	if (id == -1) {
		return;
	}
	ui.lineEditCompany->setText(QString::fromStdString(r->getAll()[id].getCompany()));
	ui.lineEditSerial->setText(QString::fromStdString(r->getAll()[id].getSerial()));
	ui.lineEditSum->setText(QString::fromStdString(to_string(r->getAll()[id].getSum())));
	ui.lineEditPaid->setText(QString::fromStdString(r->getAll()[id].isPaid()? "True" : "False"));
}

void BillsManager::computeTotal() {
	double total = 0;
	for (auto it : r->getAll()) {
		if (!it.isPaid())
			total += it.getSum();
	}
	ui.labelTotalSum->setText(QString::fromStdString(to_string(total)));
}