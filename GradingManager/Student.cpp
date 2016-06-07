#include "Student.h"


Student::Student()
{
}

Student::Student(int _id, string _name, int _group, double _grade = 1, string _teacher = "")
	:id(_id), name(_name), group(_group), grade(_grade), teacher(_teacher)
{
}

Student::~Student()
{
}

int Student::getId() const {
	return id;
}

int Student::getGroup() const{
	return group;
}

double Student::getGrade() const {
	return grade;
}

string Student::getName() const {
	return name;
}

string Student::getTeacher() const {
	return teacher;
}

void Student::setGrade(double _grade, string _teacher) {
	grade = _grade;
	teacher = _teacher;
}

string Student::toString() const {
	return to_string(id) + "," + name + "," + to_string(group) +
		"," + to_string(grade) + "," + teacher;
}