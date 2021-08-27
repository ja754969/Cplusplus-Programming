#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {
  string str1,str2 ;
  cout << "輸入被附加的字串:" ; 
  getline(cin,str1) ;
  cout << "輸入附加字串:" ; 
  getline(cin,str2) ;
  cout << str2 << "附加到" << str1 << "尾端後,變成" ;     
  str1.append(str2);  
  cout << str1 << '\n' ; 
  system("PAUSE");	
  return 0;
 }
