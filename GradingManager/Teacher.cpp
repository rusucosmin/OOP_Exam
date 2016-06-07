#include "Teacher.h"



Teacher::Teacher()
{
}

Teacher::Teacher(string _name, vector <int> _groups)
	:name(_name), groups(_groups) 
{

}


Teacher::~Teacher()
{
}

string Teacher::getName() const {
	return name;
}

vector <int> Teacher::getGroups() const {
	return groups;
}

