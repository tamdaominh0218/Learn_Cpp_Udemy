#include "Movie.h"

Movie::Movie(string p_name, string p_rating, int p_watched) :movie_name{ p_name }, movie_rating{ p_rating }, watched{ p_watched } {

}

Movie::Movie(const Movie& source) :movie_name{ source.movie_name }, movie_rating{ source.movie_rating }, watched{ source.watched } {

}

Movie::~Movie() {
	
}

void Movie::set_movie_name(string p_name) {
	movie_name = p_name;
}

string Movie::get_movie_name() {
	return movie_name;
}

void Movie::set_movie_rating(string p_rating) {
	movie_rating = p_rating;
}

string Movie::get_movie_rating() {
	return movie_rating;
}

void Movie::set_watched(int p_watched) {
	watched = p_watched;
}

int Movie::get_watched() {
	return watched;
}

int Movie::increment_watched() {
	return ++watched;
}

void Movie::Display_film() {
	cout << "Name of film is: " << Movie::get_movie_name() << endl;
	cout << "Rating of film is: " << Movie::get_movie_rating() << endl;
	cout << "Watched: " << Movie::get_watched() << " (time)" << endl;
}