#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;
int main()
 {
  int i,total=0;

  struct teacher
   {
    int code;
    string name;
   };

  struct subject
   {
    int code;
    string name;
    struct teacher teacher;
   };

  struct major_rec
   {
    string name;
    struct subject subject;
    int score;
   };

  struct major_rec data[2];

  data[0].name="�����W";
  data[0].subject.code=11;
  data[0].score=90;
  data[0].subject.name="�{���]�p";
  data[0].subject.teacher.code=7;
  data[0].subject.teacher.name="�޿�L";

  data[1].name="�����W"; //�����O�i���i�L
  data[1].subject.code=21;
  data[1].score=92;
  data[1].subject.name="�L�n�� ";
  data[1].subject.teacher.code=9;
  data[1].subject.teacher.name="�N�Ƴ�";

  cout << data[0].name << "�P�ǥ��Ǵ��׽ҰO���p�U:\n" ;
  cout << "��إN�� ��ئW��\t���Z\t�Юv�N��\t�Юv�m�W\n" ;
  for (i=0;i<2;i++)
   {
    cout << data[i].subject.code << "\t " 
         << data[i].subject.name<<"\t " << data[i].score << '\t' 
         << data[i].subject.teacher.code << "\t\t"
         << data[i].subject.teacher.name << '\n' ;
    total=total+data[i].score;
   }
  //�]�w��ܤp��1��
  cout.precision(1);
  cout.setf(ios::fixed);
  //�]�w��ܤp��1��
  cout << "�������Z��" << (float)total/2 << '\n' ;
   
  system("pause");
  return 0;
 }
