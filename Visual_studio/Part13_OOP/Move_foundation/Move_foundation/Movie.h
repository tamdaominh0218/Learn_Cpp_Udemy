#pragma once
#include <iostream>
#include <string>

using namespace std;

class Movie
{
private:
	string movie_name;
	string movie_rating;
	int watched;
public:
	Movie(string p_name, string p_rating, int p_watched);
	Movie(const Movie& source);
	void set_movie_name(string p_name);
	string get_movie_name();
	void set_movie_rating(string p_rating);
	string get_movie_rating();
	void set_watched(int p_watched);
	int get_watched();
	int increment_watched();
	void Display_film();
	~Movie();
};
