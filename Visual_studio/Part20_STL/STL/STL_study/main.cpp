#include <iostream>
using namespace std;

template <int N>
class Array
{
	int size{ N };
	int value[N];

	friend ostream& operator<<(ostream& os, const Array<N>& arr) {
		os << "[";
		for (const auto& a:arr.value)
		{
			os << a << " ";
		}
		os << "]";
		return os;
	}
public:
	Array() = default;
	Array(int val) {
		for (size_t i = 0; i < size; i++)
		{
			value[i] = val;
		}
	}
	void fill(int val) {
		for (size_t i = 0; i < size; i++)
		{
			value[i] = val;
		}
	}
	int get_size() const {
		return size;
	}
	~Array() {}

	int& operator[](int index) {
		return value[index];
	}
private:

};



int main() {
	Array<5> arr1;
	cout << arr1 << endl;
	cout << arr1.get_size() << endl;
	Array<5> arr2{ 100 };
	cout << arr2 << endl;
	return 0;
}