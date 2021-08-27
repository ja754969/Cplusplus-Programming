#include <iostream>
#include <cstdlib>
#include <cstring>
#include <conio.h>
using namespace std;
int main()
 {
  char ch ;
  string str ;  
  int pos=0,search_result,num=0 ;
  cout << "輸入字串:" ; 
  getline(cin,str) ;
  cout << "輸入字元:" ; 
  ch=getchar() ;  
  while (pos<=str.length())
   {
    search_result=str.find(ch,pos) ;
    if (search_result==-1)
       break;
    num++;
    pos=search_result+1;
   }
  cout << ch << " 出現在 " << str 
       << " 中共" << num << "次\n" ; 
  system("PAUSE");	
  return 0;
 }
