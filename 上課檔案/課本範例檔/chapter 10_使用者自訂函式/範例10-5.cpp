#include <iostream>
#include <cstdlib>
using namespace std;
void transform(float *); //�ŧi�禡
int main()
 {
 float c;
 cout << "��J���ū�:" ;
 cin >> c ;
 
 //�p�Ƣ���
 cout.precision(1);
 cout.setf(ios::fixed);
 //�p�Ƣ��� 
  
 cout << "���" << c << "��=�ؤ�" ;
 transform(&c) ;
 cout << c << "��\n" ;
 
 system("pause");
 return 0;
 }

void transform(float *f) //�w�q�禡
 {
  *f=*f * 9 / 5 + 32;
 }
