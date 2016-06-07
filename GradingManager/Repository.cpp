#include "Repository.h"

#include <string>
#include <fstream>
#include <qdebug.h>
#include <algorithm>
#include <qstring.h>
#include <sstream>
#include <GradeException.h>
using namespace std;


Repository::Repository()
{
	populateRepo();
}


Repository::~Repository()
{
	ofstream fout("students.in");
	for (auto it : s) {
		fout << it.toString() << '\n';
	}
}

void Repository::populateRepo() {
	ifstream fin("teachers.in");
	string name;
	int cnt;
	vector <int> act;
	while (getline(fin, name)) {
		fin >> cnt;
		for (int i = 0; i < cnt; ++i) {
			int x;
			fin >> x;
			act.push_back(x);
		}
		sort(act.begin(), act.end());
		t.push_back(Teacher(name, act));
		act.clear();
		fin.get();
	}
	for(auto it : t) {
		qDebug() << QString::fromStdString(it.getName()) << '\n';
		for (auto gr : it.getGroups())
			qDebug() << gr << ' ';
		qDebug() << '\n';
	}
	fin.close();
	fin.open("students.in");
	string line;
	while (getline(fin, line)) {
		stringstream in(line);
		string act;
		vector <string> v;
		while (getline(in, act, ',')) {
			v.push_back(act);
		}
		if (v.size() != 5)
			throw runtime_error("Corrupted file");
		s.push_back(Student(stoi(v[0]), v[1], stoi(v[2]), stof(v[3]), v[4]));
	}
	for (auto it : s) {
		qDebug() << QString::fromStdString(it.toString()) << '\n';
	}
	sort(s.begin(), s.end(), [](const Student &a, const Student &b) {
		return a.getGroup() < b.getGroup() || (a.getGroup() == b.getGroup() && a.getName() < b.getName());
	});
}

vector <Teacher> Repository::getTeachers() const {
	return t;
}

vector <Student> Repository::getStudents() const {
	return s;
}

void Repository::addStudent(Student act) {
	s.push_back(act);
	sort(s.begin(), s.end(), [](const Student &a, const Student &b) {
		return a.getGroup() < b.getGroup() || (a.getGroup() == b.getGroup() && a.getName() < b.getName());
	});
	notify();
}

void Repository::updateStudent(Student act) {
	for (int i = 0; i < s.size(); ++i)
		if (s[i].getId() == act.getId())
			s[i] = act;
	notify();
}

void Repository::sortStudents() {
	sort(s.begin(), s.end(), [](const Student &a, const Student &b) {
		return a.getGroup() < b.getGroup() || (a.getGroup() == b.getGroup() && a.getName() < b.getName());
	});
}

void Repository::removeStudent(Student act) {
	vector <Student> newv;
	for (auto it : s)
		if (it.getId() != act.getId())
			newv.push_back(it);
	s = newv;
	sortStudents();
	notify();
}

void Repository::notify() {
	for (auto it : obs)
		it->update();
}

void Repository::attach(Observer *v) {
	obs.push_back(v);
}

void Repository::detach(Observer *v) {
	vector <Observer*> newobs;
	for (auto it : obs)
		if (it != v)
			newobs.push_back(it);
	obs = newobs;
}

void Repository::gradeStudent(Student act) {
	for (int i = 0; i < s.size(); ++i) {
		if (s[i].getId() == act.getId()) {
			if (s[i].getTeacher() != "" && s[i].getTeacher() != act.getTeacher())
				throw GradeException("Already graded!");
			s[i] = act;
		}
	}
	notify();
}