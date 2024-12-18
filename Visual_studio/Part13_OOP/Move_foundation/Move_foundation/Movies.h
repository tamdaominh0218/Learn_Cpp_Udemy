#pragma once
#include <iostream>
#include <string>
#include "Movie.h"
#include <vector>

using namespace std;

class Movies
{
private:
	vector<Movie> movies;
	
public:
	Movies();
	~Movies();
	bool increment_watched(string name);
	bool add_movie(string p_name, string p_rating, int p_watched);
	void Display();
};

