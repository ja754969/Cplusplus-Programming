#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 { 
  int num,temp; 
  cout << "輸入一正整數:" ;   
  cin >> num ;
  cout << num << "倒過來為" ;
  temp= num;
  while (num>0) //將正整數倒過來輸出
   {
    temp = num % 10; //取出num的個位數
    cout << temp ;
    num = num / 10; //去掉num的個位數
   }
  cout << '\n' ;
  system("pause");
  return 0;
 }	
