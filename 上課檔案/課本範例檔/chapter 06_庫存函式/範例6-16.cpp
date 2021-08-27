#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
int main()
 {
  char ch;
  cout << "輸入字元:" ;  
  cin >> ch ;
  if (isxdigit(ch) != 0 )
     cout << ch << "是十六進位數字\n" ; 
  else 
     cout << ch << "不是十六進位數字\n" ;
     
  system("pause");    
  return 0;
 }	
