#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;
int main()
 {
  int ascii; 
  char ch; 
  cout << "��JASCII�X:" ;
  cin >> ascii;  
  ch=toascii(ascii);
  cout << "ASCII�X" << ascii 
  << "�ҹ������r����" << ch << '\n';
  
  system("pause");    
  return 0;
 }	
