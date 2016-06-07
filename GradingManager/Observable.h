#pragma once

#include <vector>
#include <Observer.h>

using namespace std;

class Observable
{
public:
	Observable();
	virtual void notify() = 0;
	virtual void attach(Observer *v) = 0;
	virtual void detach(Observer *v) = 0;
	virtual ~Observable();
protected:
	vector <Observer*> obs;
};

