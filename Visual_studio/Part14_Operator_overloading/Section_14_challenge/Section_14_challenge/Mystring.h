#pragma once
#include <iostream>
using namespace std;
class Mystring
{
	friend ostream& operator<<(ostream& os, Mystring& rhs);
private:
	char* str;
public:
	Mystring();
	Mystring(const char* p_str);
	~Mystring();
	Mystring(const Mystring& source);
	Mystring(Mystring&& source); 
	Mystring& operator=(const Mystring& rhs);
	Mystring& operator=(Mystring&& rhs);
	Mystring operator-();
	Mystring operator+(const Mystring& rhs)const;
	bool operator==(const Mystring& rhs)const;

};

