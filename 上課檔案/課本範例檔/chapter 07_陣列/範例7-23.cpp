#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  string str;
  int digit;
  cout << "��J�r��:" ;
  cin >> str ;
  digit=atoi(str.c_str()) ;
  //str.c_str() : �Nstring���A���r�ꪫ���ܼ�str
  //�ഫ��char���A���r���}�C�`��
  
  cout << "\"" << str << '\"' 
       << "�e������ƭȬ�" << digit << '\n' ;
 
  system("PAUSE");	
  return 0;
 }
