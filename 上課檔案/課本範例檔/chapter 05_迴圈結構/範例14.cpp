#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int a,b;
  int divisor,dividend,remainder,gcd;
  cout << "��J��Ӿ��a,b:" ;
  cin >> a >> b ;
  dividend=a;
  divisor=b;
  remainder= dividend % divisor;
  while (remainder != 0)
   {
    dividend = divisor;
    divisor = remainder ;
    remainder= dividend % divisor;
   }
  gcd= divisor;
  cout << '(' << a << ',' << b
       << ")=" << gcd  << '\n';
  
  system("pause");
  return 0;
 }	
