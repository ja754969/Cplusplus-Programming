#include <iostream>
#include <cstdlib>
using namespace std;
//宣告外部靜態變數
static int saving1=0; //剛開戶，存款餘額=0
void deposit_a(int money) //定義使用者自定函式
 {  
  saving1 = saving1 + money;
  
  cout << "A銀行存款餘額:" << saving1 << '\n' ;
 }
