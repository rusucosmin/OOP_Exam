#include <iostream>
#include <deque>
#include <string>

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

using namespace std;

class B
{
public:
	B() { std::cout << "B{}"; }
	virtual void print() {
		std::cout <<
			"B";
	}
	virtual ~B() { std::cout << "~B()"; }
};

class D : public B
{
public:
	D() { std::cout << "D{}"; }
	void print() override {
		std::cout <<
			"D";
	}
	virtual ~D() { std::cout << "~D()"; }
};

class Person
{
public:
	Person() { std::cout << "Person{}"; }
	virtual void print() = 0;
	virtual ~Person() {
		std::cout <<
			"~Person()";
	}
};
class Student : public Person
{
public:
	Student() {
		std::cout << "Student{}";
	}
	void print() override {
		std::cout <<
			"Student";
	}
	virtual ~Student() {
		std::cout <<
			"~Student()";
	}
};

class E
{
public:
	E() { std::cout << "E{}"; }
	virtual ~E() { std::cout << "~E()"; }
};
class DE : public E
{
public:
	static int n;
	DE() { n++; }
};
int DE::n = 0;
int fct2(int x)
{
	if (x < 0)
	{
		throw E{};
		std::cout << "number less than 0" << std::endl;
	}
	else if (x == 0)
	{
		throw DE{};
		std::cout << "number equal to 0" << std::endl;
	}
	return x % 10;
}

/*
	Correct answer: B{}B{}D{}BD~B()~D()~B()
*/
void example1() {
	B* b[] = { new B{}, new D{} };
	b[0]->print();
	b[1]->print();
	delete b[0];
	delete b[1];
}

/*
	Correct answer: Person{}Student{}Student~Sudent()~Person()
*/
void example2() {
	/*Person* p = new Person{}; /// compile error: abstract class
	delete p;*/
	Person* s = new Student{};
	s->print();
	delete s;
}

/*
	Correct answer: E{}0~E{}
*/
void example3() {
	try
	{
		int res = 0;
		res = fct2(-5);
		std::cout << DE::n;
		res = fct2(0);
		std::cout << DE::n;
		res = fct2(25);
		std::cout << DE::n;
	}
	catch (E&)
	{
		std::cout << DE::n;
	}
}

/*
	Correct answer: BA
*/
void example4() {
	std::deque<std::string> d;
	d.push_back("A");
	d.push_front("B");
	d.push_back("C");
	d.push_front("D");
	auto itBegin = d.begin();
	auto itEnd = d.end();
	itEnd--;	itBegin++;

	while (itBegin != itEnd)
	{
		std::cout << *itBegin << " ";
		itBegin++;
	}
}


class Beverage {
public:
	Beverage() {
	}
	Beverage(string _description) { description = _description; }
	virtual double price() = 0;
	virtual void print() {
		std::cout << description + " " + to_string(price()) << '\n';
	}
private:
	string description;
};

class Coffee : public Beverage {
public:
	Coffee():Beverage("COFFEE") {};
	double price() override {
		return 2.5;
	}
private:
};

class Tea : public Beverage {
public:
	Tea() :Beverage("TEE") {};
	double price() override {
		return 1.5;
	}
private:
};

class BeverageWithMilk : public Beverage {
public:
	BeverageWithMilk(Beverage *_b, int _milkCnt) {
		b = _b;
		milkCount = _milkCnt;
	}
	double price() {
		return b->price() + 0.5 * milkCount;
	}
	void print() {
		b->print();
		std::cout << "Final price: " + to_string(price());
		std::cout << '\n';
	}
private:
	int milkCount;
	Beverage *b;
};

class BeverageMachine {
public:
	void prepare(string type, int milkcnt) {
		Beverage *b;
		if (type == "TEA")
			b = new Tea();
		else
			b = new Coffee();
		BeverageWithMilk drink(b, milkcnt);
		drink.print();
		delete b;
	}
private:
};

class F {
public:
	int a;
};

class G {
public:
	F *a;
	int b;
};

void test() {
	F a; a.a = 100;
	G b;
	b.a = &a;
	a.a = 20;
	std::cout << b.a->a << '\n';
}

void example5() {
	BeverageMachine m;
	m.prepare("TEA", 0);
	m.prepare("COFFEE", 1);
	m.prepare("COFFEE", 2);
}

int main()
{
	//example1();
	//example2();
	//example3();
	//example4();
	//example5();
	test();
	_CrtDumpMemoryLeaks();
	return 0;
}