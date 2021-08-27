//範例8-1 一重指標 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip> 
using namespace std;
int main()
 { 
  int var,*ptr;
  ptr = &var; //ptr所指向的記憶體位址 
  var=5;
  *ptr=*ptr+2;//ptr所指向的記憶體位址內的資料改變，var的資料也隨之改變 
  cout<<"var="<<var<<'\n';
  cout<<"*ptr="<<*ptr<<'\n';
  
  
  system("pause");
  return 0;
 }
