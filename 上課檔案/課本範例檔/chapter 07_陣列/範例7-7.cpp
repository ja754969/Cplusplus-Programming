#include <iostream>
#include <cstdlib>
#include <string> 
using namespace std;
int main()
 {
  
  string str1,str2,str3;
  cout << "輸入字串1:" ;
  cin >> str1 ;
  cout << "輸入字串2:" ;
  cin >> str2 ;   
  str3=str1+' '+str2 ;
  cout << "字串1與字串2併後的結果為:"
       << str3 << endl ;  
  system("pause");
  return 0; 
 }
