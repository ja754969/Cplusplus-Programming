#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>
using namespace std;
int main()
 {
  char ch ; //要搜尋的字元 
  string str ; //被搜尋的字串
  int pos,search_result ;    
  cout << "輸入要搜尋的字元:" ; 
  ch=getche() ; 
  cout << "\n輸入被搜尋的字串:" ; 
  getline(cin,str) ; 
  cout << "輸入被搜尋的字串之起始Byte:" ;  
  cin >> pos ;
  search_result=str.find(ch,pos) ;   
  cout << "從 " << str << " 的第" 
       << pos << "個Byte開始往後找,\n" ;
  if (search_result==-1)
     cout << "結果沒發現" << ch << '\n' ;  
  else
     cout << ch << "第一次出現位於第"
          << search_result << "個Byte\n" ; 
  
  system("PAUSE");	
  return 0;
 }

