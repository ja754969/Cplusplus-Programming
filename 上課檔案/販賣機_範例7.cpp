#include <iostream>
#include <cstdlib>
//����հj�鵲�c 
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
         cout << "���B�����R�i��.\n";
       else
         money= money-15;
       cout << "�Ѿl���B: " << money << "\n"; 
      }
    else if (choose == 2)
      {
       if (money < 12)  
         cout << "���B�����R�T��.\n" ;
       else
         money= money-12;
       cout << "�Ѿl���B: " << money << "\n"; 
      }
   }
  while(choose != 3);  //�i�J�j�骺����
  
  system("pause");
  return 0;
 }	
