#ifndef MOVIE_H
#define MOVIE_H

class Movie: public Media{
	
	public:
		Movie();
		int getID();
		
	private:
		int id;
		int rating; // x/10
		int duration; //seconds
		char* publisher;
		char* title;
		char* artist;
		int year;
		char* director;
	
};
#endif