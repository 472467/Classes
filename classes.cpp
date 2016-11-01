/* EXCELLENT PROGRAM WRITTEN BY BRENDAN
THIS PROGRAM MAKES A DATABASE OF MEDIA 
INPUTS VIDEO GAMES MOVIES AND SONGS*/

#include "header.h"

int main(){
  system("clear");//initially clears command line
  Media* m = new Media();
  VideoGame* vid = new VideoGame();
  Song* s = new Song();
  Movie* mov = new Movie();
  cout << m->getID() << endl;
  cout << vid->getID() << endl;
  cout << s->getID() << endl;
  cout << mov->getID() << endl;
  
  vector <STUDENT*>* v = new vector<STUDENT*>;//pointer of pointers
  char input[30];
  for(int x = 0; x < 30; x++){
    input[x]= '\0';
  }
  while(true){
    cout << "Welcome to the media database. Please 'ADD', 'SEARCH'(prints matching Media units) or 'DELETE' a Media unit. Type EXIT to quit the program.\n";
    cin.clear();
    cin.sync();//cleans cin
    cin.getline(input, 30);
    translateMove(input, v);

  }
  
}

int translateMove(char* in, vector<STUDENT*>* v){
  bool running = true;
  char newIn [200];
  if(strcasecmp(in, "exit") == 1){
      return(1);
  }else if(strcasecmp(in, "add") == 1){
    jump:
      cout << "What type of media would you like to add? VideoGame(1), Song(2), Movie(3)";
      int mType = 0;
      scanf ("%d",&mType);//way to input an int without mixing cin with cin.getline(creates segmentation faults)
      cout << mType;
      if(mType != 1 && mType != 2 && mType != 3){
	goto jump;
      }else{
	goto endloop;
      }
  endloop:
  }
      
  

}
