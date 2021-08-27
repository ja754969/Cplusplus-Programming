#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int n;
  int f_num=0,non_f_num=0;
  cout << "輸入一正整數n:" ;
  cin >> n;
  cout << n <<"轉成16進位整數後,";
  while (n != 0)
   {
    //n & 15:表示n與15做 mask(遮罩運算)(即,位元且(&)運算)
    //若16進位表示法的個位數的值為F(即,15)，
    //則n & 15的結果為15,否則為非15
    if ((n & 15)==15)
      f_num++;
    else
      non_f_num++;

    //除以16(=2^4),即去掉16進位表示法的個位數
    //因16進位是以四位2進位數表示
    n=n>>4;
   }
  cout << "其中共有" << f_num
       << "個F及" << non_f_num
       << "個非F\n" ;
  
  system("pause");    
  return 0;
 }	
