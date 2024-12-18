#include "Saving_Account.h"

Saving_Account::Saving_Account() :Account("No account name", 0.0), int_rate{ 0.0 }{}

Saving_Account::Saving_Account(string p_name, double p_balan, double rate)
	: Account(p_name, p_balan), int_rate{ rate } {

}
Saving_Account::~Saving_Account(){}

void Saving_Account::deposit(double amount) {
	amount += amount * int_rate / 100;
	Account::deposit(amount);
}

ostream&operator<<(ostream&os, const Saving_Account&sav_acc){
	os << "Account: [" << sav_acc.name << "]" << ", balance: " << sav_acc.balance << ", rate: " << sav_acc.int_rate;
	return os;
}