#include "Saving_Account.h"

Saving_Account::Saving_Account()
	:Account("No account name", 0.0), int_rate{0.0}{}

Saving_Account::Saving_Account(string p_name, double p_balan, double p_rate)
	:Account(p_name, p_balan), int_rate{p_rate}{}

Saving_Account::~Saving_Account(){}

void Saving_Account::deposit(double amount) {
	amount += amount * int_rate / 100;
	Account::deposit(amount);
}

void Saving_Account::withdraw(double amount) {
	Account::withdraw(amount);
}

void Saving_Account::print(ostream& os) const {
	os << "Account: [" << name << "]" << ", balance: " << balance << ", rate: " << int_rate;
}