#include <iostream>
using namespace std;

class Counter
{
public:
	static int count;
	Counter();
	~Counter();
	static int Get_counter();

private:

};

int Counter::count = 0;

Counter::Counter()
{
	count++;
}

Counter::~Counter()
{
	count--;
}

int Counter::Get_counter() {
	return count;
}

void Display_counter() {
	cout << "Value of counter is: " << Counter::Get_counter() << endl;
}

int main() {
	Display_counter();
	Counter a1;
	Counter a2;
	Counter a3;
	Display_counter();

	//Test constructor and destructor trong 1 block (scop)
	{
		Counter a4;
		Display_counter();
	}
	//Khi thoát ra khỏi 1 block, hàm hủy sẽ được gọi
	Display_counter();

	Counter* a5 = new Counter;
	Display_counter();

	delete a5;
	Display_counter();

	return 0;
}