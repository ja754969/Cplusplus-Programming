#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int i,j;
  struct tel_book
   {
    string name;
    int age;
    string tel;
   };

  struct tel_book student[3]={
         {"����",19,"06-2512"},
         {"�i�T",18,"04-2321"},
         {"���|",18,"02-2226"} };

  struct tel_book temp; // �Ȧstemp���c

  cout << "�Ƨǫe�����:\n" ;
  for (i=0;i<3;i++)
   {
    cout << student[i].name << ' ' << student[i].age
         << ' ' << student[i].tel << "\n" ;
   }

  for (i=1;i<=2;i++) //����2(=3-1)�ӨB�J
    for (j=0;j<3-i;j++) //��i�B�J,����3-i�����
      //�~�ָ��j�̱Ʀb�᭱
      if (student[j].age>student[j+1].age)
       {
        temp=student[j];
        student[j]=student[j+1];
        student[j+1]=temp;
       }
      //�Y�~�֬ۦP
      else if (student[j].age==student[j+1].age)
        //�A�̾ڹq�ܱƦC
        if (student[j].tel > student[j+1].tel)
         {
          temp=student[j];
          student[j]=student[j+1];
          student[j+1]=temp;
         }
        //�Y���䪺���>�k�䪺��ơA�h
        //�Nstudent[j]�Pstudent[j+1]��
        //�Ҧ����������e�����C

  cout << "�Ƨǫ᪺���:\n" ;
  for (i=0;i<3;i++)
   {
    cout << student[i].name << ' ' << student[i].age
         << ' ' << student[i].tel << "\n" ;
   }      
   
  system("pause");
  return 0;
 }
