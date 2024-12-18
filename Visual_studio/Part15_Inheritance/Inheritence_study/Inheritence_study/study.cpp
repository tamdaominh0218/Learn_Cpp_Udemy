#include <iostream>

using namespace std;

class Base	
{
public:
	Base();
	Base(int p_num);
	Base(const Base& source);
	Base& operator=(const Base&rhs);
	Base(Base&& source);
	Base& operator=(Base&& source);
	~Base();

private:
	int number;
};

Base::Base() :number{0}
{
	cout << "Base constructor non argument called" << endl;
}

Base::Base(int p_num) :number{ p_num }
{
	cout << "Base constructor overload called" << endl;
}

Base::Base(const Base& source)
	:number{ source.number } {
	cout << "Copy constructor" << endl;
}

Base& Base::operator=(const Base& rhs) {
	cout << "Base operator=" << endl;
	if (this == &rhs)
	{
		return *this;
	}
	number = rhs.number;
	return *this;
}


Base::~Base()
{
	cout << "Base deconstructor called" << endl;
}

class Drivative :public Base
{
	//using Base::Base;
public:
	Drivative();
	Drivative(int p_num_dri);
	~Drivative();
	Drivative(const Drivative& source);
	Drivative& operator+(const Drivative& rhs);

private:
	int number_drive;

};

Drivative::Drivative() :Base{}, number_drive { 0 }
{
	cout << "Drivative constructor non argument called" << endl;
}

Drivative::Drivative(int p_num_dri) :Base(p_num_dri), number_drive { 2 * p_num_dri }
{
	cout << "Drivative constructor overload called" << endl;
}

Drivative::~Drivative()
{
	cout << "Drivative deconstructor called" << endl;
}

Drivative::Drivative(const Drivative& source) :Base(source), number_drive{source.number_drive} {
	cout << "Drive copy constructor" << endl;
}

Drivative& Drivative::operator+(const Drivative& rhs) {
	cout << "Drive operator=" << endl;
	if (this == &rhs)
	{
		return *this;
	}
	Base::operator=(rhs);
	number_drive = rhs.number_drive;
	return *this;
}

int main() {
	Drivative m1{100};
	Drivative m2 = m1;
	m1 = m2;
	return 0;
}