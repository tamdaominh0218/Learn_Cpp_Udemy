#pragma once
#include <iostream>
using namespace std;

class I_Printable
{
	friend ostream& operator<<(ostream& os, const I_Printable& ip);
public:
	I_Printable();
	~I_Printable();
	virtual void print(ostream& os) const=0;
};

