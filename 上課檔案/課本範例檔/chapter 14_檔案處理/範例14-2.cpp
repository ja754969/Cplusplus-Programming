#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  //�ŧi�@�Ӹ�ƫ���ifstream����Ʀ�y��J�����ܼ�readfile
  //����Ū���ɮפ��� 
  ifstream readfile;  
    
  //�H��Ū���覡,�}��test.txt�ɮ� 
  readfile.open("test.txt",ios::in);
  if (readfile.fail())
   {
    cout << "test.txt�ɮ׵L�k�}��!\n" ;      
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   }  
  
  char ch;
  int filespace=0; //�p���ɮשҦ����Ŷ�(byte)
  cout << "test.txt��r�ɤ��e��:\n";
  while (1)
   {
     ch=readfile.get();
     
     //�P�_�_�breadfile�ҥN���ɮפ����� 
     if (readfile.eof())
        break;
     cout << ch ;    
     filespace ++;    
   }
  cout << '\n' << "test.txt��r�ɩҦ����Ŷ���";
  cout << filespace << "Bytes(�]�A���C�r��)\n" ;
  
   
  //�M��readfile�ҥN���ɮפ���Цb�ɧ������A    
  //�o�˰���readfile.close(); ���ɮɤ~���|�����D 
  readfile.clear();  
 

  //����readfile�ҥN���ɮ�
  readfile.close();  
  if (readfile.fail())
   {
    cout << "test.txt�ɮ׵L�k����!\n" ; 
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   }
  
  system("pause");
  return 0;
 }
