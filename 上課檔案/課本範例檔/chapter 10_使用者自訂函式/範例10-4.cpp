#include <iostream>
#include <cstdlib>
using namespace std;
float transform(float); //�ŧi�禡
int main()
 {
 float c;
 cout << "��J���ū�:" ;
 cin >> c ;
 
 //�p�Ƣ���
 cout.precision(1);
 cout.setf(ios::fixed);
 //�p�Ƣ��� 
 
 cout << "���" << c << "��=�ؤ�" 
      << transform(c) << "��\n" ;
 
 system("pause");
 return 0;
 }

float transform(float c) //�w�q�禡
 {
  c=c*9/5+32;
  return c;
 }
