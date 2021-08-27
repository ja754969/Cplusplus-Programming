#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {
  string str1,str2 ;
  int pos,n ; 
  cout << "輸入字串1:" ; 
  getline(cin,str1) ;  
  cout << "輸入字串1被取出資料的起始Byte:" ; 
  cin >> pos ;
  cout << "輸入字串1被取出資料的總長度:" ; 
  cin >> n ;
  str2=str1.substr(pos,n) ;
  cout << "字串2=" << str2 << '\n' ;
  
  system("PAUSE");	
  return 0;
 }
