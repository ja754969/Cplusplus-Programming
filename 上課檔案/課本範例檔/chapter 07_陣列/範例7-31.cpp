#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  string birthdate;
  string asterism_data[36]={"01.21","02.18","水瓶座",
         "02.19","03.20","雙魚座",
         "03.21","04.20","牡羊座",
         "04.21","05.20","金牛座",
         "05.21","06.21","雙子座",
         "06.22","07.22","巨蟹座",
         "07.23","08.22","獅子座",
         "08.23","09.22","處女座",
         "09.23","10.23","天秤座",
         "10.24","11.22","天蠍座",
         "11.23","12.21","射手座",
         "12.22","01.20","魔羯座"};
  int i;
  cout << "輸入出生日期(格式:99.99):" ;
  cin >> birthdate ;
  for (i=0;i<36;i=i+3)
   {
    if (birthdate>=asterism_data[i])
     if (birthdate<=asterism_data[i+1])
      {
       cout <<  "星座為:" << asterism_data[i+2] << '\n' ;
       break;
      }
   }
  if (i==36)
    cout << "星座為:魔羯座\n" ;
  
  system("PAUSE");	
  return 0;
 }
