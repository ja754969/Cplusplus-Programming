#include <iostream>
#include <cstdlib>
using namespace std ;

class matrix
 {         
  public: 
    int row,column;
    int **element ;    
    matrix(int m,int n)
     {
      row=m ;
      column=n ;
      
      //�ʺA�t�mmxn���G���}�Celement���O����
      element = new int *[m];
      int i;
      for (i=0 ; i<m ; i++)
         element[i] = new int [n];
      //�ʺA�t�mnxn���G���}�Celement���O����  
     }
    
    matrix(char name,int m,int n)
     {
      row=m ;
      column=n ;
      
      //�ʺA�t�mmxn���G���}�Celement���O����
      element = new int *[m];
      int i;
      for (i=0 ; i<m ; i++)
         element[i] = new int [n];
      //�ʺA�t�mmxn���G���}�Celement���O����  
      
      int j;  
      cout << "��J�@" << m << 'x' << n << "�x�}" << name << endl ; 
      for (i=0;i<m;i++)       
        for (j=0;j<n;j++)
         {
          cout << name <<'['<< i << "][" 
               << j << "]=" ;
          cin >> element[i][j] ;
         }
     }
    
    //�^���ʺA�t�m���O����
    void deletematrix(int m)
     {  
      int i ;
  
      //�^���ʺA�t�m���G���}�Celement���O����   
      for (i=0 ; i<m ; i++)   //�^���ĤG���}�C�Ŷ�
        delete [] element[i];  
      delete [] element;        //�^���Ĥ@���}�C�Ŷ�
      element=NULL;
      //�^���ʺA�t�m���G���}�Celement���O����      
     }
     
    //�w�q�x�}��*(��)�B��l�A�B�z���ۭ����D�C
    matrix operator *(class matrix &x)
     {        
      int i,j,k;
      class matrix temp(this->row,x.column) ;
      for (i=0;i<this->row;i++)
        for (j=0;j<x.column;j++)
          { 
           temp.element[i][j]=0 ;
           for (k=0;k<this->column;k++)  //�C�C��2�Ӹ��(��2����)
             temp.element[i][j]+=this->element[i][k]*x.element[k][j] ;     
          }
      return temp ;
     }
 } ; 

int main()
 {  
  int i,j,row1,column1,row2,column2;
  cout << "����*(��)�B��l���h���b�x�}�ۭ��W:\n" ;
  cout << "��J�x�}A���C��(row):" ;
  cin >> row1 ;
  cout << "��J�x�}A�����(column):" ;
  cin >> column1 ;
  class matrix a('A',row1,column1) ;
  
  while (1)
   {
    cout << "��J�x�}B���C��(row):" ;
    cin >> row2 ;
    cout << "��J�x�}B�����(column):" ;
    cin >> column2 ;
    if (column1 != row2 )
      cout << "�ѩ�x�}A����Ƥ�����x�}B���C��,�]���L�k�ۭ�.\n"  ;
    else
       break;
   }
    
  class matrix b('B',row2,column2) ;  
  class matrix c(row1,column2) ;
    
  c=a*b ; //�x�}A*�x�}B
  
  cout << "�x�}A*�x�}B=\n" ;
  for (i=0;i<row1;i++)
   {    
     for (j=0;j<column2;j++)  
       cout << c.element[i][j]<< '\t' ;          
    cout << endl ;
   }
   
   a.deletematrix(row1);
   //�^���ʺA�t�m���G���}�Ca.element ���O����   
   
   b.deletematrix(row2);
   //�^���ʺA�t�m���G���}�Cb.element ���O����   
   
   c.deletematrix(row1);
   //�^���ʺA�t�m���G���}�Cc.element ���O����   
   
  system("pause") ;
  return 0;
 }
