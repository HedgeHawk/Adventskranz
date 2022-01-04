#include "advent.h"
#include<iostream> 
#include<iomanip>
using namespace std; 

void printCandles(int dy, int mo){
  int a = adventstag(dy, mo);
  cout << mo << " " <<std::setfill('0') << std::setw(2)<< dy << " " <<std::setfill('0') << std::setw(2)<< a <<" ";
	for(int dow = 1; dow <= 7; dow++){
		cout << candles(a,dow);
	}
}

int main () 
{
  cout << "mo dy  a 1234567"<<endl;
  
  //November
  int mo = 11;
  for(int dy=27;dy<=30;dy++){
    printCandles(dy,mo);
  }
  
  //Dezember
  mo=12;
  for(int dy=1;dy<=24;dy++){
    printCandles(dy,mo);
  }
  
	cout << endl;

  return 0; 
} 
