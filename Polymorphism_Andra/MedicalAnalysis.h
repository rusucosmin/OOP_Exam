#pragma once

#include <QString>
class MedicalAnalysis
{
public:
	MedicalAnalysis();
	~MedicalAnalysis();
	virtual bool isResultOK() = 0;
	virtual QString toString();
};

