#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int totalfare,extra_fare=0;
  int meter,over_1500;
  cout << "��J�����p�{�����{(��쬰����):" ;
  cin >> meter ;  
  totalfare=85;    //���{<=1500����,���O��85��
  if (meter>1500)  //���{>1500���ت��B�~�O��    
   {
    over_1500=meter-1500;
    if (over_1500 % 250==0)
      extra_fare=(over_1500/250)*5;
    else         //���{<250����,���H250���حp��
      extra_fare=((over_1500/250)+1)*5;
   }
  totalfare=totalfare+extra_fare;
  cout << "�`�@���ꬰ:" << totalfare
       << "��\n" ; 
 
  system("pause");
  return 0;
 }

