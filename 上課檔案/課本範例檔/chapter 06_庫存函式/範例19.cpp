#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
int main()
 {
  char ch;
  cout << "��J�r��:" ;  
  cin >> ch ;
  if (isascii(ch) != 0 )
     cout << ch << "���O����r\n" ; 
  else 
     cout << "��J����Ƭ�����r\n" ;
     
  system("pause");    
  return 0;
 }	
