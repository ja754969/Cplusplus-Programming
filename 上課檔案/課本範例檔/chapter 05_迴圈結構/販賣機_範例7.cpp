#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int money,choose;
  cout << "��J��J�����B:" ;  
  cin >> money ;
  do
   {
    cout << "��ܶ���" 
         << "1.�i��(15��) 2.�T��(12��) 3.����:" ;
    cin >> choose ;
    if (choose == 1)
      {
       if (money < 15)
         cout << "���B�����R�i��.\n" ;
       else
         money= money-15;
      }
    else if (choose == 2)
      {
       if (money < 12)
         cout << "���B�����R�T��.\n" ;
       else
         money= money-12;
      }
   }
  while(choose != 3); 
  
  system("pause");
  return 0;
 }	
