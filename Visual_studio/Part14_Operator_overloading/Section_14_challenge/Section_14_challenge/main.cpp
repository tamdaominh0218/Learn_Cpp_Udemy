#include "Mystring.h"

int main() {
	Mystring str1;
	str1= { "TamDao"};
	Mystring str2{ "Harry" };
	cout << str1 << " " << str2 << endl;
	Mystring str3 = -str1;
	cout << str3 << endl;
	

	Mystring name1{ "Tammmm"};
	Mystring name2{ "Tam" };
	cout << (name1 == name2) << endl;

	Mystring name3 = name1 + name2;
	cout << name3 << endl;
	return 0;
}