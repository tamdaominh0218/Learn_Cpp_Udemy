// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

bool is_palindrome(const std::string& s)
{
    deque<char> c;
    //toupper cac ky tu trong chuoi
    for (auto& elem : s) {
        if (isalpha(elem))
        {
            char a = toupper(elem);
            c.push_back(a); //push ky tu sau khi toupper vao c la 1 deque
        }
    }

    //tao 1 deque moi (c1 = c)
    deque<char> c1 = c;
 
    //Dao nguoc cac ky tu trong c
    reverse(c.begin(), c.end());
    if (c == c1) {
        return true;
    }
    
    return false;
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };

    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for (const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s) << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}