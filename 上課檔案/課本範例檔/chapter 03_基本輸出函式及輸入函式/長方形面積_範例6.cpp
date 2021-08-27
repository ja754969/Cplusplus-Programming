#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int length,width;
  cout << "輸入長方形的長與寬:" ;
  cin >> length >> width;
  cout << "長為" << length 
       << ",寬為" << width
       << "的長方形面積=" << length * width
       << '\n' ;     
  
  system("pause");
  return 0;
 }
