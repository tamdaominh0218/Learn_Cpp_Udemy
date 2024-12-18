#pragma once
#include <iostream>
using namespace std;

class complex
{
public:
	double real, imag;
	complex();
	complex(double p_real, double p_imag);
	complex operator+(const complex& rhs) const;
	complex& operator+=(const complex& rhs);
};

