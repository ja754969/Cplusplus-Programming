#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main()
 {
  string str1,str2 ;  
  cout << "¿é¤J¦r¦ê1:" ; 
  getline(cin,str1) ;
  cout << "¿é¤J¦r¦ê2:" ; 
  getline(cin,str2) ;
  str1.swap(str2) ;
  cout << "¥æ´««á,¦r¦ê1=" << str1  
       << " ¦r¦ê2=" << str2 << '\n' ; 
  
  system("PAUSE");	
  return 0;
 }
