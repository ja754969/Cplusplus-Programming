#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <ctime>
using namespace std;

//�����C�Ӧ�m(row,col)�O�_���D���@����,�٬O����
//0:��m(row,col)�O�Ū� 1:��m(row,col)�O�D���@����
//2:��m(row,col)�O����
//�K:�D�Y �e:�D�� ��:����

int position[25][25]={0};
//�����D���C�@������m(row,col)
//�D�̱`625�`(=25*25,�t�Y����)

int snake_body[625][2];

//�ŧi���e25*25��T�Ϥ��禡
void print_graphy(void);

//�ŧi�D���W���ʤ��禡
void up(int *,int *,int *,int *,int *);

//�ŧi�D���U���ʤ��禡
void down(int *,int *,int *,int *,int *);

//�ŧi�D�������ʤ��禡
void left(int *,int *,int *,int *,int *);

//�ŧi�D���k���ʤ��禡
void right(int *,int *,int *,int *,int *);

//�ŧi���ͭ�����m���禡
void generate_food(int *,int *,int *);

int main()
 {
  int i,j,k;
  int snake_head_row,snake_head_col;//�D�Y��m(�C,��)

  //�O���D���C�@��������m
  //snake_body[i][0];�O���D��2��i������row��m
  //snake_body[i][1];�O���D��2��i������col��m
  
  int len;  //�D��
  int food_row,food_col; //������m(�C,��)
  char move_direction; //�D���ʤ�V

  //�]�w�C�@��m�Ȭ�-1,��ܵL�D�����A
  for (i=0;i<625;i++)
    for (j=0;j<2;j++)
      snake_body[i][j]=-1;

  srand((unsigned)time(NULL));

  snake_head_row=rand()%25;
  snake_head_col=rand()%25;

  //�D���_�l��m�u���D�Y
  position[snake_head_row][snake_head_col]=1;
  snake_body[0][0]=snake_head_row; //�D�Y��row��m
  snake_body[0][1]=snake_head_col; //�D�Y��col��m
  len=1;

  //���ͭ�����m
  generate_food(&len,&food_row,&food_col);

  //�e25*25��T��
  print_graphy();

  while (1)
   {
    move_direction=getch();
    if (move_direction!=0)
     {
      switch (move_direction)
       {
        case 72: //�� ��
          up(&len,&snake_head_row,&snake_head_col,&food_row,&food_col);
          break;
        case 80: //�� ��
          down(&len,&snake_head_row,&snake_head_col,&food_row,&food_col);
          break;
        case 75: //�� ��
          left(&len,&snake_head_row,&snake_head_col,&food_row,&food_col);
          break;
        case 77: //�� ��
          right(&len,&snake_head_row,&snake_head_col,&food_row,&food_col);
       }
      print_graphy();

      //�P�_�O�_�O�_������V
      //�u�n�D�Y����D��,�Y�D�Y�P�D���Y�@�`���馳�ۦP����m
      //�N������V,�C������
      for (i=1;i<len;i++)
        if (snake_body[i][0]==snake_body[0][0] && 
            snake_body[i][1]==snake_body[0][1])
          {
           cout << "������V,�C������.\n" ;
           break;
          }
        if (i<len)
          break;
     }
   }
  system("pause");
  return 0;
 }

//�w�q���e25*25��T�Ϥ��禡
void print_graphy(void)
 {
  int i,j,k;
  system("cls"); //�M���ù��e��
  cout << "�g���D�C��(����,��,��,������,�u�n�D�Y����D��,�C������)\n" ;
  k=0;
  for (i=0;i<=24;i++)
   {
    for (j=0;j<=24;j++)
      if (position[i][j]==1)
        if (snake_body[0][0]==i && snake_body[0][1]==j)
          cout << "�K" ;
        else
          cout << "��" ;
      else if (position[i][j]==2)
        cout << "��" ;
      else
        cout << "  " ;
    
    cout << '\n' ;
   }
 }

