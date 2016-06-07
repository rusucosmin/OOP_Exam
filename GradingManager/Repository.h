#pragma once

#include <vector>
#include <Teacher.h>
#include <Student.h>
#include <Observable.h>
class Repository: public Observable
{
public:
	Repository();
	~Repository();

	void notify();
	void attach(Observer *v);
	void detach(Observer *v);

	vector <Teacher> getTeachers() const;
	vector <Student> getStudents() const;
	void addStudent(Student s);
	void updateStudent(Student s);
	void removeStudent(Student s);
	void gradeStudent(Student s);
	void sortStudents();
private:
	void populateRepo();
	vector <Teacher> t;
	vector <Student> s;
};

