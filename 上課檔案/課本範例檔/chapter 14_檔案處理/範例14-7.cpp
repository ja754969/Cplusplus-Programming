#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  //�ŧi�@�Ӹ�ƫ��A��fstream����ƿ�J/��X��y�����ܼ�read_writefile
  //����Ū��/�g�J�ɮפ���
  fstream read_writefile;  
 
  //�H�iŪ���i�g�J���}�ɼҦ�,�}���ɮ�animal.txt
  //�s�W����Ʒ|�g���ɧ�
  read_writefile.open("animal.txt",ios::in|ios::out);
  if (read_writefile.fail())
   {
    cout << "animal.txt�ɮ׵L�k�}��!\n" ;      
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   }  
  string name;  
  int age,height;  
  
  getline(read_writefile,name) ;
  
  float total_age=0,total_height=0;
  int i;  
  for (i=1;i<=3;i++)
   {         
    read_writefile >> name >> age >> height ;
    if (read_writefile.fail())
      {
       cout << "Ū����,�X�{���~:\n" ;
       break;
      }
    total_age=total_age+age;
    total_height=total_height+height;       
   }
   
  //�]�w��ܤp�Ƥ@�� 
  cout.precision(1);
  cout.setf(ios::fixed);   
  //�]�w��ܤp�Ƥ@��
 
  cout << "�����~��:" << total_age/3
       << "\t��������:" << total_height/3  << '\n' ;
      
  //�N�ɮת���в����ɧ� 
  read_writefile.seekg(0,ios::end) ; 
  
  read_writefile << "�����~��:" << total_age/3
                 << "\t��������:" << total_height/3 << '\n' ;
      
  //�M��read_writefile�ҥN���ɮפ���Цb�ɧ������A      
  read_writefile.clear();
                  
  //����read_writefile�ҥN���ɮ�
  read_writefile.close();  
  if (read_writefile.fail())
   {
    cout << "animal.txt�ɮ׵L�k����!\n" ; 
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   } 
  
  system("pause");
  return 0;
 }

