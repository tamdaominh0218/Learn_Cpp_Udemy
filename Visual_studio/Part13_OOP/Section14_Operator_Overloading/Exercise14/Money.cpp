#include "Money.h"

using namespace std;

Money::Money(int dollars, int cents) : dollars{ dollars }, cents{ cents } {}

Money::Money(int total) : dollars{ total / 100 }, cents{ total % 100 } {}


//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR METHOD DEFINITIONS BELOW THIS LINE----
bool Money::operator==(const Money& rhs)const {
    if (dollars == rhs.dollars && cents == rhs.cents)
        return true;
    else
        return false;
}

Money operator+(const Money& rhs1, const Money& rhs2) {
    return Money(rhs1.dollars + rhs2.dollars, rhs1.cents + rhs2.cents);
}

void Money::display() {
    cout << get_dollars() << " " << get_cents() << endl;
}

int Money::get_cents() {
    return cents;
}

int Money::get_dollars() {
    return dollars;
}

std::ostream& operator<<(std::ostream& os, const Money& money) {
    os << "$(" << money.dollars << "." << money.cents << ")";
    return os;
}


//----WRITE YOUR METHOD DEFINITIONS ABOVE THIS LINE----


