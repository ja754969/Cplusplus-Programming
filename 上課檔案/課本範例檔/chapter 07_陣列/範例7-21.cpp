#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main()
 {
  string str1,str2 ;  
  cout << "��J�r��1:" ; 
  getline(cin,str1) ;
  cout << "��J�r��2:" ; 
  getline(cin,str2) ;
  str1.swap(str2) ;
  cout << "�洫��,�r��1=" << str1  
       << " �r��2=" << str2 << '\n' ; 
  
  system("PAUSE");	
  return 0;
 }