//�w�q�D���W���ʤ��禡
void up(int *len, int *snake_head_row,
        int *snake_head_col,int *food_row, int *food_col)
 {
  int i;
  if (snake_body[0][0]>=1)
   {
    if (snake_body[0][0]-1==*food_row && snake_body[0][1]==*food_col)
     {
      //�Y�쭹��,�D������+1
      (*len)++;

      //���s�]�w�D�C�@�`����m
      for (i=*len-1;i>=1;i--)
       {
        snake_body[i][0]=snake_body[i-1][0];
        snake_body[i][1]=snake_body[i-1][1];
       }

      //���]�s���D�Y��m
      *snake_head_row=*food_row;
      position[*snake_head_row][*snake_head_col]=1;

      //���]�D�Y��row��m,�D�Y��col��m�S��
      snake_body[0][0]=*snake_head_row;

      //���ͷs��������m
      generate_food(len,food_row,food_col);
     }
    else
     {
      //�]�w�D����m�Ȭ�-1,��ܥh���D��,�Y�D���̫�@�`
      position[snake_body[*len-1][0]][snake_body[*len-1][1]]=0;
      //snake_body[*len-1][0]=-1;
      //snake_body[*len-1][1]=-1;
      //�]�w�D����m�Ȭ�-1,��ܥh���D��,�Y�D���̫�@�`

      //�N�D����m�ȩ��W��
      for (i=*len-1;i>=1;i--)
       {
        snake_body[i][0]=snake_body[i-1][0];
        snake_body[i][1]=snake_body[i-1][1];
       }
      //�N�D����m�ȩ��W��

      //���]�D�Y����m
      (*snake_head_row)--;
      snake_body[0][0]=*snake_head_row;
      snake_body[0][1]=*snake_head_col;
      position[*snake_head_row][*snake_head_col]=1;
      //���]�D�Y����m
     }
   }
 }

//�w�q�D���U���ʤ��禡
void down(int *len, int *snake_head_row,
          int *snake_head_col,int *food_row,int *food_col)
 {
  int i;
  if (snake_body[0][0]<=23)
   {
    if (snake_body[0][0]+1==*food_row && snake_body[0][1]==*food_col)
     {
      //�Y�쭹��,�D������+1  
      (*len)++;

      //���s�]�w�D�C�@�`����m
      for (i=*len-1;i>=1;i--)
       {
        snake_body[i][0]=snake_body[i-1][0];
        snake_body[i][1]=snake_body[i-1][1];
       }

      //���]�s���D�Y��m
      *snake_head_row=*food_row;
      position[*snake_head_row][*snake_head_col]=1;

      //���]�D�Y��row��m,�D�Y��col��m�S��
      snake_body[0][0]=*snake_head_row;

      //���ͷs��������m
      generate_food(len,food_row,food_col);
     }
    else
     {
      //�]�w�D����m�Ȭ�-1,��ܥh���D��,�Y�D���̫�@�`
      position[snake_body[*len-1][0]][snake_body[*len-1][1]]=0;
      snake_body[*len-1][0]=-1;
      snake_body[*len-1][1]=-1;
      //�]�w�D����m�Ȭ�-1,��ܥh���D��,�Y�D���̫�@�`

      //�N�D����m�ȩ��U��
      for (i=*len-1;i>=1;i--)
       {
        snake_body[i][0]=snake_body[i-1][0];
        snake_body[i][1]=snake_body[i-1][1];
       }
      //�N�D����m�ȩ��U��

      //���]�D�Y����m
      (*snake_head_row)++;
      snake_body[0][0]=*snake_head_row;
      snake_body[0][1]=*snake_head_col;
      position[*snake_head_row][*snake_head_col]=1;
      //���]�D�Y����m
     }
   }
 }

