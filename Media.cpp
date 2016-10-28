#include "Media.h"

using namespace std;

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
