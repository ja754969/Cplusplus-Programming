#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
 {
  double length;
  cout << "輸入正方形的邊長:" ;
  cin >> length ;     
  cout << "正方形的面積為" << pow(length,2)     
       << '\n';
  
  system("pause");    
  return 0;
 }	
