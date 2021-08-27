#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>
using namespace std;
int main()
 {  
  char *name[3]={"剪刀" , "石頭" , "布"};
  //name[0]指向"剪刀" , name[1]指向"石頭"
  //name[2]指向"布"
  char input; //人出什麼
  int people; //將input轉成整數，存入people
  int computer; //電腦出什麼
  
  srand((unsigned)time(NULL));
  cout << "這是人與電腦一起玩的剪刀石頭布遊戲.\n" ;
  while (1)
   {
    cout << "您出什麼?(0:剪刀1:石頭2:布Enter:結束)" ;
    input=getche();
    if (input=='\r') //或if (input==13)
     {
      cout << "\n遊戲結束.\n" ;
      break;
     }
    if (input<'0' || input>'2')
     {
      cout << "\n您選的資料不是0,1,2,重新選一次.\n" ;
      continue;
     }
    people=input-48; //'0'-48=0 ; '1'-48=1 ;...;'9'-48=9
    computer=rand()%3;
    cout << "\n您出:" << name[people]<< '\n' ;
    cout << "電腦出:" << name[computer]<< '\n' ;
    if (people == computer)
      cout << "平手!\n" ;
    else if (people-computer == 1 || people-computer == -2)
      cout << "您贏了!\n" ;
    else
      cout << "您輸了!\n" ;
   }
   
  system("PAUSE");	
  return 0;
 }
