#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;
int main()
 {   
  char *poker_context[13]={"��","��","��","��","��","��","��",
              "��","��","10","��","��","��"};
  //�� poker_context[27]="�Ϣ���������������10�آߢ�";

  int poker[4][13];
  //poker[row][col],��ܦ�m(row,col)�Q�]�w�����J�P�N�X

  int all_four[13]={0};
  //all_four[i]=0,��ܼ��J�P���Xi���i�Ƭ�0

  int match[4][13]={0};
  //match[row][col]=0,��ܦ�m(row,col)�٨S�Q�t�令�\

  int row[2],col[2]; //��J��Ӧ�y�Ц�m(row,col)

  int number; //�O���üƲ��ͪ����J�P���X0~12
  //���J�P���X0~12,���O?�N��12345678910JQKA

  char *temp; //��ܦ�m(row,col)�����e
  int num=1; //��J����
  int bingo=0;
  //���J�P½�P�t�令�\1��,bingo��+1;bingo=26,�h�C������
  int i,j,k;
  srand((unsigned) time(NULL));
  for (i=0;i<4;i++)
   for (j=0;j<13;j++)
     {
      number=rand()%13;
      //all_four[number]<4�A��ܼ��J�P���Xnumber���i�Ƴ̦h4
      if (all_four[number]<4)
        {
         all_four[number]++;
         poker[i][j]=number;
        }
      else
         j--;
     }
   cout << "\t���J�P½�P�t��C��\n" ;

  //�e�X4*13�����J�P½�P�t��ϧ�
  cout << ' ';
  
  for (i=0;i<13;i++)
     cout << setw(2) << i;
   cout << '\n';

  k=0;
  for (i=0;i<4;i++)
   {
     cout << setw(2) << k++ ;
    for (j=0;j<13;j++)
       cout << "��" ;
     cout << '\n' ;
   }
  //�e�X4*13�����J�P½�P�t��ϧ�

  cout << "���J�P½�P�t��ݭn��ܨ�Ӧ�m:\n" ;
  while(1)
   {
    //�C�������Ӧ�m�e,���N��Ӧ�m�]���������A�k�s(�H-1���)
    row[0]=-1;
    col[0]=-1;
    row[1]=-1;
    col[1]=-1;    
    //�C�������Ӧ�m�e,���N��Ӧ�m�]���������A�k�s(�H-1���)
    
    for (num=0;num<2;num++)
     {
       cout << "��J��" << num+1 << "����ܪ���m(�H�ťծ�})" ;
       cout << "row,col(row=0-3 , col=0-12):" ;
      
      //��J�C�Φ檺��m,�H�ťծ�}      
      cin >> row[num] >> col[num] ; 
      
      if (!(row[num]>=0 && row[num]<=3 && col[num]>=0 && col[num]<=12))
       {
         cout << "�L(" << row[num] << ',' 
              << col[num] << ")��m,���s��J!\a\n";
        num--;
        continue;
       }

      if (match[row[num]][col[num]]!=0 || (row[0]==row[1] && col[0]==col[1]))
       {
        cout << "��m(" << row[num] << ',' 
             << col[num] << ")�w�g��J�F�ΰt�粒��,���s��J!\a\n" ;
        num--;
        continue;
       }

      system("cls");
      //�e�X4*13�����J�P½�P�t��ϧ�
       cout << "\t�������J�P½�P�t��C��\n" ;
       cout << ' ' ;
      for (i=0;i<13;i++)
         cout << setw(2) << i ;
       cout << '\n' ;

      k=0;
      for (i=0;i<4;i++)
       {
        cout << setw(2) << k++;
        for (j=0;j<13;j++)
          if (match[i][j]==0)
            if (i==row[num] && j==col[num] || i==row[0] && j==col[0])
             {
              temp=poker_context[poker[i][j]];              
              cout << temp;
             }
            else
              cout << "��" ;
          else
           {
            temp=poker_context[poker[i][j]];           
            cout << temp;
           }
          cout << '\n' ;
       }
     }  
    _sleep(1000); //�Ȱ�1��

    //��m(row[0],col[0])�P��m(row[1],col[1])���e�ۦP��
    if (poker[row[0]][col[0]]==poker[row[1]][col[1]])
     {
      match[row[0]][col[0]]=1; /*�]�w��m(row[0],col[0])�w�t�令�\*/
      match[row[1]][col[1]]=1; /*�]�w��m(row[1],col[1])�w�t�令�\*/
      bingo++;
     }

    system("cls");
    //�e�X4*13�����J�P½�P�t��ϧ�
     cout << "\t���J�P½�P�t��C��\n" ;
     cout << ' ';
    for (i=0;i<13;i++)
       cout << setw(2) << i ;
     cout << '\n';

    k=0;
    for (i=0;i<4;i++)
     {
      cout << setw(2) << k++ ;
      for (j=0;j<13;j++)
        if (match[i][j]==0)
           cout << "��" ;
        else
         {
          temp=poker_context[poker[i][j]];              
          cout << temp;
         }
        cout << '\n' ;
     }

     cout << "���J�P½�P�t��ݭn��ܨ�Ӧ�m:\n" ;
    //�e�X4*13�����J�P½�P�t��ϧ�
    if (bingo==26)
       break;
   }
   cout << "���J�P½�P�t��C������.\n" ;
    
  system("PAUSE");	
  return 0;
 }
