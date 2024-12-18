#include "Account_util.h"

/*Cac ham tien ich ho tro cho Account class*/
void Display(const vector<Account>& acc) {
	cout << endl;
	for (size_t i = 0; i < size(acc); i++)
	{
		cout << "------------Account infomation----------------" << endl;
		cout << acc[i] << endl;
	}
}

void Deposit(vector<Account>& acc, double amount) {
	cout << endl;
	for (size_t i = 0; i < size(acc); i++)
	{
		cout << "------------Diposit infomation----------------" << endl;
		acc[i].deposit(amount);
	}
}

void Withdraw(vector<Account>& acc, double amount) {
	cout << endl;
	for (size_t i = 0; i < size(acc); i++)
	{
		cout << "------------Withdraw infomation----------------" << endl;
		acc[i].withdraw(amount);
	}
}

/*Cac ham tien ich ho tro cho Saving_Account class*/
void Display(const vector<Saving_Account>& acc) {
	cout << endl;
	for (size_t i = 0; i < size(acc); i++)
	{
		cout << "------------Account infomation----------------" << endl;
		cout << acc[i] << endl;
	}
}

void Deposit(vector<Saving_Account>& acc, double amount) {
	cout << endl;
	for (size_t i = 0; i < size(acc); i++)
	{
		cout << "------------Diposit infomation----------------" << endl;
		acc[i].deposit(amount);
	}
}

void Withdraw(vector<Saving_Account>& acc, double amount) {
	cout << endl;
	for (size_t i = 0; i < size(acc); i++)
	{
		cout << "------------Withdraw infomation----------------" << endl;
		acc[i].withdraw(amount);
	}
}

/*Cac ham tien ich ho tro cho Checking_Account class*/
void Display(const vector<Checking_Account>& acc) {
	cout << endl;
	for (size_t i = 0; i < size(acc); i++)
	{
		cout << "------------Account infomation----------------" << endl;
		cout << acc[i] << endl;
	}
}

void Deposit(vector<Checking_Account>& acc, double amount) {
	cout << endl;
	for (size_t i = 0; i < size(acc); i++)
	{
		cout << "------------Diposit infomation----------------" << endl;
		acc[i].deposit(amount);
	}
}

void Withdraw(vector<Checking_Account>& acc, double amount) {
	cout << endl;
	for (size_t i = 0; i < size(acc); i++)
	{
		cout << "------------Withdraw infomation----------------" << endl;
		acc[i].withdraw(amount);
	}
}

/*Cac ham tien ich ho tro cho Trust class*/
void Display(const vector<Trust>& acc) {
	cout << endl;
	for (auto t:acc)
	{
		cout << "------------Trust infomation----------------" << endl;
		cout << t << endl;
	}
}
void Deposit(vector<Trust>& acc, double amount) {
	cout << endl;
	for (auto t : acc)
	{
		cout << "------------Trust Deposit infomation----------------" << endl;
		t.deposit(amount);
	}
}
void Withdraw(vector<Trust>& acc, double amount) {
	cout << endl;
	for (auto t : acc)
	{
		cout << "------------Trust Withdraw infomation----------------" << endl;
		t.withdraw(amount);
	}
}