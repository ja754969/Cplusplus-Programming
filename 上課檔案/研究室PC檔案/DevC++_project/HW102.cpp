//寫一程式，輸入一整數，判斷此數否為某一個整數的平方。
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
 {
  double it,root;
  cout << "請輸入一個整數 : ";
  cin >> it;     
  root = sqrt(it);
  cout << "根為" << root << '\n';
  
  system("pause");    
  return 0;
 }	 
