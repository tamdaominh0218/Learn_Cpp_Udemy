#include "Hinhchunhat.h"

int main() {
	Hinhchunhat h1{ 2, 5 };
	Hinhchunhat h2{ 4,6 };
	Hinhchunhat h3 = h1 + h2;
	cout << h3.get_dien_tich() << endl;
	return 0;
}