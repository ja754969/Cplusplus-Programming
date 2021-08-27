#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
 {  
  char ch1,ch2,ch3;
  cout << "輸入一字元:" ;
  ch1 = getchar();
  cout << "輸入一字元:" ;
  ch2 = getche();
  cout << "\n輸入一字元:" ;
  ch3 = getch();
  cout << "\n輸入的字元為:"
       << ch1 << ch2 << ch3 << '\n' ;
  system("pause");
  return 0;
 }
