#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  float power;
  float bill;
  cout << "��J�ιq�׼�:" ;
  cin >> power ;
  switch((int)(power-1)/100)  //�Ѧ�2-5��ƫ��A�ഫ
   {
    case 0 : 	 // 0 -100 �� 
       bill=power *3.0;
       break;
    case 1:  // 101-200 ��
       bill=100*3.0+(power -100)*3.2;
       break;
    case 2:  // 201-300 ��
       bill=100*3.0+100*3.2+(power -200)*3.4;
       break;     
    default:  // 301�ץH�W 
       bill=100*3.0+100*3.2+100*3.4+(power-300)*3.6;               
   } 
  cout.precision(0);
  cout.setf(ios::fixed);
  cout << "�q�O=" << bill << "��\n"; 
  system("pause");
  return 0;
 }

