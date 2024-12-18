#include "Checking_Account.h"
Checking_Account::Checking_Account()
	:Account("No account name", 0.0), fee{0.0} {}

Checking_Account::Checking_Account(string p_name, double p_balan, double p_fee)
	:Account(p_name, p_balan), fee{p_fee}{}

Checking_Account::~Checking_Account(){}

void Checking_Account::withdraw(double amount) {
	
	if (amount <= balance)
	{
		balance -= amount +fee;
		cout << "Da rut " << amount << " $ " << "tu tai khoan [" << name << "]" << endl;
		cout << "So du hien tai: " << balance << endl;
	}
	else
	{
		cout << "So du khong du de rut so tien yeu cau hien tai" << endl;
	}
}

ostream& operator<<(ostream& os, const Checking_Account& check_acc) {
	os << "Account: [" << check_acc.name << "]" << ", balance: " << check_acc.balance << ", fee: " << check_acc.fee;
	return os;
}