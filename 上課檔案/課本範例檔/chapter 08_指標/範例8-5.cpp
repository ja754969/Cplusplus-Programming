#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {  
  int var,*ptr1,**ptr2;
  ptr1=&var; //�]�w�@�������ܼ�ptr1����l��
  ptr2=&ptr1; //�]�w�G�������ܼ�ptr2����l��
  var=1;
  *ptr1=*ptr1+2;
  **ptr2=**ptr2+3;

  cout << "var=" << var << '\n' ;
  cout << "*ptr1=" << *ptr1 << '\n' ;
  cout << "**ptr2=" << **ptr2 << '\n' ;
   
  system("PAUSE");	
  return 0;
 }
