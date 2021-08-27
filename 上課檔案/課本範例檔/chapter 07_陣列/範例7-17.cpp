#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {
  string str1,str2 ;
  int pos1,pos2,m,n ;  
  cout << "輸入被取代的字串:" ; 
  getline(cin,str1) ;
  cout << "輸入取代的字串:" ; 
  getline(cin,str2) ;
  cout << "輸入被取代的字串之取代的起始Byte:" ; 
  cin >> pos1 ;
  cout << "輸入被取代的字串之取代總長度:" ; 
  cin >> m ;
  cout << "輸入取代的字串要取出資料之起始Byte:" ; 
  cin >> pos2 ;
  cout << "輸入取代的字串要取出資料之總長度:" ; 
  cin >> n ;
  str1.replace(pos1,m,str2,pos2,n) ;
  cout << "字串被取代的結果為" << str1 << '\n' ;
  
  system("PAUSE");	
  return 0;
 }
