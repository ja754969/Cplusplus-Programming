#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
int main()
 {
  char ch1,ch2;
  cout << "輸入英文字元:" ;  
  cin >> ch1 ;
  ch2= tolower(ch1);
  cout << ch1 << "的小寫為" << ch2 
       << '\n';
  
  system("pause");    
  return 0;
 }	
