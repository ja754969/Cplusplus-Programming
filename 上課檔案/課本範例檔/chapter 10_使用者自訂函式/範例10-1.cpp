#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int i,sum;
  sum=0;
  for(i=1;i<=10;i=i+1)
    sum=sum+i;
  cout << "1+2+...+9+10=" << sum << '\n' ;
  
  sum=0;
  for(i=1;i<=99;i=i+2)
    sum=sum+i; 
  cout << "1+3+...+97+99=" << sum << '\n' ;

  sum=0;
  for(i=4;i<=97;i=i+3)
    sum=sum+i;  
  cout << "4+7+...+97+99=" << sum << '\n' ;

  system("PAUSE");	
  return 0;
 }
