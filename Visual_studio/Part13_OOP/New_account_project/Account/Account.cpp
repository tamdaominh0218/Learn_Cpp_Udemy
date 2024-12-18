#include "Account.h"

void Account::Set_name(string name_set)
{
	name = name_set;
}

string Account::Get_name()
{
	return name;
}

void Account::Set_balance(long long balance_set)
{
	balance = balance_set;
}

long long Account::Get_balance() {
	return balance;
}

long long Account::Gui_tien(long long so_tien) {
	balance += so_tien;
	return true;
}

long long Account::Rut_tien(long long so_tien) {
	if (so_tien <= balance)
	{
		balance -= so_tien;
		return true;
	}
	else
	{
		return false;
	}
}