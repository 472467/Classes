#include "Media.h"

Media::Media(){
	int id = 0;
	int rating = 0; // x/10
	int duration = 0; //seconds
	int year = 1970;
	char* publisher = new char[150];
	char* title =new char[200];
	char* artist =new char[150];
	char* director = new char[150];
}
int Media::getRating(){
  return rating;
}

void Media::setRating(int r){
  rating = r;
}
void Media::setDuration(int d){
  duration = d;
}
int Media::getDuration(){
  return duration;
}
int Media::getYear(){
  return year;
}
void Media::setYear(int y){
  year = y;
}
void Media::setTitle(char* t){
  title = t;
}
char* Media::getTitle(){
  return title;
}
char* Media::getArtist(){
  return artist;
}
void Media::setArtist(char* a){
  artist = a;
}
void Media::setPublisher(char* p){
  publisher = p;
}
char* Media::getPublisher(){
  return publisher;
}
char* Media::getDirector(){
  return director;
}
void Media::setDirector(char* d){
  director = d;
}
int Media::getID(){
  return 0;
}
