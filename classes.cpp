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
    cout << "Welcome to the student directory. Please 'ADD', 'PRINT'(prints list of ALL students) or 'DELETE' a student. Type EXIT to quit.\n";
    cin.clear();
    cin.sync();//cleans cin
    cin.getline(input, 30);
    translateMove(input, v);

  }
  
}

int translateMove(char* in, vector<STUDENT*>* v){
  if(strcasecmp(in, "exit") == 1){
      
      return(1);
  }
}
