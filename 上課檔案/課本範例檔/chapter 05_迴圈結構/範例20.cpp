#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int n,backup_n;
  int divisor; //除數
  int position=0;
  cout << "輸入一正整數n:" ;
  cin >> n;
  backup_n=n;
  //找出n轉成2進位整數後,出現在最左邊的1之位置(從右邊算起)
  //即n轉成2進位整數後,是幾位數
  while (n != 0)
   {
    position++;
    // 除以2,即去掉2進位表示法的個位數
    n=n>>1; // n/2
   }

  n=backup_n;
  cout << n << "轉成2進位整數為";
  while (position > 0)
   {
    //除數=1*(2的position-1次方),
    //即除數的第position位置為1,其餘位置為0
    position--;
    divisor=1<<position;
    //n轉成2進位整數後,
    //n & divisor表示第position位置的值
    if ((n & divisor)>0)
       cout << '1' ;
    else
       cout << '0' ;
   }
  cout << '\n';
  
  system("pause");    
  return 0;
 }	
