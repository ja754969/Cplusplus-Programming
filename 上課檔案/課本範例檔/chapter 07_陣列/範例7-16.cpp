#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {
  string str1,str2 ;
  int pos,n ;  
  cout << "輸入被取代的字串:" ; 
  getline(cin,str1) ;
  cout << "輸入取代的字串:" ; 
  getline(cin,str2) ;
  cout << "輸入被取代的字串之起始位元組:" ; 
  cin >> pos ;
  cout << "輸入被取代的字串之取代總長度:" ; 
  cin >> n ;
  str1.replace(pos,n,str2) ;
  cout << "字串被取代後的結果為" << str1 << '\n' ;
  
  system("PAUSE");	
  return 0;
 }
