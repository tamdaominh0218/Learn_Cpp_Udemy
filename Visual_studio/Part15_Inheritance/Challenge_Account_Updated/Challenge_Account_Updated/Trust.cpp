#include "Trust.h"

Trust::Trust()
	:Saving_Account("No account name", 0.0, 0.0){}

Trust::Trust(string p_name, double p_balan, double rate)
	:Saving_Account(p_name, p_balan, rate){}

Trust::~Trust(){}

void Trust::deposit(double amount) {
	Saving_Account::deposit(amount);
	if (amount >=5000)
	{
		cout << "Ban duoc tang them 50$ vo tai khoan do da gui tien vo Trust account tu 5000$" << endl;
		balance += 50;
	}
}

void Trust::withdraw(double amount) {
	static int count = 0;
	count++;
	if (count<=3 && amount<=0.2*balance)
	{
		Account::withdraw(amount);
	}
	else
	{
		if (count >3 && amount <= 0.2 * balance)
		{
			cout << "Giao dich khong thanh cong do vuot gioi han so lan rut trong nam!" << endl;
		}
		else if (count <= 3 && amount > 0.2 * balance)
		{
			cout << "Giao dich khong thanh cong do so tien rut vuot qua muc quy dinh!" << endl;
		}
		else if (count > 3 && amount > 0.2 * balance)
		{
			cout << "Giao dic khong thanh cong, vui long lien he Tam Dao de biet them thong tin" << endl;
		}
	}
}

ostream& operator<<(ostream& os, const Trust& tr) {
	os << "Account: [" << tr.name << "]" << ", balance: " << tr.balance << ", rate: " << tr.int_rate;
	return os;
}
