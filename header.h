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
#pragma once
#pragma GCC diagnostic ignored "-w"

using namespace std;

#include "Media.h"
#include "VideoGame.h"
#include "Song.h"
#include "Movie.h"

int translateMove(char* in, vector<Media*>* v);

