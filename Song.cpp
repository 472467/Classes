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
#include "Song.h"

using namespace std;

Song::Song(){
	id = 2;
	rating = 0; // x/10
	duration = 0; //seconds
	year = 1970;
	publisher = new char[150];
	title =new char[200];
	artist =new char[150];
	director = new char[150];
}
int Song::getID(){
	return id;
}