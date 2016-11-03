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
#include "VideoGame.h"

using namespace std;

VideoGame::VideoGame(){
	int id = 1;
	int rating = 0; // x/10
	int duration = 0; //seconds
	int year = 1970;
	char* publisher = new char[150];
	char* title =new char[200];
	char* artist =new char[150];
	char* director = new char[150];
}
int VideoGame::getID(){
	return 1;
}