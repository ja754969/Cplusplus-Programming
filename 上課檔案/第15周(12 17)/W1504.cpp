//�d��14-4 �ӽd��14-3
// 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  

//---------------------------------------------------------     
//---------------------------------------------------------    
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
   
  string data;
  cout << "test.txt��r�ɤ��e��:\n";
  
  //readfile�ҥN���ɮפ���Ф��b�ɧ�,�~��Ū�����      
  while (!readfile.eof())
   {
     getline(readfile,data);     
     cout << data ;         
     if (!readfile.eof())
        cout << '\n' ;         
   } 
      
  //�M��readfile�ҥN���ɮפ���Цb�ɧ������A      
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