//�w�q�D�������ʤ��禡
void left(int *len, int *snake_head_row,
           int *snake_head_col,int *food_row,int *food_col)
 {
  int i;
  if (snake_body[0][1]>=1)
   {
    if (snake_body[0][1]-1==*food_col && snake_body[0][0]==*food_row)
     {
      //�Y�쭹��,�D������+1
      (*len)++;

      //���s�]�w�D�C�@�`����m
      for (i=*len-1;i>=1;i--)
       {
        snake_body[i][0]=snake_body[i-1][0];
        snake_body[i][1]=snake_body[i-1][1];
       }
 
      //���]�s���D�Y��m
      *snake_head_col=*food_col;
      position[*snake_head_row][*snake_head_col]=1;
 
      //���]�D�Y��row��m,�D�Y��col��m�S��
      snake_body[0][1]=*snake_head_col;
 
      //���ͷs��������m
      generate_food(len,food_row,food_col);
     }
    else
     {
      //�]�w�D����m�Ȭ�-1,��ܥh���D��,�Y�D���̫�@�`
      position[snake_body[*len-1][0]][snake_body[*len-1][1]]=0;
      snake_body[*len-1][0]=-1;
      snake_body[*len-1][1]=-1;
      //�]�w�D����m�Ȭ�-1,��ܥh���D��,�Y�D���̫�@�`
 
      //�N�D����m�ȩ�����
      for (i=*len-1;i>=1;i--)
       {
        snake_body[i][0]=snake_body[i-1][0];
        snake_body[i][1]=snake_body[i-1][1];
       }
      //�N�D����m�ȩ�����
 
      //���]�D�Y����m
      (*snake_head_col)--;
      snake_body[0][0]=*snake_head_row;
      snake_body[0][1]=*snake_head_col;
      position[*snake_head_row][*snake_head_col]=1;
      //���]�D�Y����m
     }
   }
 }
 
 //�w�q�D���k���ʤ��禡
void right(int *len,int *snake_head_row,
           int *snake_head_col,int *food_row,int *food_col)
 {
  int i;
  if (snake_body[0][1]<=23)
   {
    if (snake_body[0][1]+1==*food_col && snake_body[0][0]==*food_row)
     {
      //�Y�쭹��,�D������+1
      (*len)++;
 
      //���s�]�w�D�C�@�`����m
      for (i=*len-1;i>=1;i--)
       {
        snake_body[i][0]=snake_body[i-1][0];
        snake_body[i][1]=snake_body[i-1][1];
       }
 
      //���]�s���D�Y��m
      *snake_head_col=*food_col;
      position[*snake_head_row][*snake_head_col]=1;
 
      //���]�D�Y��row��m,�D�Y��col��m�S��
      snake_body[0][1]=*snake_head_col;
 
      //���ͷs��������m
      generate_food(len,food_row,food_col);
     }
    else
     {
      //�]�w�D����m�Ȭ�-1,��ܥh���D��,�Y�D���̫�@�`
      position[snake_body[*len-1][0]][snake_body[*len-1][1]]=0;
      snake_body[*len-1][0]=-1;
      snake_body[*len-1][1]=-1;
      //�]�w�D����m�Ȭ�-1,��ܥh���D��,�Y�D���̫�@�`
 
      //�N�D����m�ȩ��k��
      for (i=*len-1;i>=1;i--)
       {
        snake_body[i][0]=snake_body[i-1][0];
        snake_body[i][1]=snake_body[i-1][1];
       }
      //�N�D����m�ȩ��k��
 
      //���]�D�Y����m
      (*snake_head_col)++;
      snake_body[0][0]=*snake_head_row;
      snake_body[0][1]=*snake_head_col;
      position[*snake_head_row][*snake_head_col]=1;
      //���]�D�Y����m
     }
   }
 }
 
//�w�q���ͭ�����m���禡
void generate_food(int *len,int *food_row,int *food_col)
 {
  int i;
  while (1)
   {
    *food_row=rand()%25;
    *food_col=rand()%25;
 
    //��m(food_row,food_col)�Y�Q�D�Ҧ���,�h�L�k�]�w���������s��m
    //��m(food_row,food_col)�P�D�Ҧ��ڪ��Ҧ���m���
    for (i=0;i<*len;i++)
      if (snake_body[i][0]==*food_row && snake_body[i][1]==*food_col)
        break;
    
    if (i==*len)
      break;
    
   }
  position[*food_row][*food_col]=2;
 }
