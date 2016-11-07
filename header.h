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
#include "Song.h"
#include "Movie.h"

#pragma once


int translateMove(char* in, std::vector<Media*>* v);