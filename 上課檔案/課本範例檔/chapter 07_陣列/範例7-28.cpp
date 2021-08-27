#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
 {  
  int i=1,num[10],sum=0;
  srand((unsigned)time(NULL));
  for (i=0;i<10;i++)
   {
    num[i]=rand();
    cout << num[i] << '+' ;
    sum=sum+num[i];
   }
  cout << "\b=" << sum << '\n' ;
  
  system("PAUSE");	
  return 0;
 }
