#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int score;
  float money=400;
  int people;
  char special;
  cout << "���Q���d(1:�� 2:�L):" ;
  cin >> special ;
  cout << "���O�H��:" ;
  cin >> people ;
  money=400*people;
  if (special == '1')
    money=money*0.9;
  cout << "���O���B:" << money << '\n' ;
  
  system("pause");
  return 0;
 }

