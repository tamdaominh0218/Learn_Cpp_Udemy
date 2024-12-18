#pragma once
#include <iostream>
#include <string>
#include "I_Printable.h"
using namespace std;

class Account :public I_Printable
{
	//friend ostream& operator<<(ostream& os, const Account& acc);
protected:
	string name;
	double balance;
public:
	Account();
	Account(string p_name, double p_balan);
	~Account();
	virtual void deposit(double amount) = 0;
	virtual void withdraw(double amount) = 0;
	void print(ostream& os) const override;
};

