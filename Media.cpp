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

using namespace std;


class Media{
  int rating = -16;
public:
  int getRating(){return  rating;}
  void setRating(int){}
  
};

int getRating(){
  return rating;
}

void setRating(int r){
  rating = r;
}
