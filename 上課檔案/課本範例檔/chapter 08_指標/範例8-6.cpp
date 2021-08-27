#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {  
  char *aa='1';
  int var,*ptr1,**ptr2,***ptr3;
  ptr1=&var; //設定一重指標變數ptr1的初始值
  ptr2=&ptr1; //設定二重指標變數ptr2的初始值
  ptr3=&ptr2; //設定三重指標變數ptr3的初始值

  var=1;
  *ptr1=*ptr1+2;
  **ptr2=**ptr2+3;
  ***ptr3=***ptr3+4;
  
  cout << "var=" << var << '\n' ;
  cout << "*ptr1=" << *ptr1 << '\n' ;
  cout << "**ptr2=" << **ptr2 << '\n' ;
  cout << "***ptr3=" << ***ptr3 << '\n' ;   
   
  system("PAUSE");	
  return 0;
 }
