#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
 {  
  char pic[2]={'O','X'};
  int pos[3][3]={{-1,-1,-1},{-1,-1,-1},{-1,-1,-1}};
  //#���ϧΪ���Ƥ��e,-1��ܥثe�L�S����

  int row,col; //��J�y��
  int num=1; //��J����
  int i,j,k;
  int over=0;
  cout << "����#�C��\n";

  //�e�X3*3��#���ϧ�
  cout << " 0 1 2\n" ;
  cout << "0 | |" ;
  cout << '\n' ;
  cout << " -----" ;
  cout << '\n' ;
  cout << "1 | |" ;
  cout << '\n' ;
  cout << " -----" ;
  cout << '\n' ;
  cout << "2 | |" ;
  cout << '\n' ;
  //�e�X3*3��#���ϧ�

  while (1)
   {
    for (i=0;i<2;i++)
     {
      cout << "��1�ӤH�HO���O���A��2�ӤH�HX���O��\n";
      cout << "��" << i+1 << "�ӤH���" << pic[i] << "��";
      cout << "��m�C(row),��(col)(�H�ťչj�})(row=0,1��2 col=0,1,��2):";

      //2:��ܿ�J��ӲŦX�榡�����
      cin >> row >> col ;      

      if (!(row>=0 && row<=2 && col>=0 && col<=2))
       {
        cout << "�L(" << row << ',' << col <<")��m,���s��J!\a\n" ;
        i--;
        continue;
       }
 
      if (pos[row][col]!=-1)
       {
        cout << "��m("<< row << ',' << col << ")�w�g���Ѥl�F,���s��J!\a\n" ;
        i--;
        continue;
       }
      pos[row][col]=i;

      system("cls");
      //�C�U�L�@��,���s�e�X3*3 #���ϧΤ�����T
      cout << "����#�C��\n" ;
      cout << " 0 1 2\n" ;
      for (j=0;j<5;j++)
       {                    
        if (j%2==0)
          cout << j/2;           
        else
          cout << ' ';

        for (k=0;k<5;k++)
         {
          if (j%2==0 && k%2==0) //��O,X��ƪ���m
           {
            if (pos[j/2][k/2]!=-1) //��1,3,5�C��O,X ���
              cout << pic[pos[j/2][k/2]] ;
            else
              cout << ' ';
           }
          else if (j%2!=0) //��2,4�C
            cout << '-' ;
          else if (k%2!=0) //��2,4��
            cout << "|" ;
         }
        cout << '\n' ;
        //�C�U�L�@��,���s�e�X3*3 #���ϧΤ�����T
       }

      //�P�_�P�@�C��O,X ��ƬO�_�ۦP
      for (row=0;row<3;row++)
        if (pos[row][0]!=-1)
          if (pos[row][0]==pos[row][1] && pos[row][1]==pos[row][2])
           {
            cout << "��" << pos[row][0]+1 <<"�ӤHĹ�F\n" ;
            over=1;
            break;
           }
      if (over==1)
        break;

      //�P�_�P�@�檺O,X ��ƬO�_�ۦP
      for (col=0;col<3;col++)
        if (pos[0][col]!=-1)
          if (pos[0][col]==pos[1][col] && pos[1][col]==pos[2][col])
           {
            cout << "��" << pos[0][col]+1 << "�ӤHĹ�F\n" ;
            over=1;
            break;
           }
      if (over==1)
        break;
  
      //�P�_���﨤�u��O,X ��ƬO�_�ۦP
      if (pos[0][0]!=-1)
        if (pos[0][0]==pos[1][1] && pos[1][1]==pos[2][2])
         {
          cout << "��" << pos[0][0]+1 << "�ӤHĹ�F\n" ;
          over=1;
          break;
         }

      //�P�_�k�﨤�u��O,X ��ƬO�_�ۦP
      if (pos[0][2]!=-1)
        if (pos[0][2]==pos[1][1] && pos[1][1]==pos[2][0])
          {
           cout << "��" << pos[0][2]+1 << "�ӤHĹ�F\n" ;
           over=1;
           break;
          }
      num++;
  
      //�P�_�O�_�w��J9��
      if (num==10)
       {
        cout << "����\n" ;
        over=1;
        break;
       }
     }
    if (over==1)
       break;
   }
  system("PAUSE");	
  return 0;
 }
