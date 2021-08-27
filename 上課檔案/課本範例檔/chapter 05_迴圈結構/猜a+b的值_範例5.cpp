#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 { 
  int a,b,answer;
  cout << "輸入a,b:" ;
  cin >> a >> b;
  while (1)
   {
    cout << a <<'+' << b << '=' ;
    cin >> answer;
    if (answer == a+b)
     {
      cout << "答對了!\n" ;
      break;
     }
    else
     cout << "答錯了!\n" ;
   }
  
  system("pause");
  return 0;
 }	
