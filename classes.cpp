/* EXCELLENT PROGRAM WRITTEN BY BRENDAN
THIS PROGRAM MAKES A DATABASE OF MEDIA 
INPUTS VIDEO GAMES MOVIES AND SONGS*/

#include "header.h"

using namespace std;


int main(){
  system("clear");//initially clears command line
  
  vector <Media*>* v = new vector<Media*>;//pointer of pointers
  Movie* mv = new Movie(); 
  cout << (*mv).getYear() << endl;
  (*mv).setID(3);
  (*mv).setYear(1980);
  cout << (*mv).getYear() << endl;
  cout << (*mv).getID() << endl;
  v->push_back(mv);
  char input[30];
  for(int x = 0; x < 30; x++){
    input[x]= '\0';
  }
  while(true){
    cout << "\nWelcome to the media database. Please 'ADD', 'SEARCH'(prints matching Media units) or 'DELETE' a Media unit.\nType EXIT to quit the program.\n";
    cin.clear();
    cin.sync();//cleans cin
    cin.getline(input, 30);
    translateMove(input, v);

  }
  
}

int translateMove(char *in, vector <Media*>* v){
  bool running = true;
  char newIn [200];
  int mType = 0;
  int tmpInt = 0;
  int tInt = 0;
  
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
		char *t = newIn;
		vg->setTitle(t);
		vg->setID(1);

		cout << "\nEnter the year of release: ";
		scanf ("%d",&tmpInt);
		vg->setYear(tmpInt);

		cout << "\nEnter the publisher: ";
		cin.ignore();
		cin.getline(newIn, 200);
		t = newIn;
		vg->setPublisher(t);

		cout << "\nEnter the rating(x/10 | INT)";
		scanf("%d", &tmpInt);
		vg->setRating(tmpInt);

		cin.ignore();
		(*v).push_back(vg);
      }else if(mType == 2){//Movie
	
		Movie * mv = new Movie();
		cout << "Movie:\n\n";

		cout << "Enter the Title: ";
		cin.ignore();
		cin.getline(newIn, 200);
		char *t = newIn;
		mv->setTitle(t);
		mv->setID(3);

		cout << "\nEnter the year of release: ";
		scanf ("%d",&tmpInt);
		mv->setYear(tmpInt);

		cout << "\nEnter the director: ";
		cin.ignore();
		cin.getline(newIn, 200); 
		t = newIn;
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
		char *t = newIn;
		s->setTitle(t);
		s->setID(2);

		cout << "\nEnter the year of release: ";
		scanf ("%d",&tmpInt);
		s->setYear(tmpInt);

		cout << "\nEnter the artist: ";
		cin.ignore();
		cin.getline(newIn, 200);
		t = newIn;
		s->setArtist(t);

		cout << "\nEnter the publisher: ";
		cin.ignore();
		cin.getline(newIn, 200);
		s->setPublisher(newIn);
		(*v).push_back(s);
      }
    }while(mType != 1 && mType != 2 && mType != 3);
  }else if(strcasecmp(in, "search") == 0){
		
	while(tInt != 1 && tInt != 2){
	  
		cout << "\nWould you like to search for a Title(1) or a Year(2)?: ";
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
		
			}else if(tInt == 2){
				int year = 0;
				cout << "\nInput the year: ";
				cin.ignore();
				scanf ("%d",&year);
				
				for(vector<Media*>::iterator it = (*v).begin(); it != (*v).end(); it++){//it represents the added classes, goes from start to en
				  int tmp = (*it)->getYear();
				  if(tmp == year){
						int tmp2 = ((*it)->getID());
						
						
						if(tmp2 == 1){//Videogame
						  cout << "Videogame: " << ((*it)->getTitle());
						  cout << "/ Released in "; 
						  cout << ((*it)->getYear()); 
						  cout << "/ Published by ";
						  cout << ((*it)->getPublisher()); 
						  cout << "/ Rated ("; 
						  cout << ((*it)->getRating()); 
						  cout << "/10)";
						  
						}else if(tmp2 == 2){//Song
						  cout << "Song: ";
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
						  
						  char* c1 =(char *) malloc(200);
						  cout << "ERROR4\n";
						  //strcpy(c1, ((*it)->getTitle())); 
						  
						  char* c2 = (char *) malloc(100);
						  //strcpy(c2, ((*it)->getDirector()));
						  
						  //char* c3;
						  cout << "Movie: "; 
						  cout << "ERROR4\n";
						  cout << ((*it)->getTitle()); 
						  cout << "ERROR5\n";
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
 


