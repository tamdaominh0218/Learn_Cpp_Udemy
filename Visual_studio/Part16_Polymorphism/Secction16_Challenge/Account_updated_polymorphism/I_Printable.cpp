#include "I_Printable.h"

I_Printable::I_Printable(){}
I_Printable::~I_Printable(){}

ostream& operator << (ostream & os, const I_Printable & ip) {
	ip.print(os);
	return os;
}