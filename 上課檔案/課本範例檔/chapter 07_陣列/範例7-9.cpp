#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {
  string str1,str2;
  int comapre_result;
  cout << "¿é¤J¦r¦ê1:" ; 
  getline(cin,str1) ;
  cout << "¿é¤J¦r¦ê2:" ; 
  getline(cin,str2) ;
  comapre_result=str1.compare(str2) ;
  if (comapre_result==1)
     cout << str1 << " > " << str2 << '\n' ;
  else if (comapre_result==0)
     cout << str1 << " = " << str2 << '\n' ;
  else
     cout << str1 << " < " << str2 << '\n' ;
  system("PAUSE");	
  return 0;
 }
