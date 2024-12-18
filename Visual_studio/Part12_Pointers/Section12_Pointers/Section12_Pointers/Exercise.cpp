#include <iostream>
#include <string>
using namespace std;

///*Bài tập coding 30: Swap Values using Pointers*/
//void swap_func(int* p1, int* p2);
//
//int main() {
//	int a = 5, b = 10;
//	int* prt_a = &a;
//	int* prt_b = &b;
//
//	cout << a << " " << b << endl;
//	cout << "----------------------" << endl;
//	swap_func(prt_a, prt_b);
//
//	cout << "----------------------" << endl;
//	cout << a << " " << b << endl;
//}
//
//void swap_func(int* p1, int* p2) {
//	int swap = 0;
//	swap = *p1;
//	*p1 = *p2;
//	*p2 = swap;
//
//	//swap(p1, p2);
//
//	cout << "Value of two number after swap is:" << endl;
//	cout << "a = " << *p1 << endl;
//	cout << "b = " << *p2 << endl;
//
//}

/*Bài tập coding 31: Passing a Pointer to a Function*/
void multilier_value(int* ptr, int multilier);

int main() {
	int value = 10;
	int* ptr_value = &value;
	multilier_value(ptr_value, 3);
	return 0;
}

void multilier_value(int* ptr, int multilier) {
	*ptr *= multilier;
	cout << *ptr << endl;
}

///*Bài tập coding 32: Find the Maximum Element in an Array using Pointers*/
//int findMaxElement(int* arr, int size);
//
//int main() {
//	int arr_number[] = { -5, -12, -3, -8, -1 };
//	int* prt_arr_number = arr_number;
//	cout << findMaxElement(prt_arr_number,5);
//	return 0;
//}
//
//int findMaxElement(int* arr, int size) {
//	int max_number = *arr;
//	for (size_t i = 0; i < size; i++)
//	{
//		if (*(arr+i)>max_number)
//		{
//			max_number = *(arr+i);
//		}
//	}
//	return max_number;
//}

///*Bài tập coding 33: Reverse an Array using Pointers (Challenging!)*/
//void reverse_array(int* arr, int size);
//void display_arr(int* arr, int size);
//
//int main() {
//	int arr_number[] = {2,3,4,5,6};
//	int size = sizeof(arr_number) / sizeof(arr_number[0]);
//	int* ptr_arr_number = arr_number;
//	reverse_array(ptr_arr_number, size);
//	display_arr(ptr_arr_number, size);
//	return 0;
//}
//
//void reverse_array(int* arr, int size) {
//	int temp = 0;
//	if (size%2==0)
//	{
//		for (size_t i = 0; i < size / 2; i++)
//		{
//			temp = *(arr + i);
//			*(arr + i) = *(arr + size - i - 1);
//			*(arr + size - i - 1) = temp;
//		}
//	}
//	else
//	{
//		for (size_t i = 0; i < (size - 1) / 2; i++)
//		{
//			temp = *(arr + i);
//			*(arr + i) = *(arr + size - i - 1);
//			*(arr + size - i - 1) = temp;
//		}
//	}
//}
//
//void display_arr(int* arr, int size) {
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << *(arr + i) << " ";
//	}
//}

///*Bài tập coding 34: Reverse a std::string using Pointers (Challenging!)*/
//string reverse_string(const string& str);
//
//int main() {
//	string my_name = "Minh Tam";
//	cout << my_name << endl;
//	cout << reverse_string(my_name) << endl;
//	cout << my_name << endl;
//	return 0;
//}
//
//string reverse_string(const string& str) {
//	string reverse;
//	const char* start = str.c_str();
//	const char* end = str.c_str() + size(str) - 1;
//
//	while (start<=end)
//	{
//		reverse.push_back(*end);
//		end--;
//	}
//	return reverse;
//}

