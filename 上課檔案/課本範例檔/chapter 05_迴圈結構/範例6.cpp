#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 { 
  int num,total=0;
  cout << "連續將整數一個一個輸入，直到0才結束輸入:\n" ;
  while (1)
   {
    cin >> num ;
    if (num==0)
      break;
    total=total+num;
   }
  cout << "總和=" << total << '\n' ;

  system("pause");
  return 0;
 }	
