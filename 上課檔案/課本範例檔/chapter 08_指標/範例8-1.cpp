#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {  
  int var,*ptr;
  ptr=&var; //�]�w�����ܼ�ptr����l��
  var=1;
  *ptr=*ptr+2;
  cout << "var=" << var << '\n' ;
  cout << "*ptr=" << *ptr << '\n' ;        
   
  system("PAUSE");	
  return 0;
 }
