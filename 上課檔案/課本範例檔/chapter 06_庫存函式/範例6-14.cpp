#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
int main()
 {
  char ch;
  cout << "��J�r��:" ;  
  cin >> ch ;
  if (isdigit (ch) != 0 )
     cout << ch << "�O��r�����Ʀr\n" ; 
  else 
     cout << ch << "���O��r�����Ʀr\n" ;
     
  system("pause");    
  return 0;
 }	
