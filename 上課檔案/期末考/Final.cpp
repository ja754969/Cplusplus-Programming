//Ū�� 
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
  readfile.open("weight.txt",ios::in);
  if (readfile.fail())
   {
    cout << "weight.txt�ɮ׵L�k�}��!\n" ;      
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   }  
   
  string data;
  cout << "weight.txt��r�ɤ��e��:\n";
  
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
    cout << "Score.txt�ɮ׵L�k����!\n" ; 
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   }
  
  
  
  system("pause");
  return 0;
 }
