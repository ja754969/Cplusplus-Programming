#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {
  string str1,str2 ;
  int pos1,pos2,n,i ;
  int comapre_result ;
  cout << "��J�r��1:" ; 
  getline(cin,str1) ;
  cout << "��J�r��2:" ; 
  getline(cin,str2) ;
  cout << "��J�r��1�n������_�lByte:" ; 
  cin >> pos1 ;
  cout << "��J�r��2�n������_�lByte:" ; 
  cin >> pos2 ;
  cout << "��J������`����:" ; 
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
