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

int main() {
	Account* Tam_account = new Account;
	Tam_account->Set_name("DAO MINH TAM");
	Tam_account->Set_balance(3500000);

	cout << Tam_account->Get_name() << endl;
	cout << "My balance is: " << Tam_account->Get_balance() << endl;

	Tam_account->Gui_tien(500000);
	cout << "My balance is: " << Tam_account->Get_balance() << endl;

	Tam_account->Rut_tien(1000000);
	cout << "My balance is: " << Tam_account->Get_balance() << endl;

	if (Tam_account->Gui_tien(2000000))
	{
		cout << "Da gui tien vao tai khoan cua DAO MINH TAM thanh cong" << endl;
	}
	else
	{
		cout << "Gui tien khong thanh cong" << endl;
	}

	if (Tam_account->Rut_tien(1500000))
	{
		cout << "Da rut thanh cong so tien la: " << 1500000 << endl;
	}
	else
	{
		cout << "Rut tien khong thanh cong do so du khong du!" << endl;
	}


	delete Tam_account;

	return 0;
}