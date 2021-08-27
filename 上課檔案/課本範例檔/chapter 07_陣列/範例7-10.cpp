#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {
  string str1,str2 ;
  int pos1,pos2,n,i ;
  int comapre_result ;
  cout << "輸入字串1:" ; 
  getline(cin,str1) ;
  cout << "輸入字串2:" ; 
  getline(cin,str2) ;
  cout << "輸入字串1要比較的起始Byte:" ; 
  cin >> pos1 ;
  cout << "輸入字串2要比較的起始Byte:" ; 
  cin >> pos2 ;
  cout << "輸入比較的總長度:" ; 
  cin >> n ;
  for (i=pos1;i<pos1+n;i++)
      cout << str1[i] ; 
  comapre_result=str1.compare(pos1,n,str2,pos2,n) ;
  if (comapre_result==1)
     cout << " > " ;
  else if (comapre_result==0)
     cout << " = "  ;
  else
     cout << " < " ;
  
  for (i=pos2;i<pos2+n;i++)
      cout << str2[i] ; 
      
  cout << '\n' ;
  
  system("PAUSE");	
  return 0;
 }
