#pragma once

#include <string>
#include <vector>

using namespace std;

class Teacher
{
public:
	Teacher();
	Teacher(string, vector <int>);
	~Teacher();
	string getName() const;
	vector <int> getGroups() const;
private:
	string name;
	vector <int> groups;
};

