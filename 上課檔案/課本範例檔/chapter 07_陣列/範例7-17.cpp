#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {
  string str1,str2 ;
  int pos1,pos2,m,n ;  
  cout << "��J�Q���N���r��:" ; 
  getline(cin,str1) ;
  cout << "��J���N���r��:" ; 
  getline(cin,str2) ;
  cout << "��J�Q���N���r�ꤧ���N���_�lByte:" ; 
  cin >> pos1 ;
  cout << "��J�Q���N���r�ꤧ���N�`����:" ; 
  cin >> m ;
  cout << "��J���N���r��n���X��Ƥ��_�lByte:" ; 
  cin >> pos2 ;
  cout << "��J���N���r��n���X��Ƥ��`����:" ; 
  cin >> n ;
  str1.replace(pos1,m,str2,pos2,n) ;
  cout << "�r��Q���N�����G��" << str1 << '\n' ;
  
  system("PAUSE");	
  return 0;
 }
