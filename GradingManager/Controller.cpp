#include "Controller.h"

Controller::Controller(Repository *_r) : r(_r)
{
}


Controller::~Controller()
{
}

void Controller::addStudent(Student s) {
	r->addStudent(s);
}

void Controller::removeStudent(Student s) {
	r->removeStudent(s);
}

void Controller::gradeStudent(Student act) {
	r->gradeStudent(act);
}