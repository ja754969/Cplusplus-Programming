#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
int main()
 {
  char ch;
  cout << "輸入字元:" ;  
  cin >> ch ;
  if (islower(ch) != 0 )
     cout << ch << "是小寫英文字母\n" ; 
  else 
     cout << ch << "不是小寫英文字母\n" ;
     
  system("pause");    
  return 0;
 }	
