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

  cout << "��J�@���(0~6):" ;
  cin >> today;

  switch(today)
   {
    case sunday:
      cout << "���ѬOSunday\n" ;
      break;
    case monday:
      cout << "���ѬOMonday\n" ;
      break;
    case tuesday:
      cout << "���ѬOTuesday\n" ;
      break;
    case wednesday:
      cout << "���ѬOWednesday\n" ;
      break;
    case thursday:
      cout << "���ѬOThursday\n" ;
      break;
    case friday:
      cout << "���ѬOFriday \n" ;
      break;
    case saturday:
      cout << "���ѬOSaturday\n" ;
      break;
    default:
      cout << "��J���~\n" ;
   }
 
  system("pause");
  return 0;
 }
