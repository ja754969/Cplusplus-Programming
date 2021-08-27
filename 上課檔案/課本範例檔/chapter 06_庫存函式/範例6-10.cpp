#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
int main()
 {
  int ascii; 
  char ch; 
  cout << "輸入ASCII碼:" ;
  cin >> ascii;  
  ch=toascii(ascii);
  cout << "ASCII碼" << ascii 
  << "所對應的字元為" << ch << '\n';
  
  system("pause");    
  return 0;
 }	
