#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <conio.h>
using namespace std;
void display(string *, int , int );
int main()
 {
  int i,j;

  //���Q�Ϯ�
  string picture[9]={"��",":)","��","��","�L","�I","��","��","��"};

  //�s��q���üƲ��ͪ�9�ӹϮ�
  string position[3][3];

  //���Q��ʪ��_�l�ɶ��I(�w����)�ΰ���ɶ��I(�w����)
  clock_t start_clock,end_clock;

  float spend=0; //���Q��ʪ��ɶ�(��)
  srand((unsigned)time(NULL));

  //�q���üƲ��ͪ�9�ӹϮצs�Jposition
  for (i=0;i<3;i++)
    for (j=0;j<3;j++)
      position[i][j]=picture[rand()%9];

  display(&position[0][0],3,3); 

  while (1)
   {
    cout << "\n�������Q�C��(��Y�}�l,��N����):" ;
    if (toupper(getche())=='N')
      break;

    start_clock=clock();
    //���o�{���q�ثe����즹���
    //�Ҹg�L���w����(ticks)

    spend =(double) (end_clock-start_clock)/CLK_TCK;

    while (1)
     {
      system("cls");
    
      //�U�����O,���H�Pı��1����ʳ̺C
      //�N��1���2�C������ܦ���1���3�C�����
      //�N��1���1�C������ܦ���1���2�C�����
      for (i=2;i>=1;i--)
        position[i][0]=position[i-1][0];

      //���Ͳ�1���1�C�����
      position[0][0]=picture[rand()%9];

      //�U�����O,���H�Pı��2����ʤ��1��֤@�I
      //�N��2���2�C������ܦ���2���3�C�����
      position[2][1]=position[1][1];

      //���Ͳ�2���2,1�C�����
      for (i=1;i>=0;i--)
        position[i][1]=picture[rand()%9];

      //�U�����O,���H�Pı��3����ʳ̧�
      //���s���Ͳ�3���1,2,3�C�����
      for (i=0;i<3;i++)
        position[i][2]=picture[rand()%9];

      display(&position[0][0],3,3); //�g�k1
   
      _sleep(100); 
      //���y�@�U,�i�H�ݨ�n���Ϯצb��� 
      
      end_clock=clock();
      //���o�{���q�}�l����즹���
      //�Ҹg�L���w����(ticks)

      spend =(double) (end_clock-start_clock)/CLK_TCK;
      
      if (spend>=5) //��ʮɶ�>=5��,�������
        break;
     }

    //�P�_��2�C�O�_���@��,�Y�@��,�h Bingo
    for (j=0;j<2;j++)
      if (position[1][j]!=position[1][j+1])
        break;
    if (j==2)
      cout << "���߱zBINGO�F!\n" ;
   }
  
  cout << '\n' ;
  system("pause");
  return 0;
 }

void display(string *position , int m , int n)
 {
  int i,j;
  system("cls");
  for (i=0;i<m;i++)
   {
    for (j=0;j<n;j++)
      cout << *(position+i*n+j) << ' ' ;
      //position+i*n+j�O�O�����}
      //*(position+i*n+j)�۷��position[i][j]

    cout << "\n\n";
   }
  cout << "\n��1����ʳ̺C,��2����ʸ���,��3����ʳ̧�\n" ;
 }
