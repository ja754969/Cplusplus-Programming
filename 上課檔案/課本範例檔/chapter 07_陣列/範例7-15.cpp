#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {
  string str1,str2 ;
  int pos,n ; 
  cout << "��J�r��1:" ; 
  getline(cin,str1) ;  
  cout << "��J�r��1�Q���X��ƪ��_�lByte:" ; 
  cin >> pos ;
  cout << "��J�r��1�Q���X��ƪ��`����:" ; 
  cin >> n ;
  str2=str1.substr(pos,n) ;
  cout << "�r��2=" << str2 << '\n' ;
  
  system("PAUSE");	
  return 0;
 }
