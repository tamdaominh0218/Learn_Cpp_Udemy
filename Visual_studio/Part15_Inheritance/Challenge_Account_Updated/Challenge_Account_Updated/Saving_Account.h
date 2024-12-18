#pragma once
#include "Account.h"
class Saving_Account :public Account
{
	friend ostream& operator<<(ostream& os, const Saving_Account& sav_acc);
protected:
	double int_rate;
public:
	Saving_Account();
	Saving_Account(string p_name, double p_balan, double p_rate);
	~Saving_Account();
	void deposit(double amount);
};

