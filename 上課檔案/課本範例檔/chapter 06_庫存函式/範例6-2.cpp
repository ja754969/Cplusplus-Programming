#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
 {
  double num1,num2,max,min;
  cout << "��J��Ӽ�num1,num2:" ;
  cin >> num1 >> num2;
  max=fmax(num1,num2);
  min= fmin(num1,num2);
  cout << "�̤j��" << max 
       << ",�̤p�Ȭ�" << min << '\n';
  
  system("pause");    
  return 0;
 }	
