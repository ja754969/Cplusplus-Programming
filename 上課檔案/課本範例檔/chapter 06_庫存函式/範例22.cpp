#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
int main()
 {  
  string str;
  int length=0; //�r��������
  int digit=0; //��Ʀr���Ӽ�
  int space=0; //�ťզr�����Ӽ�
  int lowercase=0; //�p�g��r���Ӽ�
  int uppercase=0; //�j�g��r���Ӽ�
  int punctuation=0; //���I�Ÿ����Ӽ� 
  int chinese=0; //����r���Ӽ�
  int i=0; //�r������m
  cout << "��J�@�Ӧr��:" ;
  getline(cin,str) ; 
  //�Ѧ�3-2-1 ��J����cin 
  
  while(str[i] !='\0' )
   {
    //ascii��>127:����r�]�Υ��Τ�r�^
    if(isascii(str[i])== 0)
      {
       chinese++;
       i++;
       //����r(�Υ��Τ�r)��2bytes�A�n�h���@�Ӧr��
      }
    else if(isdigit(str[i])!= 0)
       digit++;
    else if(islower(str[i])!= 0)
       lowercase++;
    else if(isupper(str[i])!= 0)
       uppercase++;
    else if(ispunct(str[i])!= 0)
       punctuation++;
    else if(isspace(str[i])!= 0)
       space++;

    i++;
   }
  cout << "��J�r�ꪺ�`���׬�"
       << str.length() << '\n' ;
  cout << "1.����r(�Υ��Τ�r)��"
       << chinese << "��\n" ;
  cout << "2.���ԧB�Ʀr��"
       << digit << "��\n" ;
  cout << "3.�p�g�^�妳"
       << lowercase << "��\n" ;
  cout << "4.�j�g�^�妳"
       << uppercase << "��\n" ;
  cout << "5.���I�Ÿ���"
       << punctuation << "��\n" ;       
  cout << "6.�ťզr����"
       << space << "��\n" ;

  system("pause");    
  return 0;
 }	
