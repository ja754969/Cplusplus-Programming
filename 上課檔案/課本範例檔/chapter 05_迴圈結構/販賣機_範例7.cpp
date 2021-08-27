#include <iostream>
#include <cstdlib>
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
         cout << "金額不夠買可樂.\n" ;
       else
         money= money-15;
      }
    else if (choose == 2)
      {
       if (money < 12)
         cout << "金額不夠買汽水.\n" ;
       else
         money= money-12;
      }
   }
  while(choose != 3); 
  
  system("pause");
  return 0;
 }	
