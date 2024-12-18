#include "Money.h"
#include <iostream>

using namespace std;

int main() {
	Money m1{ 100, 200 };
	Money m2{ 100, 200 };
	Money m3{ 200, 150 };
	cout << "conpare 2 type money" << endl;
	/*if (m1==m2)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}

	Money m4 = m1 + m2;
	m4.display();*/

	cout << (m1 == m2);

	return 0;
}