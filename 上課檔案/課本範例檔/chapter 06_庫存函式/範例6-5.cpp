#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
 {
  double money,gift;
  cout << "��J���O�`���B:" ;
  cin >> money ;
  gift=floor(money /1000)*100;
  cout << "��o��§����B��" << gift 
       << "��\n";
  
  system("pause");    
  return 0;
 }	
