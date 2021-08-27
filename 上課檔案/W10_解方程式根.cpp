#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
 {
  double a,b,c,root1,root2;
  cout << "輸入方程式ax^2+bx+c=0的係數a,b,c:" ;
  cin >> a >> b >> c ;     
  root1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
  root2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
  cout << "ax2+bx+c=0的根為" << root1
       << "及" << root2 << '\n';
  
  system("pause");    
  return 0;
 }	
