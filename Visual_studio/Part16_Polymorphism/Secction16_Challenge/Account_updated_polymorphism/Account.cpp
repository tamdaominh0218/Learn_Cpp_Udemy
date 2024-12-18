#include "Account.h"

Account::Account() :name{ "No account name" }, balance{ 0.0 } {}

Account::Account(string p_name, double p_balan) : name{ p_name }, balance{ p_balan } {}

Account::~Account() {}

void Account::deposit(double amount) {
	if (amount > 0)
	{
		balance += amount;
		cout << "Da gui vao tai khoan [" << name << "]: " << amount << " $" << endl;
		cout << "So du hien tai: " << balance << endl;
	}
	else
	{
		cout << "So tien gui vao khong hop le!" << endl;
	}
}

void Account::withdraw(double amount) {
	if (amount <= balance)
	{
		balance -= amount;
		cout << "Da rut " << amount << " $ " << "tu tai khoan [" << name << "]" << endl;
		cout << "So du hien tai: " << balance << endl;
	}
	else
	{
		cout << "So du khong du de rut so tien yeu cau hien tai" << endl;
	}
}

void Account::print(ostream& os) const {
	os << "Account: [" << name << "]" << ", balance: " << balance;
}
