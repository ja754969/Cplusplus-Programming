#include <iostream>
#include <cstdlib>
using namespace std;
//�ŧi�~���R�A�ܼ�
static int saving1=0; //��}��A�s�ھl�B=0
void deposit_a(int money) //�w�q�ϥΪ̦۩w�禡
 {  
  saving1 = saving1 + money;
  
  cout << "A�Ȧ�s�ھl�B:" << saving1 << '\n' ;
 }
