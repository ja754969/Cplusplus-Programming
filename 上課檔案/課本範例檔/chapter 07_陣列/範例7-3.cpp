#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main()
 {
  int i;
  char password[8];// 儲存最多7位字元的密碼
  cout <<"輸入字元密碼(最多7位):" ;
  for (i=0;i<7;i++)
   {
    password[i] = getch(); //從鍵盤輸入字元，但不會顯示
    if (password[i]=='\r') // '\r'表示歸位鍵(即Enter鍵)
      break;
    cout << '*' ;
   }

  password[i]='\0';
  //將'\0'結束字元存入最後位元，使password成為字串

  cout << "\n輸入的字元密碼為" 
       <<password << '\n' ;
   
  system("PAUSE");	
  return 0;
 }
