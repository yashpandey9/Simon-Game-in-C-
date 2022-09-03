#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<stdlib.h>
using namespace std;
using std::vector;
using std::cout;
using std::cin;

int simonGame(int n){
    int userNumber, lvl_count=0;
    srand(time(0));
    vector<int> chosenVariable; //An array for storing the values given by computer.
    vector<int> userVariable;  //An array for storing the values given by the user.
     
    while(true){
      //int random = offset + (rand()%range) {offset is the starting point for random numbers and range is the end point}
      int randomNumber = 1 + (rand() % n); 
      cout<<"No. is: "<<randomNumber; 
      chosenVariable.push_back(randomNumber);
      cout<<"\n\nInsert Your Pattern: ";
      for(int i=0; i<chosenVariable.size(); i++){
         cin>>userNumber;
         userVariable.push_back(userNumber);
      }
      system("CLS");
      if(chosenVariable==userVariable){
         lvl_count++;
         userVariable.clear();
      }
      else{break;}
    }
  return lvl_count;
}

int main(){
  int n,a,b,lvl;
  cout<<"Difficulty Level -- Easy(1-10) => Press 1\n"; 
  cout<<"Difficulty Level -- Normal(1-30) => Press 2\n"; 
  cout<<"Difficulty Level -- Medium(1-50) => Press 3\n"; 
  cout<<"Difficulty Level -- Hard(1-100) => Press 4\n";
  cin>>a;
  cout<<"Press 1 to Start the Game: ";
  cin>>b;
  if(b==1){
    if(a==1){
    n=10;
    lvl = simonGame(n);
    cout<<"You reached to Level: "<<lvl<<"\n";
    cout<<"\nGame Over....";
    }
    else if(a==2){
    n=30;
    lvl = simonGame(n);
    cout<<"You reached to Level: "<<lvl<<"\n";
    cout<<"\nGame Over....";
    }
    else if(a==3){
    n=50;
    lvl = simonGame(n);
    cout<<"You reached to Level: "<<lvl<<"\n";
    cout<<"\nGame Over....";
    }
    else if(a==4){
    n=100;
    lvl = simonGame(n);
    cout<<"You reached to Level: "<<lvl<<"\n";
    cout<<"\nGame Over....";
    }
}
else{
    cout<<"\nGame Over...";
}   
}