#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int i,password; 
  for (i=1;i<=3;i++)
   {
    cout << ("��J�K�X:");
    cin >> password ;
    if (password==201209)
      {
       cout << ("�K�X���T.\n");
       break;
      }
    else
      cout << ("�K�X���~.\n");
   }    
   
  system("pause");
  return 0;
 }	
