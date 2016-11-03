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
#include "Movie.h"

using namespace std;

Movie::Movie(){
	int id = 3;
	int rating = 0; // x/10
	int duration = 0; //seconds
	int year = 1970;
	char* publisher = new char[150];
	char* title =new char[200];
	char* artist =new char[150];
	char* director = new char[150];
}
int Movie::getID(){
	return 3;
}