#pragma once

#include <exception>
#include <string>
using namespace std;

class GradeException :
	public exception
{
public:
	GradeException(string _msg);
	~GradeException();
	const char *what() const;
private:
	string msg;
};

