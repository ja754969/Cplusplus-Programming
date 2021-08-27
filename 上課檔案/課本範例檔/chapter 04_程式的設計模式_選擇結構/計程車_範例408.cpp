#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int totalfare,extra_fare=0;
  int meter,over_1500;
  cout << "輸入乘坐計程車里程(單位為公尺):" ;
  cin >> meter ;  
  totalfare=85;    //里程<=1500公尺,車費為85元
  if (meter>1500)  //里程>1500公尺的額外費用    
   {
    over_1500=meter-1500;
    if (over_1500 % 250==0)
      extra_fare=(over_1500/250)*5;
    else         //里程<250公尺,仍以250公尺計算
      extra_fare=((over_1500/250)+1)*5;
   }
  totalfare=totalfare+extra_fare;
  cout << "總共車資為:" << totalfare
       << "元\n" ; 
 
  system("pause");
  return 0;
 }

