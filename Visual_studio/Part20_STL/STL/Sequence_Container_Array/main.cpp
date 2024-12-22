#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void display(const array<int, 5>& arr) {
	cout << "[ ";
	for (auto& a:arr)
	{
		cout << a << " ";
	}
	cout << " ]" << endl;
}

void fill(array<int, 5>& arr, int val) {
	for (auto &a:arr)
	{
		a = val;
	}
}

void test1() {
	array<int, 5> arr1{ 1, 2, 3, 4, 5 };
	display(arr1);
	fill(arr1, 100);
	display(arr1);

}
void test2() {
	array<int, 5> arr1{ 1,2,3,4,5 };
	int* ptr = &arr1[1];
	cout << *ptr;
}

void test3() {
	array<int, 5> arr1{ 3, 6, 1, 9, 4 };
	sort(arr1.begin(), arr1.end());
	display(arr1);
	auto it1 = max_element(arr1.begin(), arr1.end());
	cout << *it1;
}

int main() {
	//test1();
	//test2();
	test3();
	return 0;
}