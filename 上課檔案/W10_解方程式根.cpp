#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
 {
  double a,b,c,root1,root2;
  cout << "��J��{��ax^2+bx+c=0���Y��a,b,c:" ;
  cin >> a >> b >> c ;     
  root1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
  root2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
  cout << "ax2+bx+c=0���ڬ�" << root1
       << "��" << root2 << '\n';
  
  system("pause");    
  return 0;
 }	
