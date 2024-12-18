#pragma once
#include <iostream>
#include <string>

using namespace std;

class Account
{
private:
	string name;
	long long balance;

public:
	void Set_name(string name_set);
	string Get_name();
	void Set_balance(long long balance_set);
	long long Get_balance();
	long long Gui_tien(long long so_tien);
	long long Rut_tien(long long so_tien);
};