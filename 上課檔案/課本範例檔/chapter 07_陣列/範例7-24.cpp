#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  string str;
  float digit;
  cout << "輸入字串:" ;
  cin >> str ;
  digit=atof(str.c_str()) ;  
  //str.c_str() : 將string型態的字串物件變數str
  //轉換成char型態的字元陣列常數

  cout << "\"" << str << '\"' 
       << "前面的浮點數值為" << digit << '\n' ;
 
  system("PAUSE");	
  return 0;
 }
