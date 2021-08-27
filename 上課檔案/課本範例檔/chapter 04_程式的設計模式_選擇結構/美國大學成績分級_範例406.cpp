#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int score;
  cout << "块Θ罿:" ;
  cin >> score ;
  switch(score)
   {	 
    case 90 ... 100:
      cout << "单:A\n" ;
      break;
    case 80 ... 89:
      cout << "单:B\n" ;
      break;
    case 70 ... 79:
	  cout << "单:C\n" ;
	  break;
    case 60 ... 69:
	  cout << "单:D\n" ;
	  break;
    default: 
     cout << "单:F\n" ;
   } 
  system("pause");
  return 0;
 }

