#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
 {
  double hour,money;
  cout << "��J���䰱���ɼ�:" ;
  cin >> hour ;
  money=ceil(hour)*20;  
  cout << "���䰱��" << hour
       << "��,�@" << money
       << "��\n";
  
  system("pause");    
  return 0;
 }	
