#pragma once
#include <string>
using namespace std;
class Bill
{
public:
	Bill(string, string, double, bool);
	~Bill();
	string getCompany() const;
	string getSerial();
	double getSum();
	bool isPaid();
	string toString();
private:
	string company, serial;
	double sum;
	bool paid;
};

