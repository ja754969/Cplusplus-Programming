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
  cout << "��J�r��:" ; 
  getline(cin,str) ;
  cout << "��J�r��:" ; 
  ch=getchar() ;  
  while (pos<=str.length())
   {
    search_result=str.find(ch,pos) ;
    if (search_result==-1)
       break;
    num++;
    pos=search_result+1;
   }
  cout << ch << " �X�{�b " << str 
       << " ���@" << num << "��\n" ; 
  system("PAUSE");	
  return 0;
 }
