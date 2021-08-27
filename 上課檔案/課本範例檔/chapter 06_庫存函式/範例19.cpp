#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
int main()
 {
  char ch;
  cout << "輸入字元:" ;  
  cin >> ch ;
  if (isascii(ch) != 0 )
     cout << ch << "不是中文字\n" ; 
  else 
     cout << "輸入的資料為中文字\n" ;
     
  system("pause");    
  return 0;
 }	
