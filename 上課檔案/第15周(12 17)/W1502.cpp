//�d��14-2 �}�Ҥ�r�ɡA�ÿ�X���e�M�Ҧ��Ŷ�(Byte) 
//��r�ɦW�� : test.txt 
//�q�ɮפ�Ū���@�Ӧr���AŪ�����ɮ״�в����U�@�Ӧr���Ҧb��} 
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
    
  //�H��Ū���覡,�}���ɮ� 
  readfile.open("test.txt",ios::in);
  if (readfile.fail()) //�P�_�O�_�breadfile�ҥN���ɮק��� 
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
     ch=readfile.get(); //�qtest.txt��Ū���@�Ӧr�� 
     
     //�P�_�_�breadfile�ҥN���ɮפ����� 
     if (readfile.eof()){
        break;	 
	 } 
     cout << ch ;    
     filespace ++;    
   }
   // �@�Ӥ���r��2��Byte
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
