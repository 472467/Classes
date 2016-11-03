#ifndef MOVIE_H
#define MOVIE_H

class Movie: public Media{
	
	public:
		Movie();
		int getRating();
		void setRating(int);
		void setDuration(int);
		int getDuration();
		int getYear();
		void setYear(int);
		void setTitle(char*);
		char* getTitle();
		char* getArtist();
		void setArtist(char*);
		void setPublisher(char*);
		char* getPublisher();
		char* getDirector();
		void setDirector(char*);
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