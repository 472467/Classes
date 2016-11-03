/* EXCELLENT PROGRAM WRITTEN BY BRENDAN
THIS PROGRAM MAKES A DATABASE OF MEDIA 
INPUTS VIDEO GAMES MOVIES AND SONGS*/

#include "header.h"

int main(){
  system("clear");//initially clears command line
  
  vector <Media*>* v = new vector<Media*>;//pointer of pointers
  char input[30];
  for(int x = 0; x < 30; x++){
    input[x]= '\0';
  }
  while(true){
    cout << "Welcome to the media database. Please 'ADD', 'SEARCH'(prints matching Media units) or 'DELETE' a Media unit.\nType EXIT to quit the program.\n";
    cin.clear();
    cin.sync();//cleans cin
    cin.getline(input, 30);
    translateMove(input, v);

  }
  
}

int translateMove(char *in, vector<Media*>* v){
  bool running = true;
  char newIn [200];
  int mType = 0;
  int tmpInt = 0;
  if(strcasecmp(in, "exit") == 0){
      exit(1);
  }else if(strcasecmp(in, "add") == 0){
  JUMP:do {
      cout << "What type of media would you like to add? VideoGame(1), Song(2), Movie(3)";
      scanf ("%d",&mType);//way to input an int without mixing cin with cin.getline(creates segmentation faults),
      //or converting a char array to an int(the worst)
      if(mType == 1){
	VideoGame * vg = new VideoGame();
	cout << "VideoGame:\n\n";
	cout << "Enter the Title: ";
	cin.getline(newIn, 200);
	char *t = newIn;
	vg->setTitle(t);
	cout << "\nEnter the year of release: ";
	scanf ("%d",&tmpInt);
	vg->setYear(tmpInt);
	cout << "\nEnter the publisher: ";
	cin.getline(newIn, 200);
	t = newIn;
	vg->setPublisher(t);
	cout << "\nEnter the rating(x/10 | INT)";
	scanf("%d", tmpInt);
	vg->setRating(tmpInt);
      }else if(mType == 2){
	
      }else if(mType == 3){
	
      }
    }while(mType != 1 && mType != 2 && mType != 3);
  }
}    
 


