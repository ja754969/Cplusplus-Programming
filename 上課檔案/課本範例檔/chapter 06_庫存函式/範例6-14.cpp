#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
int main()
 {
  char ch;
  cout << "輸入字元:" ;  
  cin >> ch ;
  if (isdigit (ch) != 0 )
     cout << ch << "是文字型的數字\n" ; 
  else 
     cout << ch << "不是文字型的數字\n" ;
     
  system("pause");    
  return 0;
 }	
