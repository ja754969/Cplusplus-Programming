#include <iostream>
#include <cstdlib>
#include <cstring>
#include <conio.h>
using namespace std;
int main()
 {
  string str1,str2 ;
  int pos=0,search_result,num=0 ;
  cout << "輸入字串1:" ; 
  getline(cin,str1) ;
  cout << "輸入字串2:" ; 
  getline(cin,str2) ;
  while (pos<=str2.length())
   {
    search_result=str2.find(str1,pos) ;
    if (search_result==-1)
       break;
    num++;
    pos=search_result+1;
   }
  cout << str1 << " 出現在 " << str2 
       << " 中共" << num << "次\n" ; 
  system("PAUSE");	
  return 0;
 }
