#include <iostream>
#include <string>
#include <istream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iterator>
#include <iomanip>
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
		int getID();
		
	private:
		int id = 0;
		int rating = 0; // x/10
		int duration = 0; //seconds
		char* publisher = new char[150];
		char* title =new char[200];
		char* artist =new char[150];
		int year = 1970;
		char* director = new char[150];
	
};
#endif