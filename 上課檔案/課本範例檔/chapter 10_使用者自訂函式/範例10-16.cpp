#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
using namespace std;

int gobang[25][25]={0}; //
//���l��. �����C�Ӧ�m�O�_�U�L�Ѥl.
//0:�|���U�L�Ѥl 1:��ܥҤU���Ѥl 2:��ܤA�U���Ѥl

//�ŧi�ˬd�O�_�T�l�s�u�A�|�l�s�u�Τ��l�s�u���禡
void check_bingo(int,int); 

int who=1; //���:��ܽ���ҤU�� ����:��ܽ���A�U��
int main()
 {
  int i,j,k;
  int row,col;//�C,��:��ܴѤl�n�U����m
  
  //�Y���������l�s�u���e�A�C������i��
  while (1)
   {
    system("cls"); //�M���ù��e��
    cout << "\t\t\t��H���l�� �C��:\n" ;
  
    //�C�U�L�@�Ѥl,���s�e�X25*25���ѽL������T
    cout << "  | " ;
    for (i=0;i<=24;i++)
      cout << setw(2) << i;
    cout << '\n' ;
    cout << "--|-" ;
    for (i=0;i<=24;i++)
      cout << "--" ;
    cout << '\n' ;
    k=0;
    for (i=0;i<=24;i++)
     {
      cout << setw(2) << k++ <<"| " ;
      for (j=0;j<=24;j++)
        if (gobang[i][j]==0)
          cout << "��" ;
        else if (gobang[i][j]==1)
          cout << "��" ;
        else
          cout << "��" ;
      cout << '\n';
     }     
    if (who%2==1)
      cout << "��:" ;
    else
      cout << "�A:" ;

    cout << "��J�Ѥl����mrow,col(�H�ťչj�})(0<=row<=24,0<=col<=24):" ;    
    cin >> row >> col ;     
    if (!(row>=0 && row<=24 && col>=0 && col<=24))
     {
      cout << "��m���~,���s��J!\a\n" ;
      continue;
     }
    if (gobang[row][col]!=0)
     {      
      cout << "��m(" << row<< ',' <<col
           << "�w�g���Ѥl�F,���s��J!\a\n" ;
      continue;
     }

    check_bingo(row,col);
    who++;
   }
  system("pause");
  return 0;
 }

