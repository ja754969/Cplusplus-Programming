#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>
using namespace std;
int main()
 {
  char ch ; //�n�j�M���r�� 
  string str ; //�Q�j�M���r��
  int pos,search_result ;    
  cout << "��J�n�j�M���r��:" ; 
  ch=getche() ; 
  cout << "\n��J�Q�j�M���r��:" ; 
  getline(cin,str) ; 
  cout << "��J�Q�j�M���r�ꤧ�_�lByte:" ;  
  cin >> pos ;
  search_result=str.find(ch,pos) ;   
  cout << "�q " << str << " ����" 
       << pos << "��Byte�}�l�����,\n" ;
  if (search_result==-1)
     cout << "���G�S�o�{" << ch << '\n' ;  
  else
     cout << ch << "�Ĥ@���X�{����"
          << search_result << "��Byte\n" ; 
  
  system("PAUSE");	
  return 0;
 }

