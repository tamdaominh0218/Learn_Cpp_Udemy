#pragma once
#include "Account.h"
#include "Saving_Account.h"
#include "Checking_Account.h"
#include "Trust.h"
#include <vector>

/*Cac ham tien ich ho tro cho Account class*/
void Display(const vector<Account>& acc);
void Deposit(vector<Account>& acc, double amount);
void Withdraw(vector<Account>& acc, double amount);

/*Cac ham tien ich ho tro cho Saving_Account class*/
void Display(const vector<Saving_Account>& acc);
void Deposit(vector<Saving_Account>& acc, double amount);
void Withdraw(vector<Saving_Account>& acc, double amount);

/*Cac ham tien ich ho tro cho Checking_Account class*/
void Display(const vector<Checking_Account>& acc);
void Deposit(vector<Checking_Account>& acc, double amount);
void Withdraw(vector<Checking_Account>& acc, double amount);

/*Cac ham tien ich ho tro cho Trust class*/
void Display(const vector<Trust>& acc);
void Deposit(vector<Trust>& acc, double amount);
void Withdraw(vector<Trust>& acc, double amount);