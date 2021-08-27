#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
int main()
 {
  char ch;
  cout << "輸入字元:" ;  
  cin >> ch ;
  if (isspace(ch) != 0 )
     cout << ch << "是空白字元\n" ; 
  else 
     cout << ch << "不是空白字元\n" ;
     
  system("pause");    
  return 0;
 }	
