//�d��14-1 ��Ū�}�Ҥ�r�ɡA������
//��r�ɦW�� : test.txt 
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
  
  string filename;
  cout << "��J�n�}�Ҫ���r�ɦW��:" ;
  cin >> filename;
    
  //�H��Ū���覡,�}���ɮ� 
  readfile.open(filename.c_str(),ios::in);
  if (readfile.fail())
   {
    cout << filename << "�ɮ׵L�k�}��!\n" ;      
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   }  
  cout << filename << "�ɮפw�}��!\n" ;
  
  //����readfile�ҥN���ɮ�
  readfile.close();  
  if (readfile.fail())
   {
    cout << filename << "�ɮ׵L�k����!\n" ; 
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   }
  cout << filename << "�ɮפw����!\n" ;
  system("pause");
  return 0;
 }
