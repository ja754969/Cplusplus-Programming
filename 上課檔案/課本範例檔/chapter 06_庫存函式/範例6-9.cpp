#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
 {
  double a,b,c;
  cout << "��J�����T���Ψ�Ѫ�a,b:" ;
  cin >> a >> b ;  
  c=hypot(a,b);
  cout << "�����T���Ϊ��������" << c       << '\n';
  
  system("pause");    
  return 0;
 }	
