#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int n;
  int one_num=0,zero_num=0;
  cout << "輸入一正整數n:" ;
  cin >> n ;
  cout << n << "轉成2進位整數後,";
  while (n != 0)
   {
    //n & 1 : 表示n與1做mask遮罩運算(即,位元且(&)運算)
    //若2進位位置上的值與1相同，則結果為1,否則為0
    if ((n & 1)==1)
       one_num++;
    else
       zero_num++;
   
    //除以2,即去掉2進位表示法的個位數
    n=n>>1;
   }
  cout << "其中共有" << one_num 
       << "個1及" << zero_num
       << "個0\n" ;
  
  system("pause");    
  return 0;
 }	
