#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  string str;
  float digit;
  cout << "��J�r��:" ;
  cin >> str ;
  digit=atof(str.c_str()) ;  
  //str.c_str() : �Nstring���A���r�ꪫ���ܼ�str
  //�ഫ��char���A���r���}�C�`��

  cout << "\"" << str << '\"' 
       << "�e�����B�I�ƭȬ�" << digit << '\n' ;
 
  system("PAUSE");	
  return 0;
 }
