#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  float power;
  float bill;
  cout << "輸入用電度數:" ;
  cin >> power ;
  switch((int)(power-1)/100)  //參考2-5資料型態轉換
   {
    case 0 : 	 // 0 -100 度 
       bill=power *3.0;
       break;
    case 1:  // 101-200 度
       bill=100*3.0+(power -100)*3.2;
       break;
    case 2:  // 201-300 度
       bill=100*3.0+100*3.2+(power -200)*3.4;
       break;     
    default:  // 301度以上 
       bill=100*3.0+100*3.2+100*3.4+(power-300)*3.6;               
   } 
  cout.precision(0);
  cout.setf(ios::fixed);
  cout << "電費=" << bill << "元\n"; 
  system("pause");
  return 0;
 }

