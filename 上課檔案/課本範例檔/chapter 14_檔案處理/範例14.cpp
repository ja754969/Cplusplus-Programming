#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
struct student
 {
  char sex;
  char name[7];
 };
 
//��X�W�r�ۦP�̦h���k�ͻP�k�ͤ��W�r 
void find_name(int , int);

//�ŧi�@�Ӹ�ƫ���ifstream����Ʀ�y��J�����ܼ�readfile 
//����Ū���ɮפ���
ifstream readfile; 
int main()
 {  
  //�HŪ�����}�ɼҦ�,�}�Ҥj���p�Ҧҥͩm�W�����.txt
  readfile.open("�j���p�Ҧҥͩm�W�����.txt",ios::in);
  if (readfile.fail())
   {
    cout << "�j���p�Ҧҥͩm�W�����.txt�L�k�}��!\n" ;      
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   }   
  
  //�ŧienroll��student���c�ܼ�
  struct student enroll; //�������ǥ�

  int boy=0,girl=0; //�k��,�k�ͤH��
  
  while (1) 
   {
    //�@��Ū��1��student���c���A�����
    //�æs�Jenroll���c�ܼ�    
    readfile >> enroll.sex >> enroll.name ;
    if (!readfile.eof())
      if (enroll.sex=='1')
         boy++;
      else
         girl++;
    else
      break;
   }
   
  //�M��readfile�ҥN���ɮפ���Цb�ɧ������A       
  readfile.clear();
  
  readfile.seekg(0,ios::beg);  
  find_name(boy,girl);
  
  readfile.clear();  
 
  //����readfile�ҥN���ɮ�  
  readfile.close();  
  if (readfile.fail())
   {
    cout << "�j���p�Ҧҥͩm�W�����.txt�L�k����!\n" ; 
    system("pause");
    exit(1);//exit(1)�禡�@�ά��j�������{��
   } 
    
  system("PAUSE");
  return 0; 
 }

void find_name(int boy,int girl)
 {
  int i;
   
  //�w�qstudent_firstname(�W�r�ΤH��)�����c��ƫ��A
  struct student_firstname
   {
    string name;
    int number;
   };

  //�ʺA�ŧi�@���}�C���c�ܼ�,�O���̦h���k�ͪ��W�r�ΤH��  
  struct student_firstname *boylist = new struct student_firstname [boy];
 
  //�ʺA�ŧi�@���}�C���c�ܼ�,�O���̦h���k�ͪ��W�r�ΤH��  
  struct student_firstname *girllist = new struct student_firstname [girl];

  struct student enroll;
  int boy_num=0,girl_num=0;
  char temp[5];

  //�H�Ƴ̦h���k�ͤΤk�ͦW�r
  string boy_most_name,girl_most_name;
  //�̦h���k�ͤΤk�ͤH��
  int boy_most_number,girl_most_number;

  while (1) 
   {
    //�@��Ū��2�Ӹ��
    //�æs�Jenroll���c�������ܼ� sex�� name
    readfile >> enroll.sex >> enroll.name ;
    if (!readfile.eof())
      if (enroll.sex=='1') //��ܨk�� 
        {
         //���Xenroll.name��2��Byte���᪺���e(�Y�W�r)           
         //�s�J boylist���c�}�C�������ܼ� name 
         boylist[boy_num].name=enroll.name+2;         
         if (boy_num==0) //��ܲĤ@�Өk��
          {
           boylist[boy_num].number=1;
           boy_num=1; 
          }
         else
          {
           for (i=boy_num-1;i>=0;i--)
             if (boylist[boy_num].name==boylist[i].name)              
                break;
           
           //�p�G�o�Өk�ͪ��W�r�P���e�k�ͪ��W�r�ۦP
           //�h���e�k�ͪ��W�r�ҹ������H��+1
           //�_�h�o�Өk�ͪ��W�r�ҹ������H�Ƴ]��1(��ܲĤ@���X�{)
           //�åB�N���P�W�r���k�ͤH��+1
           if (i>=0)
              boylist[i].number++;
           else
             {
              boylist[boy_num].number=1;
              boy_num++; 
             }
          }             
        }
      else
        {         
         //���Xenroll.name��2��Byte���᪺���e(�Y�W�r) 
         //�s�J girllist���c�}�C�������ܼ� name 
         girllist[girl_num].name=enroll.name+2;         
         if (girl_num==0) //��ܲĤ@�Ӥk�� 
           {
            girllist[girl_num].number=1;
            girl_num=1;
           }
         else
           {
            for (i=girl_num-1;i>=0;i--)
              if (girllist[girl_num].name==girllist[i].name)
                break;
            
            //�p�G�o�Ӥk�ͪ��W�r�P���e�k�ͪ��W�r�ۦP
            //�h���e�k�ͪ��W�r�ҹ������H��+1
            //�_�h�o�Ӥk�ͪ��W�r�ҹ������H�Ƴ]��1(��ܲĤ@���X�{)
            //�åB�N���P�W�r���k�ͤH��+1 
            if (i>=0)
              girllist[i].number++;
            else
              {
               girllist[girl_num].number=1;
               girl_num++;
              }
           }          
        }
    else
      break;
   }
   
  boy_most_name=boylist[0].name;
  boy_most_number=boylist[0].number;  
  for (i=1;i<boy_num;i++)
    if (boy_most_number<=boylist[i].number)
     {
      boy_most_number=boylist[i].number;
      boy_most_name=boylist[i].name; 
     }     
  cout << "�H�Ƴ̦h���k�ͬ�" << boy_most_name << "�@��" << boy_most_number << "��.\n" ;
  
  girl_most_name=girllist[0].name;
  girl_most_number=girllist[0].number;
  for (i=1;i<girl_num;i++)
    if (girl_most_number<=girllist[i].number)
     {
      girl_most_number=girllist[i].number;
      girl_most_name=girllist[i].name;
     }
  cout << "�H�Ƴ̦h���k�ͬ�" << girl_most_name << "�@��" << girl_most_number << "��.\n" ;
 }
