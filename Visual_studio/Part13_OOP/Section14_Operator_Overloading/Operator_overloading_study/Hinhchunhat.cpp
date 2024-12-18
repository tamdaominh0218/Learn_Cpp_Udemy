#include "Hinhchunhat.h"

Hinhchunhat::Hinhchunhat()
	:chieu_dai{ 0 }, chieu_rong{ 0 } {
}

Hinhchunhat::Hinhchunhat(double p_dai, double p_rong)
	:chieu_dai{ p_dai }, chieu_rong{ p_rong } {

}

Hinhchunhat Hinhchunhat::operator+(const Hinhchunhat& h2) const{
	return Hinhchunhat(chieu_dai + h2.chieu_dai, chieu_rong + h2.chieu_rong);
}

double Hinhchunhat::get_dien_tich() {
	return chieu_dai * chieu_rong;
}