#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {
  string str1,str2 ; //被搜尋的字串,搜尋的字串
  int pos,search_result ;
  cout << "輸入要搜尋的字串:" ; 
  getline(cin,str1) ;
  cout << "輸入被搜尋的字串:" ; 
  getline(cin,str2) ;
  cout << "輸入被搜尋的字串之起始Byte:" ;
  cin >> pos ;
  search_result=str2.rfind(str1,pos) ;
  cout << "從 "<< str2 << " 的第" 
       << pos << "個Byte開始往前找,\n" ;
  if (search_result==-1)
     cout << "結果沒發現" << str1 << '\n' ;  
  else
     cout << str1 << "第一次出現位於第"
          << search_result << "個Byte\n" ; 
  system("PAUSE");	
  return 0;
 }
