#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>
using namespace std;
int main()
 {  
  char *name[3]={"�ŤM" , "���Y" , "��"};
  //name[0]���V"�ŤM" , name[1]���V"���Y"
  //name[2]���V"��"
  char input; //�H�X����
  int people; //�Ninput�ন��ơA�s�Jpeople
  int computer; //�q���X����
  
  srand((unsigned)time(NULL));
  cout << "�o�O�H�P�q���@�_�����ŤM���Y���C��.\n" ;
  while (1)
   {
    cout << "�z�X����?(0:�ŤM1:���Y2:��Enter:����)" ;
    input=getche();
    if (input=='\r') //��if (input==13)
     {
      cout << "\n�C������.\n" ;
      break;
     }
    if (input<'0' || input>'2')
     {
      cout << "\n�z�諸��Ƥ��O0,1,2,���s��@��.\n" ;
      continue;
     }
    people=input-48; //'0'-48=0 ; '1'-48=1 ;...;'9'-48=9
    computer=rand()%3;
    cout << "\n�z�X:" << name[people]<< '\n' ;
    cout << "�q���X:" << name[computer]<< '\n' ;
    if (people == computer)
      cout << "����!\n" ;
    else if (people-computer == 1 || people-computer == -2)
      cout << "�zĹ�F!\n" ;
    else
      cout << "�z��F!\n" ;
   }
   
  system("PAUSE");	
  return 0;
 }
