#include <iostream>
#include <cstdlib>
using namespace std;
//�ŧi�~���R�A�ܼ�
static int saving2=0; //��}��A�s�ھl�B=0
void deposit_b(int money) //�w�q�ϥΪ̦۩w�禡
 {
  
  saving2 = saving2 + money;
  
  cout << "B�Ȧ�s�ھl�B:" << saving2 << '\n' ;
 }
