#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
int main()
 {
  char ch1,ch2;
  cout << "��J�^��r��:" ;  
  cin >> ch1 ;
  ch2= tolower(ch1);
  cout << ch1 << "���p�g��" << ch2 
       << '\n';
  
  system("pause");    
  return 0;
 }	
