#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 { 
  int a,b,answer;
  cout << "��Ja,b:" ;
  cin >> a >> b;
  while (1)
   {
    cout << a <<'+' << b << '=' ;
    cin >> answer;
    if (answer == a+b)
     {
      cout << "����F!\n" ;
      break;
     }
    else
     cout << "�����F!\n" ;
   }
  
  system("pause");
  return 0;
 }	
