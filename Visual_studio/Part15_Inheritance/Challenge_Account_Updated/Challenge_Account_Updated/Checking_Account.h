#pragma once
#include "Account.h"
class Checking_Account :public Account
{
	friend ostream& operator<<(ostream& os, const Checking_Account& check_acc);
protected:
	double fee;
public:
	Checking_Account();
	Checking_Account(string p_name, double p_balan, double p_fee);
	~Checking_Account();
	void withdraw(double amount);
};

