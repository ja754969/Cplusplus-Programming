#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main()
 {
  string letter=":*/*<<<<<<<<<<<<<<<<<<<";
  int i=70,j; //i=61,表示文字I love C++ language.活動的寬度
  while (1)
   {
    //如果使用者按下任何按鍵，結束跑馬燈
    if (kbhit()!=0) //參考3-2-2 kbhit()函式說明
       break;

    //印I love C++ language.之前先印i格空白
    for (j=1;j<=i;j++)
      cout << ' ' ;
    cout << letter ;
    _sleep(250); //暫停0.25秒
    //請參考 6-6 停滯函式 _sleep()
    
    if (i>1)
      i--;
    else
      i=61;
    system("cls");
   }
  
  system("pause");    
  return 0;
 }	
 
