#include <iostream>
#include <cstdlib>#
using namespace std;
int sum(int);
int main()
 {
  int n;
  cout << "��J�����:" ;
  cin >> n ;
  cout << "1+2+...+" << n << '=' 
       << sum(n) << '\n';

  system("pause");
  return 0;
 }

int sum(int n)
 {
  if (n == 1)
    return 1;
  else
    return n + sum(n - 1);
 }
