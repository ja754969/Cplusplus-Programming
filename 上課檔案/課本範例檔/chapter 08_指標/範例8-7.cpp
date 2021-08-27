#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  char *name[3]={"謝遜" , "張無忌" , "張三丰"};
  int i,j;
  char *temp;
  cout << "排序前的資料:";
  for (i=0;i<3;i++)
    cout << name[i] << ' ';
  cout << "\n";

  for (i=1;i<=2;i++) //執行2(=3-1)個步驟
    for (j=0;j<3-i;j++)//第i步驟,執行3-i次比較       
     if ((string)name[j] > (string)name[j+1]) //左邊的資料比較大
      {
       temp=name[j]; //將name[j]與name[j+1]
       name[j]= name[j+1]; //所指向的字串互換
       name[j+1]=temp;
      }

  cout << "排序後的資料:";
  for (i=0;i<3;i++)
     cout << name[i] << ' ';
  cout << "\n";
   
  system("PAUSE");	
  return 0;
 }
