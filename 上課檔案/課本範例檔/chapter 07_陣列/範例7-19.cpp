#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {
  string str1,str2 ;
  int pos;
  cout << "��J�Q���J�r��:" ; 
  getline(cin,str1) ;
  cout << "��J���J�r��:" ; 
  getline(cin,str2) ;
  cout << "��J�Q���J�r��n���J����m(�ĴX�Ӧ줸��):" ;
  cin >> pos ;
  cout << str2 << "���J��" << str1 
       << "����" << pos << "�Ӧ줸�ի�,\n�ܦ�" ; 
  str1.insert(pos,str2);  
  cout << str1 << '\n' ; 
  system("PAUSE");	
  return 0;
 }
