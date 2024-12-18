#include <iostream>
#include <memory>
#include <vector>
using namespace std;
int main() {
	cout << "============== unique_ptr ==============" << endl;
	unique_ptr<int> ptr1 = make_unique<int>(10);
	*ptr1 = 20;
	unique_ptr<int> ptr2 = move(ptr1);
	cout << ptr2.get() << endl;
	if (ptr1)
	{
		cout << "ptr1 is using: *ptr1 = "<< * ptr1 << endl;
	}

	if (ptr2)
	{
		cout << "ptr2 is using: *ptr2 = " << *ptr2 << endl;
	}
	unique_ptr<int> ptr3 = make_unique<int>(30);;
	vector<unique_ptr<int>> v;
	v.push_back(move(ptr2));
	v.push_back(move(ptr3));
	v.push_back(make_unique<int>(50));
	v.push_back(make_unique<int>(100));
	v.push_back(make_unique<int>(150));
	v.push_back(make_unique<int>(200));
	for (const auto &a:v)
	{
		cout << *a << endl;
	}

	cout << "============== shared_ptr ==============" << endl;
	shared_ptr<int> s_ptr1 = make_shared<int>(100);
	cout << s_ptr1.use_count() << endl;
	shared_ptr<int> s_ptr2 = move(s_ptr1);
	cout << s_ptr1.use_count() << endl;
	shared_ptr<int> s_ptr3 = s_ptr2;
	cout << s_ptr2.use_count() << endl;
	s_ptr1.reset();
	cout << "After reset: " << s_ptr1.use_count() << endl;
	cout << "After reset: " << s_ptr2.use_count() << endl;
	return 0;
}