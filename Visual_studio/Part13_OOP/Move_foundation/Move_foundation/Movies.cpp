#include "Movies.h"

Movies::Movies() {

}

Movies::~Movies() {

}

bool Movies::increment_watched(string p_name) {
	for (size_t i = 0; i < movies.size(); i++)
	{
		if (movies.at(i).get_movie_name()==p_name)
		{
			movies.at(i).increment_watched();
			return true;
		}
	}
	return false;
}

bool Movies::add_movie(string p_name, string p_rating, int p_watched) {
	for (size_t i = 0; i < movies.size(); i++)
	{
		if (movies.at(i).get_movie_name() == p_name)
		{
			return false;
		}
	}
	Movie temp{ p_name, p_rating, p_watched };
	movies.push_back(temp);
}

void Movies::Display() {
	for (size_t i = 0; i < movies.size(); i++)
	{
		cout << "----------------------------------" << endl;
		cout << movies.at(i).get_movie_name() << endl;
		cout << movies.at(i).get_movie_rating() << endl;
		cout << movies.at(i).get_watched() << endl;
	}
}