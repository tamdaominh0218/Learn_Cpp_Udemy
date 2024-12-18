#pragma once
#include <iostream>
#include <string>
using namespace std;

class Account
{
	friend ostream& operator<<(ostream& os, const Account& acc);
protected:
	string name;
	double balance;
public:
	Account();
	Account(string p_name, double p_balan);
	~Account();
	void deposit(double amount);
	void withdraw(double amount);
};

