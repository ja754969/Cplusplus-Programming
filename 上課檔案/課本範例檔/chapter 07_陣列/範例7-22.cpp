#include <iostream>
#include <cstdlib>
#include <string> 
using namespace std;
int main()
 {
  string str;
  int i,len;
  cout << "輸入字串:" ;
  cin >> str ;   
  len=str.length() ;
  cout << str <<"字串反轉顯示為:" ;
  for (i= len-1 ; i>=0 ; i--)
    cout << str[i] ;
    cout << '\n' ; 
  system("pause");
  return 0; 
 }
