#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
 {  
  char ch1,ch2,ch3;
  cout << "��J�@�r��:" ;
  ch1 = getchar();          //��Enter 
  cout << "��J�@�r��:" ;
  ch2 = getche();           //�S����Enter 
  cout << "\n��J�@�r��:" ;  
  ch3 = getch();            //�S����ܨS��ENTER 
  cout << "\n��J���r����:"
       << ch1 << ch2 << ch3 << '\n' ;
  system("pause");
  return 0;
 }
