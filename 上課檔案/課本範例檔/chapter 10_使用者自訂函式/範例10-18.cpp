#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int landmine[8][8]={0,1,1,1,0,0,0,0,
                    0,1,-1,3,2,2,1,1,
                    1,2,3,-1,-1,2,-1,1,
                   -1,1,2,-1,3,2,1,1,
                    1,1,1,1,1,0,0,0,
                    0,0,0,0,1,1,1,0,
                    0,0,0,0,1,-1,2,1,
                    0,0,0,0,1,1,2,-1};
int guess[8][8]={0};
//�����C�Ӧ�m�O�_�q�L,0:���q�L 1:�q�L

int check[8][8]={0};
//�����C�Ӧ�m�O�_����1���ˬd. 0:��1��1:��2��

void display(int,int); //�ŧi��ܦa�p�C���ϧΦ�m��Ƥ��禡
int main()
 {
  int i,j,k;
  int row,col;//�n�q����m:�C,��

  //�e�X8*8���a�p�C���ϧ�
  cout << "\t��a�p�C��:\n" ;
  cout << "  | 0 1 2 3 4 5 6 7\n" ;
  cout << "--|----------------\n" ;
  k=0;
  for (i=0;i<8;i++)
   {
    cout <<setw(2) << k++ << "|" ;
    for (j=0;j<8;j++)
      cout << "��" ;
    cout << '\n' ;
   }  
  //�e�X8*8���a�p�C���ϧ�
 
  while (1)
   {
    cout << "��J�n�򪺦�mx,y(�H�ťչj�})(0<=x<=7,0<=y<=7):" ;
    cin >> row >> col ;
    if (!(row>=0 && row<=7 && col>=0 && col<=7))
     {
      cout << "��m���~,���s��J!\a\n" ;
      continue;
     }

    if (check[row][col]!=0)
     {
      cout << "��m(" << row<< ',' <<col
           << "�w�g�q�L�F,���s��J!\a\n" ;
      continue;
     }

    display(row,col); //���j�禡
   }
  system("pause");
  return 0;
 }

//�w�q��ܦa�p�C���ϧΦ�m��Ƥ��禡(���j�禡)
void display(int row,int col)
 {
  int i,j,k;
  guess[row][col]=1;
  check[row][col]++;
  //���I�쪺��m(row,col)���ȬO0��,�B����m�O��1���ˬd��
  //��ܨ�P�򪺸��
  if (landmine[row][col]==0 && check[row][col]==1)
   {
    //��ܦ�m(row,col)�k�䪺��m(row,col+1)����
    if (col+1<=7)
       display(row,col+1);

    //��ܦ�m(row,col)���䪺��m(row,col-1)����
    if (col-1>=0)
      display(row,col-1);

    //��ܦ�m(row,col)�W������m(row-1,col)����
    if (row-1>=0)
      display(row-1,col);

    //��ܦ�m(row,col)�U������m(row+1,col)����
    if (row+1<=7)
      display(row+1,col);

    //��ܦ�m(row,col)�k�W������m(row-1,col+1)����
    if (row-1>=0 && col+1<=7)
      display(row-1,col+1);

    //��ܦ�m(row,col)�k�U������m(row+1,col+1)����
    if (row+1<=7 && col+1<=7)
      display(row+1,col+1);

    //��ܦ�m(row,col)���W������m(row-1,col-1)����
    if (row-1>=0 && col-1>=0)
      display(row-1,col-1);

    //��ܦ�m(row,col)���U������m(row+1,col-1)����
    if (row+1<=7 && col-1>=0)
      display(row+1,col-1);
   }
   
  system("cls");
  //���e8*8���a�p�C����ƹϧ�
  cout << "\t��a�p�C��:\n" ;
  cout << "  | 0 1 2 3 4 5 6 7\n" ;
  cout << "--|----------------\n" ;
  k=0;
  for (i=0;i<8;i++)
   {   
    cout << setw(2) << k++ << "|" ;
    for (j=0;j<8;j++)
      if (guess[i][j]==1)
        if (landmine[i][j]==-1)
          cout << "* ";
        else
           cout << setw(2) << landmine[i][j] ;
      else
        if (landmine[i][j]==-1 && landmine[row][col]==-1)
            cout << "* " ;
        else
           cout << "��" ;
    printf("\n");
   }  
  //���e8*8���a�p�C����ƹϧ�
  

  //�ˬd��m(row,col)�O�_�O�a�p
  if (landmine[row][col]==-1)
   {
    cout << "�A���(" << row << ',' 
         << col << ")���a�p�F!\n";
    system("pause");
    exit(0);
   }
  else
   {
    //�ˬd�C�@�Ӥ��O�a�p����m,�Y���w�q�L,�h��ܹL��
    for (i=0;i<8;i++)
     {
      for (j=0;j<8;j++)
        if (landmine[i][j]!=-1 && guess[i][j]!=1)
          break;
      if (j<8)
        break;
     }

    //i=8,��ܨC�@�Ӥ��O�a�p����m,�Y���w�q�L
    if (i==8)
     {
      cout << "���ߧA�L���F!\n" ;
      system("pause");
      exit(0);
     }
   }
 }
