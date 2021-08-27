//寫一程式，輸入一整數，判斷此數否為某一個整數的平方。
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
 {
  int it;
  double root;
  cout << "請輸入一個整數 : ";
  cin >> it;     
  root = sqrt(it);
  if (root - int(root) == 0){
  	cout << "正確\n"<<it<< "是" << root <<"的平方\n"; 
  }
  else{
  	cout << "錯誤\n"<<it<<"的根不是整數，是" << root << '\n';
  }
  
  
  system("pause");    
  return 0;
 }	 
