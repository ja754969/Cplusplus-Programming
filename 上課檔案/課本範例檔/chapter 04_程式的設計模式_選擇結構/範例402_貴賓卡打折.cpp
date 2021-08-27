#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int score;
  float money=400;
  int people;
  char special;
  cout << "持貴賓卡(1:持 2:無):" ;
  cin >> special ;
  cout << "消費人數:" ;
  cin >> people ;
  money=400*people;
  if (special == '1')
    money=money*0.9;
  cout << "消費金額:" << money << '\n' ;
  
  system("pause");
  return 0;
 }

