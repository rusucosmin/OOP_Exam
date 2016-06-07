#pragma once
#include "MedicalAnalysis.h"
#include <QString>

class BP :
	public MedicalAnalysis
{
public:
	BP(int, int);
	~BP();
	bool isResultOK();
	QString toString();
private:
	int systolic, diastolic;
};

