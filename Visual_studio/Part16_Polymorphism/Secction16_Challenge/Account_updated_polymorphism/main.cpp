#include "Account.h"
#include "Saving_Account.h"

int main() {
	Saving_Account acc1("TamDao", 1000, 5);
	acc1.deposit(1000);
	acc1.withdraw(500);
	cout << acc1 << endl;

	return 0;
}