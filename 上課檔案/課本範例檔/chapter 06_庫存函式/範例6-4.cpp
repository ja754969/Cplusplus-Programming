#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
 {
  double liter,money;
  cout << "��J�T�o���ɼ�:" ;
  cin >> liter ; 
  money=round(liter*31.3);
  cout << "�T�o" << liter 
       << "����,�@" << money 
       << "��\n";
  
  system("pause");    
  return 0;
 }	
