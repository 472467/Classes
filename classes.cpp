/* EXCELLENT PROGRAM WRITTEN BY BRENDAN
THIS PROGRAM MAKES A DATABASE OF MEDIA 
DNLKASDNLKDSANLKDASNLKDASLNK!
WATCH OUT FOR SEGMENTATION FAULTS
INPUTS VIDEO GAMES MOVIES AND SONGS*/

#include "header.h"

using namespace std;


int main(){
  system("clear");//initially clears command line
  
  vector <Media*>* v = new vector<Media*>;//pointer of pointers
  char input[30];
  for(int x = 0; x < 30; x++){
    input[x]= '\0';
  }
  int count = 0;
  while(true){
    cout << "\n\nWelcome to the media database. Please 'ADD' or 'SEARCH'(prints matching Media units).\nType EXIT to quit the program.\n";
    cin.clear();
    cin.sync();//cleans cin
	if(count != 0){
		//cin.ignore();
	}
	
    cin.getline(input, 30);
    translateMove(input, v);
	
	//cout << v->at(1)->getTitle();

	
	count++;
  }
  
}

int translateMove(char *in, vector <Media*>* v){//converts input into do things
  bool running = true;
  char* newIn = new char[200];//old thing that is now stuck into program, had to make new char* arr for each input
  int mType = 0;//media type
  int tmpInt = 0;//int that is used to store ints until they are placed into class
  int tInt = 0;//used to to do the search one, not sure why this is here
  
  if(strcasecmp(in, "exit") == 0){
    exit(1);//quits program
  }else if(strcasecmp(in, "add") == 0){//adds new media to media vector, this turned out a bit longer than I expected
    JUMP:do {
		
      cout << "What type of media would you like to add? VideoGame(1), Movie(2), Song(3)";
      scanf ("%d",&mType);//way to input an int without mixing cin with cin.getline(creates segmentation faults),
      //or converting a char array to an int(the worst)
      if(mType == 1){//videogame 

		VideoGame * vg = new VideoGame();
		cout << "VideoGame:\n\n";

		cout << "Enter the Title: ";
		cin.ignore();//SKIPS GETLINE OTHERWISE!!
		cin.getline(newIn, 200);
		char *t = new char[200];
		vg->setTitle(newIn);
		vg->setID(1);

		cout << "\nEnter the year of release: ";
		scanf ("%d",&tmpInt);//scans input into the location of the tmpInt
		vg->setYear(tmpInt);//places it in the vec tor

		cout << "\nEnter the publisher: ";
		cin.ignore();//makes this stupid language not skip my input lines
		cin.getline(t, 200);
		vg->setPublisher(t);

		cout << "\nEnter the rating(x/10 | INT)";
		scanf("%d", &tmpInt);//not 100% sure why i can reuse the int storer but not the char arr one
		vg->setRating(tmpInt);//maybe its the &, idk

		cin.ignore();
		(*v).push_back(vg);//pushes garbage class into garbage vector
      }else if(mType == 2){//Movie
	
		Movie * mv = new Movie();//rest of these are pretty similar VideoGame
		cout << "Movie:\n\n";

		cout << "Enter the Title: ";
		cin.ignore();
		cin.getline(newIn, 200);
		mv->setTitle(newIn);
		mv->setID(3);

		cout << "\nEnter the year of release: ";
		scanf ("%d",&tmpInt);
		mv->setYear(tmpInt);

		cout << "\nEnter the director: ";
		cin.ignore();
		char *t = new char[200];
		cin.getline(t, 200); 
		mv->setDirector(t);

		cout << "\nEnter the rating(x/10 | INT)";
		scanf("%d", &tmpInt);
		mv->setRating(tmpInt);

		cout << "\nEnter the duration(minutes): ";
		scanf("%d", &tmpInt);
		mv->setDuration(tmpInt);
		(*v).push_back(mv);
		cin.ignore();
	
      }else if(mType == 3){//song 

		Song * s = new Song();
		
		cout << "Song:\n\n";

		cout << "Enter the Title: ";
		cin.ignore();
		cin.getline(newIn, 200);
		char *t = new char[200];
		s->setTitle(newIn);
		s->setID(2);

		cout << "\nEnter the year of release: ";
		scanf ("%d",&tmpInt);
		s->setYear(tmpInt);
		
		cout << "\nEnter the duration(minutes): ";
		scanf ("%d",&tmpInt);
		s->setDuration(tmpInt);

		cout << "\nEnter the artist: ";
		cin.ignore();
		cin.getline(t, 200);
		s->setArtist(t);

		cout << "\nEnter the publisher: ";
		//cin.ignore();
		char* c1 = new char[200];
		cin.getline(c1, 200);
		s->setPublisher(c1);
		(*v).push_back(s);
      }
    }while(mType != 1 && mType != 2 && mType != 3);
  }else if(strcasecmp(in, "search") == 0){//searches for items in the vec tor
		
	while(tInt != 1 && tInt != 2){//This actually works!
	  
		cout << "\nWould you like to search for a Title(1) or a Year(2)?: ";//who knows
		scanf("%d", &tInt);
		if(tInt == 1){//search by title
		
			cout << "\nInput the title: ";
			cin.ignore();
			cin.getline(newIn, 200);
		
			for(vector<Media*>::iterator it = v->begin(); it != v->end(); it++){//it represents the added classes, goes from start to en
		  
				if(strcasecmp((*it)->getTitle(), newIn) == 0){
				
					if((*it)->getID() == 1){//Videogame
					  
						cout << "Videogame: " << ((*it)->getTitle()) << "/ Released in " << ((*it)->getYear()) << "/ Published by " << ((*it)->getPublisher())<< "/ Rated (" << ((*it)->getRating()) << "/10)";
					  
					}else if((*it)->getID() == 2){//Song
					  
						cout << "Song: " << ((*it)->getTitle()) << "/ Released in " << ((*it)->getYear()) << "/ Published by " << ((*it)->getPublisher())<< "/ Made by " << ((*it)->getArtist()) << "/ " << ((*it)->getDuration()) << " minutes";
					  
					}else if((*it)->getID() == 3){//Movie
					  
						cout << "Movie: " << ((*it)->getTitle()) << "/ Released in " << ((*it)->getYear()) << "/ Directed by " << ((*it)->getDirector())<< "/ Rated (" << ((*it)->getRating()) << "/10) " << "/ " << ((*it)->getDuration()) << " minutes";
				  
				}
			}
		}
		
			}else if(tInt == 2){//year
				int year = 0;
				cout << "\nInput the year: ";
				cin.ignore();
				scanf ("%d",&year);
				
				for(vector<Media*>::iterator it = (*v).begin(); it != (*v).end(); it++){//it represents the added classes, goes from start to en
				  int tmp = (*it)->getYear();
				  if(tmp == year){
						int tmp2 = ((*it)->getID());
						
						
						if(tmp2 == 1){//Videogame
						  cout << "\nVideogame: " << ((*it)->getTitle());//these were used to bug fix
						  cout << "/ Released in "; //thats why they are spread out
						  cout << ((*it)->getYear()); //apparently my default constructors sucked
						  cout << "/ Published by ";
						  cout << ((*it)->getPublisher()); 
						  cout << "/ Rated ("; 
						  cout << ((*it)->getRating()); 
						  cout << "/10)";
						  
						}else if(tmp2 == 2){//Song
						  cout << "\nSong: ";
						  cout << ((*it)->getTitle()); 
						  cout << "/ Released in "; 
						  cout << ((*it)->getYear()); 
						  cout << "/ Published by "; 
						  cout << ((*it)->getPublisher()); 
						  cout << "/ Made by "; 
						  cout << ((*it)->getArtist()); 
						  cout << "/ "; 
						  cout << ((*it)->getDuration()); 
						  cout << " minutes";
						  
						}else if(tmp2 == 3){//Movie
						  

						  cout << "\nMovie: "; 
						  cout << ((*it)->getTitle()); 
						  cout << "/ Released in "; 
						  cout << ((*it)->getYear()); 
						  cout << "/ Directed by "; 
						  cout << ((*it)->getDirector()); 
						  cout << "/ Rated ("; 
						  cout << ((*it)->getRating()); 
						  cout << "/10) "; 
						  cout << "/ "; 
						  cout << ((*it)->getDuration()); 
						  cout << " minutes";
						}
					}
				}
			}
		}   
  }
}    
 


