#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  enum week
   {
    sunday, //sunday=0
    monday, //monday=1
    tuesday, //tuesday=2
    wednesday, //Wednesday=3
    thursday, //thursday=4
    friday, //friday=5
    saturday //saturday=6
   };

  int today;

  cout << "輸入一整數(0~6):" ;
  cin >> today;

  switch(today)
   {
    case sunday:
      cout << "今天是Sunday\n" ;
      break;
    case monday:
      cout << "今天是Monday\n" ;
      break;
    case tuesday:
      cout << "今天是Tuesday\n" ;
      break;
    case wednesday:
      cout << "今天是Wednesday\n" ;
      break;
    case thursday:
      cout << "今天是Thursday\n" ;
      break;
    case friday:
      cout << "今天是Friday \n" ;
      break;
    case saturday:
      cout << "今天是Saturday\n" ;
      break;
    default:
      cout << "輸入錯誤\n" ;
   }
 
  system("pause");
  return 0;
 }
