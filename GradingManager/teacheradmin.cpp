#include "teacheradmin.hpp"
#include <qlist.h>
#include <qmessagebox.h>

TeacherAdmin::TeacherAdmin(Controller *_c, QWidget * parent) : c(_c), QWidget(parent) {
	ui.setupUi(this);
	connectSignalsAndSlots();
	populateList();
}

TeacherAdmin::~TeacherAdmin() {
	
}

void TeacherAdmin::connectSignalsAndSlots() {
	QObject::connect(ui.buttonAdd, SIGNAL(clicked()), this, SLOT(addStudent()));
	QObject::connect(ui.buttonRemove, SIGNAL(clicked()), this, SLOT(removeStudent()));
}

void TeacherAdmin::populateList() {
	ui.listStudents->clear();
	for (auto it : c->r->getStudents()) {
		ui.listStudents->addItem(new QListWidgetItem(QString::fromStdString(it.humanString())));
	}
}

void TeacherAdmin::addStudent() {
	int id = ui.lineEditId->text().toInt();
	string name = ui.lineEditName->text().toStdString();
	int group = ui.lineEditGroup->text().toInt();
	c->addStudent(Student(id, name, group, 1, ""));
	populateList();
}

int TeacherAdmin::getSelectedItem() {
	QList <QListWidgetItem*> v = ui.listStudents->selectedItems();
	if (v.size() == 0)
		return -1;
	return ui.listStudents->row(v[0]);
}

void TeacherAdmin::removeStudent() {
	int ind = getSelectedItem();
	if (ind == -1)
		return;
	int ret = QMessageBox::warning(this, "Delete Student", "Are you sure you want to delete the selected student?", QMessageBox::Ok | QMessageBox::Cancel, QMessageBox::Ok);
	if (ret != QMessageBox::Ok)
		return;
	Student s = c->r->getStudents()[ind];
	c->removeStudent(s);
	populateList();
}

void TeacherAdmin::update() {
	populateList();
}