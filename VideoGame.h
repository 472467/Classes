#ifndef VIDEOGAME_H
#define VIDEOGAME_H

class VideoGame:public Media{
	
	public:
		VideoGame();
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