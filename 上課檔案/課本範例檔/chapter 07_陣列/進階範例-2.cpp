#include <iostream>
#include <cstdlib>
#include <cstring>
#include <conio.h>
using namespace std;
int main()
 {
  string str1,str2 ;
  int pos=0,search_result,num=0 ;
  cout << "��J�r��1:" ; 
  getline(cin,str1) ;
  cout << "��J�r��2:" ; 
  getline(cin,str2) ;
  while (pos<=str2.length())
   {
    search_result=str2.find(str1,pos) ;
    if (search_result==-1)
       break;
    num++;
    pos=search_result+1;
   }
  cout << str1 << " �X�{�b " << str2 
       << " ���@" << num << "��\n" ; 
  system("PAUSE");	
  return 0;
 }
