#include "Repository.h"
#include <fstream>
#include <sstream>
#include <algorithm>


Repository::Repository(string fileName)
{
	this->fileName = fileName;
	if (fileName == "")
		return;
	this->readFromFile();
}

void Repository::readFromFile() {
	ifstream fin(fileName.c_str());
	string line;
	while (getline(fin, line)) {
		stringstream lineStream(line);
		vector <string> values;
		string act;
		while (getline(lineStream, act, ',')) {
			values.push_back(act);
		}
		Bill b(values[0], values[1], (double)stof(values[2]), values[3] == "True");
		bills.push_back(b);
	}
}

vector <Bill> Repository::getAll() {
	return bills;
}

void Repository::sortBills() {
	sort(bills.begin(), bills.end(), [] (const Bill &a, const Bill &b){
		return a.getCompany() < b.getCompany();
	});
}


Repository::~Repository()
{
	if (fileName == "")
		return;
	ofstream fout(fileName.c_str());
	for (auto it : bills)
		fout << it.toString() << '\n';
}
