#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {
  string str1,str2 ;
  cout << "��J�Q���[���r��:" ; 
  getline(cin,str1) ;
  cout << "��J���[�r��:" ; 
  getline(cin,str2) ;
  cout << str2 << "���[��" << str1 << "���ݫ�,�ܦ�" ;     
  str1.append(str2);  
  cout << str1 << '\n' ; 
  system("PAUSE");	
  return 0;
 }
