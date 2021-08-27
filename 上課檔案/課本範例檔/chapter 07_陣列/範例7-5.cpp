#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int data[7]={7,5,12,16,26,71,58};
  int i,num;
  cout << "輸入搜尋的資料:" ;
  cin >> num ;
  for (i=0;i<7;i++)
    if (num==data[i])
      {
       cout << num <<"位於資料中的第" 
            << i+1 << "個位置\n" ;
       break;
      }

 //如果搜尋的資料不在資料中,最後for迴圈的i=7
  if (i==7)
    cout << num << "不在資料中\n" ;

  system("PAUSE");	
  return 0;
 }
