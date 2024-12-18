#pragma once
#include "Account.h"
class Save_account :public Account
{
	friend ostream& operator<<(ostream& os, const Save_account& acc);
protected:
	double rate;
public:
	Save_account();
	Save_account(double p_balance, double p_rate);
	~Save_account();
	void deposit(double mon_val);
	void rut_tien(double mon_val);
};

