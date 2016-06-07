#pragma once

#include <QString>
class Person
{
public:
	Person(QString _name);
	~Person();
	QString getName() const;
private:
	QString name;
};

