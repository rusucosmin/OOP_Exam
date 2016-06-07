#include "gradingmanager.h"
#include <GradeException.h>
#include <qmessagebox.h>

GradingManager::GradingManager(Controller * _c, Teacher _t, QWidget *parent)
	: c(_c), t(_t), QWidget(parent)
{
	ui.setupUi(this);
	setWindowTitle(QString::fromStdString(t.getName()));
	connectSignalsAndSlots();
	populateList();
}

GradingManager::~GradingManager()
{
}

void GradingManager::connectSignalsAndSlots() {
	QObject::connect(ui.buttonGrade, SIGNAL(clicked()), this, SLOT(gradeStudent()));
}

void GradingManager::populateList() {
	ui.listStudents->clear();
	for (auto it : c->r->getStudents()) {
		bool ok = 0;
		for (auto gr : t.getGroups())
			ok |= it.getGroup() == gr;
		if (ok)
			ui.listStudents->addItem(new QListWidgetItem(QString::fromStdString(it.humanString())));
	}
}

int GradingManager::getSelectedItem() {
	QList <QListWidgetItem*> act = ui.listStudents->selectedItems();
	if (act.size() == 0)
		return -1;
	return ui.listStudents->row(act[0]);
}

void GradingManager::gradeStudent() {
	int ind = getSelectedItem();
	if (ind == -1)
		return;
	vector <Student> act;
	for (auto it : c->r->getStudents()) {
		bool ok = 0;
		for (auto gr : t.getGroups())
			ok |= it.getGroup() == gr;
		if (ok)
			act.push_back(it);
	}
	double grade = ui.lineEditGrade->text().toDouble();
	Student who = act[ind];
	who.setGrade(grade, t.getName());
	try{
		c->gradeStudent(who);
	}
	catch (GradeException &e) {
		QMessageBox::warning(this, "Exception", QString(e.what()), QMessageBox::Ok, QMessageBox::Ok);
	}
}

void GradingManager::update() {
	populateList();
}