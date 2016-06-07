#pragma once
#include <string>
#include <Bill.h>
#include <vector>
using namespace std;
class Repository
{
public:
	Repository(string fileName = "");
	~Repository();
	vector <Bill> getAll();
	void sortBills();
private:
	void readFromFile();
	string fileName;
	vector <Bill> bills;
};

