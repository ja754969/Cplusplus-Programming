#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
int main()
 {
  char ch;
  cout << "��J�r��:" ;  
  cin >> ch ;
  if (isupper(ch) != 0 )
     cout << ch << "�O�j�g�^��r��\n" ; 
  else 
     cout << ch << "���O�j�g�^��r��\n" ;
     
  system("pause");    
  return 0;
 }	
