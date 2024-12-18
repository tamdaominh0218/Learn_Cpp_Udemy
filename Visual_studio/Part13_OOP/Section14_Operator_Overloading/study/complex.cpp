#include "complex.h"

complex::complex(){}

complex::complex(double p_real, double p_imag) 
	:real{p_real}, imag{p_imag}{}

complex complex::operator+(const complex& rhs) const {
	return complex(real + rhs.real, imag + rhs.imag);
}

complex& complex::operator+=(const complex& rhs){
	real += rhs.real;
	imag += rhs.imag;
	return *this;
}