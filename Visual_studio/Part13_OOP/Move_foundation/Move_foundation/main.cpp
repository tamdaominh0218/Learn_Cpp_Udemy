#include "Movie.h"
#include "Movies.h"

void increment_watched(Movies& movies, string name) {
	if (movies.increment_watched(name))
	{
		cout << name << " watch encremented" << endl;
	}
	else
	{
		cout << name << " not found!" << endl;
	}
}

void add_movie(Movies& movies, string p_name, string p_rating, int p_watched) {
	if (movies.add_movie(p_name, p_rating, p_watched))
	{
		cout << p_name << " added" << endl;
	}
	else
	{
		cout << p_name << " not added yet!" << endl;
	}
}

int main() {
	Movies my_movies;

	my_movies.Display();

	add_movie(my_movies, "Big", "PG-13", 2);                 // OK
	add_movie(my_movies, "Star Wars", "PG", 5);             // OK
	add_movie(my_movies, "Cinderella", "PG", 7);           // OK

	my_movies.Display();   // Big, Star Wars, Cinderella

	add_movie(my_movies, "Cinderella", "PG", 7);            // Already exists
	add_movie(my_movies, "Ice Age", "PG", 12);              // OK

	my_movies.Display();    // Big, Star Wars, Cinderella, Ice Age

	increment_watched(my_movies, "Big");                    // OK
	increment_watched(my_movies, "Ice Age");              // OK

	my_movies.Display();    // Big and Ice Age watched count incremented by 1

	increment_watched(my_movies, "XXX");         // XXX not found


	return 0;
}