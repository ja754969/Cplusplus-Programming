#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
 {
  double num1,num2,max,min;
  cout << "輸入兩個數num1,num2:" ;
  cin >> num1 >> num2;
  max=fmax(num1,num2);
  min= fmin(num1,num2);
  cout << "最大值" << max 
       << ",最小值為" << min << '\n';
  
  system("pause");    
  return 0;
 }	
