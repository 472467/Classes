#ifndef SONG_H
#define SONG_H

class Song:public Media{
	
	public:
		Song();
		int getID();
		
	private:
		int id;//determines which class is which
		int rating; // x/10
		int duration; //seconds
		char* publisher;
		char* title;
		char* artist;
		int year;
		char* director;
	
};
#endif