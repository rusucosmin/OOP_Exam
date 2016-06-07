#ifndef GRADINGMANAGER_H
#define GRADINGMANAGER_H

#include <QtWidgets/QWidget>
#include "ui_gradingmanager.h"
#include <Controller.h>
#include <Teacher.h>
#include <Observer.h>

class GradingManager : public QWidget, public Observer
{
	Q_OBJECT

public:
	GradingManager(Controller* _c, Teacher _t, QWidget *parent = 0);
	~GradingManager();
	void update();

public slots:
	void gradeStudent();

private:
	int getSelectedItem();
	void connectSignalsAndSlots();
	void populateList();
	Ui::GradingManagerClass ui;
	Teacher t;
	Controller *c;
};

#endif // GRADINGMANAGER_H
