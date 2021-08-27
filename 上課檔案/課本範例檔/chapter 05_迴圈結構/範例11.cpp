#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int i,password; 
  for (i=1;i<=3;i++)
   {
    cout << ("¿é¤J±K½X:");
    cin >> password ;
    if (password==201209)
      {
       cout << ("±K½X¥¿½T.\n");
       break;
      }
    else
      cout << ("±K½X¿ù»~.\n");
   }    
   
  system("pause");
  return 0;
 }	
