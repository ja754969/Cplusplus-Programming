#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
 {
  double money,gift;
  cout << "輸入消費總金額:" ;
  cin >> money ;
  gift=floor(money /1000)*100;
  cout << "獲得的禮券金額為" << gift 
       << "元\n";
  
  system("pause");    
  return 0;
 }	
