#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int data[5]={12,6,26,1,58};
  int i,j;
  int temp;
  cout << "排序前的資料:" ;
  for (i=0;i<5;i++)
    cout << data[i] << ' ' ;
  cout << '\n' ;

  for (i=1;i<=4;i++) //執行4(=5-1)個步驟
    for (j=0;j<5-i;j++)//第i步驟，執行5-i次比較
      if (data[j]>data[j+1]) //左邊的資料>右邊的資料
        {//將data[j]，data[j+1]的內容互換
         temp=data[j];
         data[j]=data[j+1]; 
         data[j+1]=temp;
        }

  cout << "排序後的資料:" ;
  for (i=0;i<5;i++)
   cout << data[i] << ' ' ;
  cout << '\n' ;
   
  system("PAUSE");	
  return 0;
 }
