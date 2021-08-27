#include <iostream>
#include <cstdlib>

using namespace std;
int main()
 {
  int i,j;  
  for (i=1;i<=3;i++)
   {
    for (j=1;j<=3;j++)
     {
      system("cls");
      if (j==1)
        {
         cout <<  "ºñ¿O" ;
         _sleep(1000*30);
        }
      else if (j==2)
        {
         cout << "¶À¿O" ;
         _sleep(1000*5);
        }
      else
        {
         cout << "¬õ¿O" ;
         _sleep(1000*25);
        } 
     }
   }
   
  system("pause");
  return 0;
 }	
