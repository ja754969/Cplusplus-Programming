#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
void totalmoney(int *,int,int,int); //宣告函式
int main()
 {
  int money[2][3][2],i,j,k;
  string interval[2]={"上","下"}; 

  for (i=0;i<2;i++)
    for (j=0;j<3;j++)
      for (k=0;k<2;k++)
       {
        cout << "輸入第" << i+1<<"家分公司第" 
             << j+1 << "年" << interval[k]
             << "半年的營業額(單位:億):" ;
        cin >> money[i][j][k] ;
       }
   totalmoney(&money[0][0][0],2,3,2);


  system("pause");
  return 0;
 }

void totalmoney(int *d , int l , int m , int n) //定義函式
 {
  int i,j,k,sum=0;
  for (i=0;i<l;i++)
    for (j=0;j<m;j++)
      for (k=0;k<n;k++)
        sum=sum+*(d+i*m*n+j*n+k);
        // *(d+i*m*n+j*n+k) 代表 money[i][j][k]

  cout << "總營業額(單位:億):" << sum << '\n' ;
 }
    
