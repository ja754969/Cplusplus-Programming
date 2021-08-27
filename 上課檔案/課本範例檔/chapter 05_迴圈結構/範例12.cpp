#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int i,sum=0;
  for (i=1;i<=100;i++)
   {
    if (i%2==1)
      continue;

    sum=sum+i;
   }
  cout << "1到100之間的偶數和=" 
       <<sum << '\n';
      
  system("pause");
  return 0;
 }	
