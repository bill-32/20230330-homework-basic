#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  srand(time(0));
  int bingo[5][5], number[26]={0}, number2[26]={0}, answer[26], line=0;
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
  cout << "\n";
  for(int i=0;i<20;i++){
    int pick;
    do{
      pick = rand()%25+1;
    }while(number2[pick]>0);
    number2[pick]++;
    answer[i] = pick ;
    cout.width(3);
    cout << pick << ",";
  }
  cout << "\n" << "\n";
  for(int a=0;a<20;a++){
    for(int i=0 ; i<5 ; i++){
      for(int j=0 ; j<5 ; j++){
        if(answer[a]==bingo[i][j])bingo [i][j]=0;
     }
   }
  }
  for(int i=0 ; i<5 ; i++){
    for(int j=0 ; j<5 ; j++){
      cout.width(3);
      cout << bingo [i][j] << ",";
    }
    cout << "\n";
  }
  cout << "\n";
  for(int i=0;i<5;i++){
    bool flag=true, flag2=true;
    for(int j=0;j<5;j++){
      if(bingo[i][j]!=0){
        flag=false;
      }
      if(bingo[j][i]!=0){
        flag2=false;
      }
    }
    if(flag==true){
      line++; 
    }
    if(flag2==true){
      line++; 
    }
  }
  bool flag=true, flag2=true;
  for(int j=0 ; j<5 ; j++){
    if(bingo[j][j]!=0){
      flag=false;
    }
    if(bingo[4-j][j]!=0){
      flag2=false;
    }
  }
  if(flag==true){
    line++; 
  }
  if(flag2==true){
    line++; 
  }
  cout << line;
  return 0;
}
