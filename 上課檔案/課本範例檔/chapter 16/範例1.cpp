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
      //�ʺA�t�mmxn���G���}�Celement���O����        
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
    
    //�w�q�x�}��-(�t��)�e�m�B��l
    matrix operator -( )
     {        
      int i,j;
      class matrix temp(row,column) ;
      for (i=0;i<row;i++)
        for (j=0;j<column;j++)
           temp.element[i][j]=-this->element[i][j] ;     
         
      return temp ;
     }
 } ;
 
int main()
 {
  int i,j,row,column;
  cout << "����-(�t��)�e�m�B��l���h���b�x�}���C�@�Ӥ����W:\n" ;
  cout << "��J�x�}A���C��(row):" ;
  cin >> row ;
  cout << "��J�x�}A�����(column):" ;
  cin >> column ;
  class matrix a('A',row,column) ;
  class matrix b(row,column) ;
   
  b=-a ;  
  cout << "�x�}A���t�x�}(-A):\n" ;
  for (i=0;i<row;i++)
   {    
     for (j=0;j<column;j++)  
       cout << b.element[i][j]<< '\t' ;
          
    cout << endl ;
   }
   a.deletematrix(row);
   //�^���ʺA�t�m���G���}�Ca.element���O����   
  
   b.deletematrix(row);   
  //�^���ʺA�t�m���G���}�Cb.element ���O����   
   
  system("pause") ;
  return 0;
 }
