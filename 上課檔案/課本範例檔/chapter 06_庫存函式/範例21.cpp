#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
int main()
 {
  char ch;
  cout << "��J�r��:" ;  
  cin >> ch ;
  if (ispunct(ch) != 0 )
     cout << ch << "�O���I�Ÿ�\n" ; 
  else 
     cout << ch << "���O���I�Ÿ�\n" ;
     
  system("pause");    
  return 0;
 }	
