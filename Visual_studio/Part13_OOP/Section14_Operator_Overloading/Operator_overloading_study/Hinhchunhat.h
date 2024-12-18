#pragma once
#include <iostream>
using namespace std;

class Hinhchunhat
{
public:
	double chieu_dai;
	double chieu_rong;

	Hinhchunhat();
	Hinhchunhat(double p_dai, double p_rong);
	Hinhchunhat operator+(const Hinhchunhat& h2) const;
	~Hinhchunhat();
	double get_dien_tich();
};

