#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main()
 {
  string letter=":*/*<<<<<<<<<<<<<<<<<<<";
  int i=70,j; //i=61,��ܤ�rI love C++ language.���ʪ��e��
  while (1)
   {
    //�p�G�ϥΪ̫��U�������A�����]���O
    if (kbhit()!=0) //�Ѧ�3-2-2 kbhit()�禡����
       break;

    //�LI love C++ language.���e���Li��ť�
    for (j=1;j<=i;j++)
      cout << ' ' ;
    cout << letter ;
    _sleep(250); //�Ȱ�0.25��
    //�аѦ� 6-6 �����禡 _sleep()
    
    if (i>1)
      i--;
    else
      i=61;
    system("cls");
   }
  
  system("pause");    
  return 0;
 }	
 
