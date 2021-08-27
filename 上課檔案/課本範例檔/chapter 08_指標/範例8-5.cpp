#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {  
  int var,*ptr1,**ptr2;
  ptr1=&var; //設定一重指標變數ptr1的初始值
  ptr2=&ptr1; //設定二重指標變數ptr2的初始值
  var=1;
  *ptr1=*ptr1+2;
  **ptr2=**ptr2+3;

  cout << "var=" << var << '\n' ;
  cout << "*ptr1=" << *ptr1 << '\n' ;
  cout << "**ptr2=" << **ptr2 << '\n' ;
   
  system("PAUSE");	
  return 0;
 }
