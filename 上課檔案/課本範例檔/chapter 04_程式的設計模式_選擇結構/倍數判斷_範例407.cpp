#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int num;
  cout << "块タ俱计:" ;
  cin >> num ; 
  if (num % 3 == 0) //3计
    if (num % 7 == 0) //7计
      cout << num << "琌3の7计\n" ;
    else
      cout << num << "琌3计\n" ;
  else
    if (num % 7 == 0) //7计
      cout << num << "琌7计\n" ;
    else
      cout << num << "ぃ琌3计┪7计\n" ;

  system("pause");
  return 0;
 }

