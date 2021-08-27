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
        
    //�w�q�x�}��+(��)�B��l
    matrix operator +(class matrix &x)
     {        
      int i,j,k;
      class matrix temp(this->row,this->column) ;
      for (i=0;i<this->row;i++)
        for (j=0;j<this->column;j++)
          { 
           temp.element[i][j]= this->element[i][j]+x.element[i][j] ;      
          }
      return temp ;
     }
    
 } ;
 
int main()
 {
  int i,j,row,column;
  cout << "����+(�[��)�B��l���h���b�x�}�ۥ[�W:\n" ;
  cout << "��J�x�}A���C��(row):" ;
  cin >> row ;
  cout << "��J�x�}A�����(column):" ;
  cin >> column ;
  class matrix a('A',row,column) ;
  class matrix b('B',row,column) ;
  class matrix c(row,column) ;
  c=a+b ; //�x�}A+�x�}B
  
  cout << "�x�}A+�x�}B=\n" ;  
  for (i=0;i<row;i++)
   {    
    for (j=0;j<column;j++)  
       cout << c.element[i][j]<< '\t' ;          
    cout << endl ;
   }
   
   a.deletematrix(row);
   //�^���ʺA�t�m���G���}�Ca.element���O����   
  
   b.deletematrix(row);   
   //�^���ʺA�t�m���G���}�Cb.element ���O����   
   
   c.deletematrix(row);   
   //�^���ʺA�t�m���G���}�Cc.element ���O����   
   
  system("pause") ;
  return 0;
 }
