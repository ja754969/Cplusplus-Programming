#include <iostream>
#include <cstdlib>
using namespace std;
int gcd(int,int);
int main()
 {
  int m,n;
  cout << "��J��ӥ����m,n:" ;
  cin >> m >> n ;
  cout << '(' << m  << ',' << n << ")=" 
       << gcd(m,n) << '\n';

  system("pause");
  return 0;
 }

int gcd(int m,int n)
 {
  if (m%n==0)
     return n;
  else
     return gcd(n,m%n);
 }
