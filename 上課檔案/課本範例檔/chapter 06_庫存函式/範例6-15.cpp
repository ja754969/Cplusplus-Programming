#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
int main()
 {
  char ch;
  cout << "��J�r��:" ;  
  cin >> ch ;
  if (isalnum(ch) != 0 )
     cout << ch << "�O��r�����Ʀr�έ^��r��\n" ; 
  else 
     cout << ch << "���O��r�����Ʀr�έ^��r��\n" ;
     
  system("pause");    
  return 0;
 }	
