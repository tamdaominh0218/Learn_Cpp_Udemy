#define _CRT_SECURE_NO_WARNINGS
#include "Mystring.h"
#include <cstring>
using namespace std;

Mystring::Mystring()
	:str{ nullptr }{
	str = new char[1];
	*str = '\0';
	cout << "No-args constructor called" << endl;
}

Mystring::Mystring(const char* p_str)
	:str{nullptr}{
	if (p_str == nullptr)
	{
		str = new char[1];
		*str = *p_str;
		cout << "Overloaded constructor called" << endl;
	}
	else
	{
		str = new char[strlen(p_str) + 1];
		strcpy(str, p_str);
		cout << "Overloaded constructor called" << endl;
	}
}

Mystring::~Mystring() {
	cout << "Deleting constructor" << endl;
	delete[] str;
}

Mystring::Mystring(const Mystring& source) 
	:str{nullptr}
{
	str = new char[strlen(source.str) + 1];
	strcpy(str, source.str);
	cout << "Copy constructor, deep copy for " << source.str << endl;
}

Mystring::Mystring(Mystring &&source)
	:str(source.str)
{
	source.str = nullptr;
	cout << "Move constructor used for " << source.str << endl;
}

Mystring &Mystring::operator=(const Mystring& rhs)
{
	cout << "Using copy assignment" << endl;
	if (this==&rhs)
	{
		return *this;
	}
	delete[] str;
	str = new char[strlen(rhs.str) + 1];
	strcpy(str, rhs.str);
	return *this;
}

Mystring& Mystring::operator=(Mystring&& rhs) {
	cout << "Using move assignment" << endl;
	if (this == &rhs)
	{
		return *this;
	}
	delete[] str;
	str = rhs.str;
	rhs.str = nullptr;
	return *this;
}

ostream& operator<<(ostream& os, Mystring& rhs) {
	os << rhs.str;
	return os;
}

bool Mystring::operator==(const Mystring& rhs)const {
	return (strcmp(str, rhs.str) == true);
}

Mystring Mystring::operator-() {
	char* buff = new char[strlen(str) + 1];
	strcpy(buff, str);
	for (size_t i = 0; i < strlen(buff); i++)
	{
		buff[i] = towlower(str[i]);
	}
	Mystring temp = buff;
	delete[] buff;
	return temp;
}

Mystring Mystring::operator+(const Mystring& rhs)const {
	char* buff = new char[strlen(str) + strlen(rhs.str) + 1];
	strcpy(buff, str);
	strcat(buff, rhs.str);
	Mystring temp = buff;
	delete[] buff;
	return temp;
}