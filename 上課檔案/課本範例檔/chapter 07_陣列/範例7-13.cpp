#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {
  string str1,str2 ; //�Q�j�M���r��,�j�M���r��
  int pos,search_result ;
  cout << "��J�n�j�M���r��:" ; 
  getline(cin,str1) ;
  cout << "��J�Q�j�M���r��:" ; 
  getline(cin,str2) ;
  cout << "��J�Q�j�M���r�ꤧ�_�lByte:" ;
  cin >> pos ;
  search_result=str2.rfind(str1,pos) ;
  cout << "�q "<< str2 << " ����" 
       << pos << "��Byte�}�l���e��,\n" ;
  if (search_result==-1)
     cout << "���G�S�o�{" << str1 << '\n' ;  
  else
     cout << str1 << "�Ĥ@���X�{����"
          << search_result << "��Byte\n" ; 
  system("PAUSE");	
  return 0;
 }
