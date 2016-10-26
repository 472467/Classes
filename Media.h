#ifndef MEDIA_H
#define MEDIA_H

class Media{
	
	public:
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
		
	private:
		int rating = 0; // x/10
		int duration = 0; //seconds
		char* publisher [150];
		char* title [200];
		char* artist [150];
		int year = 1970;
		char* director [150];
	
};
#endif