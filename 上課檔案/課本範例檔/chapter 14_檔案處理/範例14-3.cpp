#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  //�ŧi�@�Ӹ�ƫ���ofstream����Ʀ�y��X�����ܼ�appendfile
  //�����g�J�ɮפ���
  ofstream appendfile;  
  
  cout << "�n�g�J��ƪ���r�ɦW��:test.txt\n" ;
      
  //�H�g�J���覡,�}���ɮ�test.txt,�ñN�s�W����Ƽg���ɮק���
  appendfile.open("test.txt",ios::app);
  if (appendfile.fail())
   {
    cout << "test.txt�ɮ׵L�k�}��!\n" ;      
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   }  
  
  string data;  
  cout << "��J�n�g�J�����(�HEnter��@������):\n" ;  
  getline(cin,data);
  appendfile << data << '\n' ;
  if (appendfile.fail())
   {
    cout << "�g�J��,�X�{���~:\n" ;
    exit(1);
   }
  
  //����appendfile�ҥN���ɮ�
  appendfile.close();  
  if (appendfile.fail())
   {
    cout << "test.txt�ɮ׵L�k����!\n" ; 
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   }
    
  system("pause");
  return 0;
 }
