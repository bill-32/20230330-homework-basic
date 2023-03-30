#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  srand(time(0));
  int bingo[5][5], number[26]={0}, answer[5];
  for(int i=0 ; i<5 ; i++){
    for(int j=0 ; j<5 ; j++){
      int pick;
      do{
        pick = rand()%25+1;
      }while(number[pick]>0);
      number[pick]++;
      bingo [i][j] = pick ;
    }
  }
  for(int i=0 ; i<5 ; i++){
    for(int j=0 ; j<5 ; j++){
      cout.width(3);
      cout << bingo [i][j] << ",";
    }
    cout << "\n";
  }
  for(int i=0;i<5;i++){
    answer[i]=rand()%25+1;
    cout.width(3);
    cout<<answer[i]<<" ";
  }
}
