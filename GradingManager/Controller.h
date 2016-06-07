#pragma once
#include <Repository.h>
#include <Student.h>
#include <Teacher.h>
class Controller
{
public:
	Controller(Repository *r);
	~Controller();
	void addStudent(Student s);
	void removeStudent(Student s);
	void gradeStudent(Student s);
	Repository *r;
};

