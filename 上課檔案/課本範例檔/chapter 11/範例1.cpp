#include <iostream>
#include <cstdlib>
using namespace std;
float transform(float); //�ŧi�ϥΪ̦۩w�禡
int main()
 {
  auto float c;
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

float transform(float c) //�w�q�ϥΪ̦۩w�禡
 {
  c=c*9/5+32;
  return c;
 }
