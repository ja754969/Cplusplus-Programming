#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int score;
  cout << "��J���Z:" ;
  cin >> score ;
  switch(score)
   {	 
    case 90 ... 100:
      cout << "����:A\n" ;
      break;
    case 80 ... 89:
      cout << "����:B\n" ;
      break;
    case 70 ... 79:
	  cout << "����:C\n" ;
	  break;
    case 60 ... 69:
	  cout << "����:D\n" ;
	  break;
    default: 
     cout << "����:F\n" ;
   } 
  system("pause");
  return 0;
 }

