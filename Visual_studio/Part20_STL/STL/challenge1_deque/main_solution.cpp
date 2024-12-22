#include <iostream>
#include <deque>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

void find_palindrome(deque<string> d) {
	deque<string> new_deque;
	for (auto elem : d) {
		for (auto &e : elem) {
			if ((e >= 'A' && e <= 'Z' || e >= 'a' && e <= 'z')&&e!=' ')
				e = toupper(e);
			
			else
				e = '\0';
		}
		reverse(elem.begin(), elem.end());
		new_deque.push_back(elem);
	}
	for (auto &elem :d)
	{
		for (auto& e : elem) {
			if ((e >= 'A' && e <= 'Z' || e >= 'a' && e <= 'z') && e != ' ')
				e = toupper(e);
			else
				e = '\0';
		}
	}

	for (size_t i = 0; i < new_deque.size(); i++)
	{
		if (new_deque[i]==d[i])
		{
			cout << d[i] << " is a Palindrome" << endl;
		}
		else
		{
			cout << d[i] << " is not a Palindrome" << endl;
		}
	}
}

int main() {
	deque<string> d1{ "tAT", "BAC", "VTV", "tamMAT", "A Santa at Nasa"};
	find_palindrome(d1);
	return 0;
}