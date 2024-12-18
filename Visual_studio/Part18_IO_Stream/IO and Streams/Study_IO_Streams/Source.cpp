#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
	int number{};
	string string_num{};
	bool check = false;

	do
	{
		cout << "Enter your integer: ";
		cin >> string_num;
		istringstream ISS(string_num);
		if (ISS >> number)
		{
			check = true;
			cout << "Nhap so nguyen thanh cong!" << endl;
			cout << "So nguyen da nhap: " << number << endl;
		}
		else
		{
			cout << "Nhap so nguyen khong hop le!" << endl;
		}

	} while (check==false);
	return 0;
}
