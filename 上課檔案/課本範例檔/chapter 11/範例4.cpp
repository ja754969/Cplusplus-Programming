#include <iostream>
#include <cstdlib>
using namespace std;
void deposit(int); 
int main()
 {
  int money;
  while (1)
   {
    cout << "��J�s���ڪ��B(�s��>0,����<0,����:0):" ;
    cin >> money ;
    deposit(money);
    if (money==0)
      break;
   }

  system("pause");
  return 0;
 }

void deposit(int money) //�w�q�ϥΪ̦۩w�禡
 {
  //�ŧi�����R�A�ܼ�
  static int saving=0; //��}��A�s�ھl�B=0

  saving = saving + money;
  cout << "�s�ھl�B:" <<saving << '\n' ;
 }
