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
      
      //動態配置mxn的二維陣列element之記憶體
      element = new int *[m];
      int i;
      for (i=0 ; i<m ; i++)
         element[i] = new int [n];
      //動態配置nxn的二維陣列element之記憶體  
     }
    
    matrix(char name,int m,int n)
     {
      row=m ;
      column=n ;
      
      //動態配置mxn的二維陣列element之記憶體
      element = new int *[m];
      int i;
      for (i=0 ; i<m ; i++)
         element[i] = new int [n];
      //動態配置mxn的二維陣列element之記憶體  
      
      int j;  
      cout << "輸入一" << m << 'x' << n << "矩陣" << name << endl ; 
      for (i=0;i<m;i++)       
        for (j=0;j<n;j++)
         {
          cout << name <<'['<< i << "][" 
               << j << "]=" ;
          cin >> element[i][j] ;
         }
     }
    
    //回收動態配置的記憶體
    void deletematrix(int m)
     {  
      int i ;
  
      //回收動態配置的二維陣列element之記憶體   
      for (i=0 ; i<m ; i++)   //回收第二維陣列空間
        delete [] element[i];  
      delete [] element;        //回收第一維陣列空間
      element=NULL;
      //回收動態配置的二維陣列element之記憶體      
     }
     
    //定義矩陣的*(號)運算子，處理的相乘問題。
    matrix operator *(class matrix &x)
     {        
      int i,j,k;
      class matrix temp(this->row,x.column) ;
      for (i=0;i<this->row;i++)
        for (j=0;j<x.column;j++)
          { 
           temp.element[i][j]=0 ;
           for (k=0;k<this->column;k++)  //每列有2個資料(或2行資料)
             temp.element[i][j]+=this->element[i][k]*x.element[k][j] ;     
          }
      return temp ;
     }
 } ; 

int main()
 {  
  int i,j,row1,column1,row2,column2;
  cout << "應用*(號)運算子的多載在矩陣相乘上:\n" ;
  cout << "輸入矩陣A的列數(row):" ;
  cin >> row1 ;
  cout << "輸入矩陣A的行數(column):" ;
  cin >> column1 ;
  class matrix a('A',row1,column1) ;
  
  while (1)
   {
    cout << "輸入矩陣B的列數(row):" ;
    cin >> row2 ;
    cout << "輸入矩陣B的行數(column):" ;
    cin >> column2 ;
    if (column1 != row2 )
      cout << "由於矩陣A的行數不等於矩陣B的列數,因此無法相乘.\n"  ;
    else
       break;
   }
    
  class matrix b('B',row2,column2) ;  
  class matrix c(row1,column2) ;
    
  c=a*b ; //矩陣A*矩陣B
  
  cout << "矩陣A*矩陣B=\n" ;
  for (i=0;i<row1;i++)
   {    
     for (j=0;j<column2;j++)  
       cout << c.element[i][j]<< '\t' ;          
    cout << endl ;
   }
   
   a.deletematrix(row1);
   //回收動態配置的二維陣列a.element 之記憶體   
   
   b.deletematrix(row2);
   //回收動態配置的二維陣列b.element 之記憶體   
   
   c.deletematrix(row1);
   //回收動態配置的二維陣列c.element 之記憶體   
   
  system("pause") ;
  return 0;
 }
