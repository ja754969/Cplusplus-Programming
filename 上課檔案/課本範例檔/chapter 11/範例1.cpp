#include <iostream>
#include <cstdlib>
using namespace std;
float transform(float); //宣告使用者自定函式
int main()
 {
  auto float c;
  cout << "輸入攝氏溫度:" ;
  cin >> c ;
 
  //小數１位
  cout.precision(1);
  cout.setf(ios::fixed);
  //小數１位 
 
  cout << "攝氏" << c << "度=華氏" 
      << transform(c) << "度\n" ;
 
  system("pause");
  return 0;
 }

float transform(float c) //定義使用者自定函式
 {
  c=c*9/5+32;
  return c;
 }
