#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "function.h"
using namespace std;
float c; //�ŧi�����ܼ� 
int main()
 {
  cout << "��J���ū�:" ; 
  cin >> c ;
  
  //�p�Ƣ���
  cout.precision(1);
  cout.setf(ios::fixed);
  //�p�Ƣ��� 
 
  cout << "���" << c << "��=�ؤ�" 
      << transform() << "��\n" ;
  
  system("pause");
  return 0;
 }	
