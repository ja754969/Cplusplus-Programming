#include <iostream>
#include <cstdlib>
using namespace std;
#include "bank.h"
int main()
 { 
  int bank_code,money;
  while (1)
   { 
    cout << "��ܻȦ�(1:A�Ȧ� 2:B�Ȧ� 3:����):" ;
    cin >> bank_code ;
    if (bank_code==3)   
      break; 
    cout << "��J�s���ڪ��B(�s��>0,����<0):" ;
    cin >> money ;

    if (bank_code==1)
      deposit_a(money);
    else  
      deposit_b(money);
   } 

  system("pause");
  return 0;
 }
