#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main()
 {   
  int number=0;
  cout << "一個字元一個字元輸入(直到按Enter鍵才停止):";
  while (getche() != '\r')	
    number = number + 1;

  cout << "\n共輸入" << number << "個字元\n" ;

  system("pause");
  return 0;
 }	
