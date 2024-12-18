#pragma once
#include <iostream>;
using namespace std;
class Account
{
	friend std::ostream& operator<<(std::ostream& os, const Account& account);
protected:
	double balance;
public:
	Account();
	Account(double p_balance);
	void get_account();
	~Account();
	void deposit(double amount);
	void withdraw(double amount);
};

