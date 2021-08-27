#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
 {
  double a,b,c;
  cout << "輸入直角三角形兩股長a,b:" ;
  cin >> a >> b ;  
  c=hypot(a,b);
  cout << "直角三角形的斜邊長為" << c       << '\n';
  
  system("pause");    
  return 0;
 }	
