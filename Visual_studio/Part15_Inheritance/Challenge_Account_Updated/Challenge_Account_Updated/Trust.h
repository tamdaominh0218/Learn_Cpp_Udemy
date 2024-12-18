#pragma once
#include "Saving_Account.h"

#define Year 2024
class Trust :public Saving_Account
{
	friend ostream& operator<<(ostream& os, const Trust& tr);
public:
	Trust();
	Trust(string p_name, double p_balan, double rate);
	~Trust();
	void deposit(double amount);
	void withdraw(double amount);
};

