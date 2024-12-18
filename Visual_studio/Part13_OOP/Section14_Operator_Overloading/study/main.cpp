#include <iostream>
#include "complex.h"
using namespace std;

int main() {
    complex c1(3, 5);
    complex c2(2, 4);
    complex c4(2, 2);

    complex c3 = c1+ c2 + c4; // Tương đương với c1.operator+=(c2);

    complex c5(1,1);
    c5 += c1 += c4;

    cout << c5.real << " + i" << c5.imag << endl; // Kết quả: 5 + i9
    return 0;
}