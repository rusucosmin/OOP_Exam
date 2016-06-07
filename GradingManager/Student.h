#pragma once

#include <string>
using namespace std;
class Student
{
public:
	Student();
	Student(int, string, int, double, string);
	~Student();
	int getId() const;
	int getGroup() const;
	double getGrade() const;
	string getName() const;
	string getTeacher() const;
	void setGrade(double, string);
	string toString() const;
	inline string humanString() const {
		return name + " - " + to_string(group) + " - " + to_string(grade) + " - " + teacher;
	}
private:
	int id, group;
	double grade;
	string name, teacher;
};

