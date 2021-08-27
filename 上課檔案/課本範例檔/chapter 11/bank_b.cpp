#include <iostream>
#include <cstdlib>
using namespace std;
//宣告外部靜態變數
static int saving2=0; //剛開戶，存款餘額=0
void deposit_b(int money) //定義使用者自定函式
 {
  
  saving2 = saving2 + money;
  
  cout << "B銀行存款餘額:" << saving2 << '\n' ;
 }