//�w�q�ˬd�O�_�T�l�s�u�A�|�l�s�u�Τ��l�s�u���禡
void check_bingo(int row,int col)
 {
  int i,j,k;
  int score=0; //�֭p�̦h5�Ӧ�m�O�_���P�@�H�ҤU���Ѥl
  //score=10 �A:���l�s�u , score=5 ��:���l�s�u
  //score=8 �A:�|�l�s�u , score=4 ��:�|�l�s�u
  //score=6 �A:�T�l�s�u , score=3 ��:�T�l�s�u

  int count=0; //����:�w�֭p�h�֭ӬۦP���Ѥl(�̦h5��)
  int case_message=-1; //�T������,-1��ܨS���F��wĵ

  //��Ĥ@���I��(row,col)��m��,�~�P�_�O�_�T�l�s�u�A�|�l�s�u�Τ��l�s�u
  if (gobang[row][col]==0)
   {
    if (who%2==1) //���:��ܥҤU�� ����:��ܤA�U��
      gobang[row][col]=1; //1:�Ҫ���
    else
      gobang[row][col]=2; //2:�A����

    //�֭p����Υk��s��ۦP���Ѥl�@���h�֭�
    count=0;
    score=0;
    //score:����m(row,col)������֭p�̦h5�Ӧ�m
    for (i=0;i<=4 && col-i>=0;i++)
      if (gobang[row][col-i]!=0 && gobang[row][col-i]==gobang[row][col])
        score=score+gobang[row][col-i];
      else
        break;

    //score:����m(row,col)���k��֭p�̦h4�Ӧ�m
    if (count<5)
      for (i=1;i<=4 && col+i<=24 && count<5;i++)
        if (gobang[row][col+i]!=0 && gobang[row][col+i]==gobang[row][col])
         {
          score=score+gobang[row][col+i];
          count++;
         }
        else
          break;
    //�֭p����Υk��s��ۦP���Ѥl�@���h�֭�
    
    if (score%10==0)
      case_message=1; //�A:���l�s�u
    else if (score%5==0)
      case_message=2; //��:���l�s�u
    else if (score%8==0)
      case_message=3; //�A:�|�l�s�u
    else if (score%4==0 && who%2==1)
      case_message=4; //��:�|�l�s�u
    else if (score%6==0)
      case_message=5; //�A:�T�l�s�u
    else if (score%3==0 && who%2==1)
      case_message=6; //��:�T�l�s�u

    if (!(case_message==1 || case_message==2))
     {
      //�֭p�W��ΤU��s��ۦP���Ѥl�@���h�֭�
      count=0;
      score=0;
      //score:����m(row,col)���W��֭p�̦h5�Ӧ�m
      for (i=0;i<=4 && row-i>=0;i++)
        if (gobang[row-i][col]!=0 && gobang[row-i][col]==gobang[row][col])
         {
          score=score+gobang[row-i][col];
          count++;
         }
        else
          break;

      //score:����m(row,col)���U��֭p�̦h4�Ӧ�m
      if (count<5)
        for (i=1;i<=4 && row+i<=24 && count<5;i++)
          if (gobang[row+i][col]!=0 && gobang[row+i][col]==gobang[row][col])
           {
            score=score+gobang[row+i][col];
            count++;
           }
          else
            break;
      //�֭p�W��ΤU��s��ۦP���Ѥl�@���h�֭�
      
      if (score%10==0)
        case_message=1; //�A:���l�s�u
      else if (score%5==0)
        case_message=2; //��:���l�s�u
      else if (score%8==0)
        case_message=3; //�A:�|�l�s�u
      else if (score%4==0 && who%2==1)
        case_message=4; //��:�|�l�s�u
      else if (score%6==0)
        case_message=5; //�A:�T�l�s�u
      else if (score%3==0 && who%2==1)
        case_message=6; //��:�T�l�s�u
 
      if (!(case_message==1 || case_message==2))
       {
        //�֭p���W��P�k�U��s��ۦP���Ѥl�@���h�֭�
        count=0;
        score=0;
        //score:����m(row,col)�����W��֭p�̦h5�Ӧ�m
        for (i=0;i<=4 && row-i>=0 && col-i>=0;i++)
          if (gobang[row-i][col-i]!=0 && gobang[row-i][col-i]==gobang[row][col])
            score=score+gobang[row-i][col-i];
          else
            break;

        //score:����m(row,col)���k�U��֭p�̦h4�Ӧ�m
        if (count<5)
          for (i=1;i<=4 && row+i<=24 && col+i<=24 && count<5;i++)
            if (gobang[row+i][col+i]!=0 && 
               gobang[row+i][col+i]==gobang[row][col])
              {
               score=score+gobang[row+i][col+i];
               count++;
              }
            else
               break;        
        //�֭p���W��P�k�U��s��ۦP���Ѥl�@���h�֭�
        
        if (score%10==0)
           case_message=1; //�A:���l�s�u
        else if (score%5==0)
           case_message=2; //��:���l�s�u
        else if (score%8==0)
           case_message=3; //�A:�|�l�s�u
        else if (score%4==0 && who%2==1)
           case_message=4; //��:�|�l�s�u
        else if (score%6==0)
           case_message=5; //�A:�T�l�s�u
        else if (score%3==0 && who%2==1)
           case_message=6; //��:�T�l�s�u

        if (!(case_message==1 || case_message==2))
         {
          //�֭p�k�W��P���U��s��ۦP���Ѥl�@���h�֭�
          count=0;
          score=0;
          //score:����m(row,col)���k�W��֭p�̦h5�Ӧ�m
          for (i=0;i<=4 && row-i>=0 && col+i<=24;i++)
             if (gobang[row-i][col+i]!=0 && gobang[row-i][col+i]==gobang[row][col])
               score=score+gobang[row-i][col+i];
             else
               break;

          //score:����m(row,col)�����U��֭p�̦h4�Ӧ�m
          if (count<5)
            for (i=1;i<=4 && row+i<=24 && col-i>=0 && count<5;i++)
              if (gobang[row+i][col-i]!=0 && 
                  gobang[row+i][col-i]==gobang[row][col])
                {
                 score=score+gobang[row+i][col-i];
                 count++;
                }
               else
                 break;      
          //�֭p�k�W��P���U��s��ۦP���Ѥl�@���h�֭�
          
          if (score%10==0)
             case_message=1; //�A:���l�s�u
          else if (score%5==0)
             case_message=2; //��:���l�s�u
          else if (score%8==0)
             case_message=3; //�A:�|�l�s�u
          else if (score%4==0 && who%2==1)
             case_message=4; //��:�|�l�s�u
          else if (score%6==0)
             case_message=5; //�A:�T�l�s�u
          else if (score%3==0 && who%2==1)
             case_message=6; //��:�T�l�s�u
         }
       }
     }
   }    

  switch(case_message)
   {
    case 1:
      cout << "�A:���l�s�u,�C������.\a\n" ; //�ͤ@�n����
      getch();
      exit(0);
      break;
    case 2:
      cout << "��:���l�s�u,�C������.\a\n" ; //�ͤ@�n����
      system("pasue");
      exit(0);
      break;
    case 3:
      cout << "�A:�|�l�s�u\a\n" ; //�ͤ@�n����
      break;
    case 4:
      cout << "��:�|�l�s�u\a\n" ; //�ͤ@�n����
      break;
    case 5:
      cout << "�A:�T�l�s�u\a\n" ; //�ͤ@�n����
      break;
    case 6:
      cout << "��:�T�l�s�u\a\n" ; //�ͤ@�n����
  }
 }    

