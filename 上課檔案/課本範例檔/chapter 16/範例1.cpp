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
      //動態配置mxn的二維陣列element之記憶體        
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
    
    //定義矩陣的-(負號)前置運算子
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
  cout << "應用-(負號)前置運算子的多載在矩陣的每一個元素上:\n" ;
  cout << "輸入矩陣A的列數(row):" ;
  cin >> row ;
  cout << "輸入矩陣A的行數(column):" ;
  cin >> column ;
  class matrix a('A',row,column) ;
  class matrix b(row,column) ;
   
  b=-a ;  
  cout << "矩陣A的負矩陣(-A):\n" ;
  for (i=0;i<row;i++)
   {    
     for (j=0;j<column;j++)  
       cout << b.element[i][j]<< '\t' ;
          
    cout << endl ;
   }
   a.deletematrix(row);
   //回收動態配置的二維陣列a.element之記憶體   
  
   b.deletematrix(row);   
  //回收動態配置的二維陣列b.element 之記憶體   
   
  system("pause") ;
  return 0;
 }
