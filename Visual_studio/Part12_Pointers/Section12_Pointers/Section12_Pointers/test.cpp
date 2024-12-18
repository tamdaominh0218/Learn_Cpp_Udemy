#include <iostream>

using namespace std;

//int main() {
//	int score[] = { 7,6,9,-11 };
//	int* prt_score = score;
//	while (*prt_score!=-11 )
//	{
//		cout << *prt_score << endl;
//		prt_score++;
//	}
//
//	cout << "-------------------" << endl;
//	prt_score = score;
//	while (*prt_score != -11)
//	{
//		cout << *prt_score++ << endl;
//	}
//
//	cout << "-------------------" << endl;
//	prt_score = score;
//	while (*prt_score != -11)
//	{
//		cout << *++prt_score << endl;
//	}
//	return 0;
//}

//void double_value(int* p);
//
//int main() {
//	int number = 10;
//	int* prt_number = &number;
//	cout << number << endl;
//	double_value(&number);
//	cout << number << endl;
//	double_value(prt_number);
//	cout << number << endl;
//	return 0;
//}
//
//void double_value(int* p) {
//	*p *= 2 ;
//}

int* create_arr(int size, int init_value);

int main() {
	int* my_arr = create_arr(20, 5);
	for (size_t i = 0; i < 20; i++)
	{
		cout << my_arr[i] << endl;
	}
	delete[] my_arr;
	return 0;
}

int* create_arr(int size, int init_value) {
	int* ptr_arr = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		ptr_arr[i] = init_value;
	}
	return ptr_arr;
}