#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  char op;
  int num1,num2,answer;
  cout << "��J�@�ӹB��Ÿ�(+�A-�A*�A/):" ;
  cin >> op ;  
  
  
  cout << "��J��Ӿ��num1,num2:" ;
  cin >> num1 >> num2;     
  switch (op)
   {
     case '+':
       answer= num1+num2;      
       break;
     case '-':
       answer= num1-num2;      
       break;
     case '*':
       answer= num1*num2;      
       break;
     case '/':
       answer= num1/num2;        
   }
  cout << num1 << op << num2
       << '=' << answer << '\n' ;
 
  system("pause");
  return 0;
 }

