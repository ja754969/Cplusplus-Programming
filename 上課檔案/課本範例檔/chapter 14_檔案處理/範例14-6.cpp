#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  //�ŧi�@�Ӹ�ƫ���ofstream����ƿ�X��y�����ܼ�writefile
  //�����g�J�ɮפ���
  ofstream writefile;  

  //�H�g�J���覡,�}���ɮ�,�}���ɮ�animal.txt    
  writefile.open("animal.txt",ios::out);
  if (writefile.fail())
   {
    cout << "animal.txt�ɮ׵L�k�}��!\n" ;      
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   }  
    
  writefile << "�ʪ�\t�~��\t����\n" ;
  int i;
  string name;  
  int age,height;
  for (i=1;i<=3;i++)
   {
    cout << "��J��" << i 
         << "�ذʪ��W�١A�~�֤Ψ���(�H�ť���@�Ϲj):\n" ;                
    cin >> name >> age >> height ;
    writefile << name << '\t' << age << '\t' << height << '\n';
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
    cout << "animal.txt�ɮ׵L�k����!\n" ; 
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   } 
  
  system("pause");
  return 0;
 }
