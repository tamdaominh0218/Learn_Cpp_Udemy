#include "Save_account.h"

Save_account::Save_account() :Save_account(0.0, 0.0){}

Save_account::Save_account(double p_balance, double p_rate) :Account(p_balance), rate{p_rate} {}

void Save_account::deposit(double mon_val) {
    mon_val = mon_val + (mon_val * rate / 100);
    Account::deposit(mon_val);
}

std::ostream& operator<<(std::ostream& os, const Save_account& account) {
	os << "So du hien tai la: " << account.balance << "Ti le lai suat: " << account.rate;
}