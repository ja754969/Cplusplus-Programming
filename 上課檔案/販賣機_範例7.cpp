#include <iostream>
#include <cstdlib>
//後測試迴圈結構 
using namespace std;
int main()
 {
  int money,choose;
  cout << "輸入投入的金額:" ; 
  cin >> money ;
  do
   {
    cout << "選擇飲料" 
         << "1.可樂(15元) 2.汽水(12元) 3.結束:" ;
    cin >> choose ;
    if (choose == 1)
      {
       if (money < 15)
         cout << "金額不夠買可樂.\n";
       else
         money= money-15;
       cout << "剩餘金額: " << money << "\n"; 
      }
    else if (choose == 2)
      {
       if (money < 12)  
         cout << "金額不夠買汽水.\n" ;
       else
         money= money-12;
       cout << "剩餘金額: " << money << "\n"; 
      }
   }
  while(choose != 3);  //進入迴圈的條件
  
  system("pause");
  return 0;
 }	
