#include "Account.h"
#include "Trust.h"
#include "Account_util.h"
int main() {
	//Account acc1{ "DaoMinhTam", 1000 };
	//Account acc2{ "VietinBank", 2000 };
	//Account acc3{ "BatMan", 3000 };
	//Account acc4{ "PhoBo", 4000 };
	//vector<Account> acc;
	//acc.push_back(acc1);
	//acc.push_back(acc2);
	//acc.push_back(acc3);
	//acc.push_back(acc4);
	//Display(acc);
	//Deposit(acc, 2000);
	//Withdraw(acc, 1000);

	//vector<Saving_Account> acc2;
	//acc2.push_back(Saving_Account{ "TamDaoMinh", 1000, 0 });
	//acc2.push_back(Saving_Account{ "ThuHienNguyen", 3000, 5 });
	//Display(acc2);
	//Deposit(acc2, 2000);
	//Withdraw(acc2, 1000);

	/*vector<Checking_Account> acc3;
	acc3.push_back(Checking_Account{ "TamDaoMinh", 1000, 0 });
	acc3.push_back(Checking_Account{ "ThuHienNguyen", 3000, 1.5 });
	Display(acc3);
	Deposit(acc3, 2000);
	Withdraw(acc3, 1000);*/

	/*Trust T1("TamDao", 2000, 5);
	cout << T1 << endl;
	T1.deposit(4000);
	cout << T1 << endl;
	T1.withdraw(3000);
	cout << T1 << endl;*/
	vector<Trust> acc4;
	acc4.push_back(Trust{ "TamDaoMinh", 2000, 5 });
	acc4.push_back(Trust{ "ThuHienNguyen", 3000, 7 });
	Display(acc4);
	Deposit(acc4, 6000);
	Withdraw(acc4, 500);

	return 0;
}