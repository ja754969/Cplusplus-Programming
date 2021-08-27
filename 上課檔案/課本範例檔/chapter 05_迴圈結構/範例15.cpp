#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int i,j;
  char k=65;
  for (i=1;i<=5;i++)
   {                    
    for (j=1;j<=i;j++)
     {
      cout << k;
      k++;
     }
    cout << '\n' ;
   } 
    
  system("pause");
  return 0;
 }	
