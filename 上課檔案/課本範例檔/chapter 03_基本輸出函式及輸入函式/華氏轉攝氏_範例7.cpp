#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  float f,c;
  cout << "輸入華氏溫度:" ;
  cin >> f;
  c = ( f - 32 ) * 5 / 9;
  cout << "攝氏溫度=" << c       
       << '\n' ;       
   
  system("pause");
  return 0;
 }
