#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {
  string str ;
  int pos,n ;
  cout << "��J�n�Q�R����ƪ��r��:" ; 
  getline(cin,str) ; 
  cout << "��J�n�Q�R������Ƥ��_�l�줸��:" ;
  cin >> pos ;
  cout << "��J�n�Q�R������Ƥ��줸�ռ�:" ;
  cin >> n ;
  cout << str << "����ƳQ�R����,\n�ܦ�";
  str.erase(pos,n);  
  cout << str << '\n' ; 
  system("PAUSE");	
  return 0;
 }
