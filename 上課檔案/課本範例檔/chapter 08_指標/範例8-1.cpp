#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {  
  int var,*ptr;
  ptr=&var; //設定指標變數ptr的初始值
  var=1;
  *ptr=*ptr+2;
  cout << "var=" << var << '\n' ;
  cout << "*ptr=" << *ptr << '\n' ;        
   
  system("PAUSE");	
  return 0;
 }
