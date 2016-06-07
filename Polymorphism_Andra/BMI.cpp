#include "BMI.h"

#include <iostream>
using namespace std;

BMI::BMI(double _value)
{
	value = _value;
}


BMI::~BMI()
{
}

bool BMI::isResultOK() {
	return value >= 18.5 && value <= 25;
}

QString BMI::toString() {
	string res = "BMI " + to_string(value) + " ";
	if (this->isResultOK())
		res += "OK";
	else
		res += "NOT OK";
	return QString(res.c_str());
}