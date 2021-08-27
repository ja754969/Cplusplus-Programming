#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int i;
  float num=0.0;
  for (i = 1 ; i <= 3 ; i++)
   {
    cout << "0.1+" ;
    num=num+0.1;
   }
  cout << "\b ";
  if (num == 0.3)
    cout << "팒 0.3 й데\n" ;
  else
    cout << "팒 0.3 ㄳй데\n" ;
  
  system("pause");
  return 0;
 }	
