#include "Bill.h"



Bill::Bill(string _company, string _id, double _sum, bool _paid) : company(_company), serial(_id), sum(_sum), paid(_paid)
{
}

Bill::~Bill()
{
}

string Bill::getCompany() const
{
	return company;
}

string Bill::getSerial()
{
	return serial;
}

double Bill::getSum()
{
	return sum;
}

bool Bill::isPaid()
{
	return paid;
}

string Bill::toString()
{
	return company + "," + serial + "," + to_string(sum) + "," + (paid ? "True" : "False");
}
