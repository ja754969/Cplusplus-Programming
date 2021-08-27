#include <iostream>
#include <string> 
using namespace std;
int main()
 {  
  string str1,str2;
  cout << "輸入字串1:" ;
  getline(cin , str1);
  cout << "輸入字串2:" ;
  getline(cin , str2);   
  if (str1 > str2)
    cout << str1 << " 大於 " << str2 << endl ;
  else if (str1 == str2)
    cout << str1 << " 等於 " << str2 << endl ;  
  else
    cout << str1 << " 小於 " << str2 << endl ;  
  system("pause");
  return 0; 
 }
