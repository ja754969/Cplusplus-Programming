#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct blood
 {
  string name;
  int  number; 
 };

 struct blood blood_num(struct blood [],int);

int main()
 {
  int i;
  struct blood student[5]={ {"�i�T",5},
          {"����",3},{"���|",7},
		  {"�L�G",2},{"�p��",4} };
		  
  struct blood big_number;
 
  cout << "�m�W\t���妸��\n" ;
    
  for (i=0;i<5;i++)
    cout << student[i].name << '\t'
	     << student[i].number << endl ;
  
  big_number=blood_num(student,3);

  cout << "���妸�Ƴ̦h�̬�" << big_number.name
       << ",���妸��" << big_number.number
       << "��\n" ;

  system("pause");
  return 0;
 }


struct blood blood_num(struct blood data[],int size)
 {
  int i,j;
  struct blood temp; //�Ȧstemp���c
  temp=data[0]; //�]�wdata[0]�����妸�Ƴ̦h�̪����c
  for (i=1;i<=size-1;i++) //����size-1�����
    if (temp.number < data[i].number)
       temp=data[i]; //�]�wdata[i]�����妸�Ƴ̦h�̪����c

  return temp; //�Ǧ^���妸�Ƴ̦h�̪��m�W�ή��妸��
 }


