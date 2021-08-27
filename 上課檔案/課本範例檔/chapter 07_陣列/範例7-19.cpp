#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {
  string str1,str2 ;
  int pos;
  cout << "輸入被插入字串:" ; 
  getline(cin,str1) ;
  cout << "輸入插入字串:" ; 
  getline(cin,str2) ;
  cout << "輸入被插入字串要插入的位置(第幾個位元組):" ;
  cin >> pos ;
  cout << str2 << "插入到" << str1 
       << "的第" << pos << "個位元組後,\n變成" ; 
  str1.insert(pos,str2);  
  cout << str1 << '\n' ; 
  system("PAUSE");	
  return 0;
 }
