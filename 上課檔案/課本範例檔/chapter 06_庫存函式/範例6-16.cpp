#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
int main()
 {
  char ch;
  cout << "��J�r��:" ;  
  cin >> ch ;
  if (isxdigit(ch) != 0 )
     cout << ch << "�O�Q���i��Ʀr\n" ; 
  else 
     cout << ch << "���O�Q���i��Ʀr\n" ;
     
  system("pause");    
  return 0;
 }	
