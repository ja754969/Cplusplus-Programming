#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
int main()
 {
  char ch;
  cout << "��J�r��:" ;  
  cin >> ch ;
  if (islower(ch) != 0 )
     cout << ch << "�O�p�g�^��r��\n" ; 
  else 
     cout << ch << "���O�p�g�^��r��\n" ;
     
  system("pause");    
  return 0;
 }	
