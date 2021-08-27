#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
 {
  double num;
  cout << "輸入一浮點數:" ;
  cin >> num ;
  cout << num<< "的絕對值為" 
       << fabs(num) << '\n';
  
  system("pause");    
  return 0;
 }	
