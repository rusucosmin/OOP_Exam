#pragma once
#include "MedicalAnalysis.h"
class BMI :
	public MedicalAnalysis
{
public:
	BMI(double);
	~BMI();
	bool isResultOK();
	QString toString();
private:
	double value;
};