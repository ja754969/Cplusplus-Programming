#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {  
  char *aa='1';
  int var,*ptr1,**ptr2,***ptr3;
  ptr1=&var; //�]�w�@�������ܼ�ptr1����l��
  ptr2=&ptr1; //�]�w�G�������ܼ�ptr2����l��
  ptr3=&ptr2; //�]�w�T�������ܼ�ptr3����l��

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
