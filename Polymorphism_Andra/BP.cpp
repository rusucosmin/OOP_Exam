#include "BP.h"
#include <iostream>
#include <string>

using namespace  std;

BP::BP(int _sys, int _dis)
{
	systolic = _sys;
	diastolic = _dis;
}


BP::~BP()
{
}

bool BP::isResultOK() {
	return systolic >= 90 && systolic <= 119 && diastolic >= 60 && diastolic <= 79;
}

QString BP::toString() {
	string res = "BP systolic: " + to_string(systolic) + " diastolic: " + to_string(diastolic) + " ";
	if (isResultOK())
		res += "OK";
	else
		res += "NOT OK";
	return QString(res.c_str());
}