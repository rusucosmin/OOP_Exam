#pragma once
#ifndef TEACHERADMIN_H
#define TEACHERADMIN_H
#include <QWidget>
#include "ui_teacheradmin.h"
#include "Controller.h"
#include <Observer.h>

class TeacherAdmin : public QWidget, public Observer {
	Q_OBJECT

public:
	TeacherAdmin(Controller *_c, QWidget * parent = Q_NULLPTR);
	~TeacherAdmin();
	void update();

public slots:
	void addStudent();
	void removeStudent();

private:
	void populateList();
	int getSelectedItem();
	void connectSignalsAndSlots();
	Ui::TeacherAdmin ui;
	Controller *c;
};
#endif // TEACHERADMIN_H