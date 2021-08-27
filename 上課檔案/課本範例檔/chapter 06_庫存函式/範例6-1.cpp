#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int i,j;
  for (i=1;i<=5;i++)
   {
    for (j=1;j<=0+1*abs(i-3);j++)
      cout << ' ' ;
    for (j=1;j<=5-2*abs(i-3);j++)
      cout << '*' ;
    cout << '\n';
   }
  
  system("pause");    
  return 0;
 }	
