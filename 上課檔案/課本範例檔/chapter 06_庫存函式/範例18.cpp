#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
int main()
 {
  char ch;
  cout << "輸入字元:" ;  
  cin >> ch ;
  if (isupper(ch) != 0 )
     cout << ch << "是大寫英文字母\n" ; 
  else 
     cout << ch << "不是大寫英文字母\n" ;
     
  system("pause");    
  return 0;
 }	
