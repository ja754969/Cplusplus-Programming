#include <iostream>
#include <cstdlib>
using namespace std;
void deposit(int); 
int main()
 {
  int money;
  while (1)
   {
    cout << "輸入存提款金額(存款>0,提款<0,結束:0):" ;
    cin >> money ;
    deposit(money);
    if (money==0)
      break;
   }

  system("pause");
  return 0;
 }

void deposit(int money) //定義使用者自定函式
 {
  //宣告內部靜態變數
  static int saving=0; //剛開戶，存款餘額=0

  saving = saving + money;
  cout << "存款餘額:" <<saving << '\n' ;
 }
