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
#include "Media.h"

using namespace std;

int Media::getRating(){
  return rating;
}

void Media::setRating(int r){
  rating = r;
}
