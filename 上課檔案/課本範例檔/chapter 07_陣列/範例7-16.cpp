#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {
  string str1,str2 ;
  int pos,n ;  
  cout << "��J�Q���N���r��:" ; 
  getline(cin,str1) ;
  cout << "��J���N���r��:" ; 
  getline(cin,str2) ;
  cout << "��J�Q���N���r�ꤧ�_�l�줸��:" ; 
  cin >> pos ;
  cout << "��J�Q���N���r�ꤧ���N�`����:" ; 
  cin >> n ;
  str1.replace(pos,n,str2) ;
  cout << "�r��Q���N�᪺���G��" << str1 << '\n' ;
  
  system("PAUSE");	
  return 0;
 }
