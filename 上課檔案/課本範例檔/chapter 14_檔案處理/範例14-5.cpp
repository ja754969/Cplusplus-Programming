#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  //�ŧi�@�Ӹ�ƫ���ofstream����Ʀ�y�骫���ܼ�writefile 
  //�����g�J�ɮפ���
  ofstream writefile;  
  
  cout << "�n�g�J��ƪ���r�ɦW��:learn_c++.txt\n" ;
  
  //�H�g�J���覡,�}���ɮ�learn_c++.txt
  writefile.open("learn_c++.txt",ios::out);
  if (writefile.fail())
   {
    cout << "learn_c++.txt�ɮ׵L�k�}��!\n" ;      
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   }  
  
  string data;  
  cout << "��J�ǲߵ{���]�p���߱o���i(�n������,�Цb�ӦC���̫e����Ctrl+Z��):\n" ;
  while(1)
   {
    getline(cin,data);      
          
    //�P�_��L�O�_�b�ɧ�,�Y��J��Ƶ��� 
     if (cin.eof()) 
      break;
      
    writefile << data << '\n';
    if (writefile.fail())
      {
       cout << "�g�J��,�X�{���~:\n" ;
       break;
      }       
   }     
  
  //����writefile�ҥN���ɮ�
  writefile.close();  
  if (writefile.fail())
   {
    cout << "learn_c++.txt�ɮ׵L�k����!\n" ; 
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   }
  
  //�ŧi�@�Ӹ�ƫ���ifstream����Ʀ�y��J�����ܼ�readfile
  //����Ū���ɮפ��� 
  ifstream readfile;  
  
  //�H��Ū���覡,�}��learn_c.txt�ɮ� 
  readfile.open("learn_c++.txt",ios::in);
  if (readfile.fail())
   {
    cout << "learn_c++.txt�ɮ׵L�k�}��!\n" ;      
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   }  
  
  cout << "learn_c++.txt��r�ɤ��e��:\n";
  
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
    cout << "learn_c++.txt�ɮ׵L�k����!\n" ; 
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   }  
   
  system("pause");
  return 0;
 }
