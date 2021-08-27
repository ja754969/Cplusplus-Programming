#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
int main()
 {
  char ch;
  cout << "輸入字元:" ;  
  cin >> ch ;
  if (ispunct(ch) != 0 )
     cout << ch << "是標點符號\n" ; 
  else 
     cout << ch << "不是標點符號\n" ;
     
  system("pause");    
  return 0;
 }	
