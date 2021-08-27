#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int data[7]={5,7,12,16,26,58,71};
  int num;
  int left,right,middle;
  cout << "輸入搜尋的資料:" ;
  cin >> num ;
  left=0;
  right=6;

  //左邊資料位置<=右邊資料位置，表示有資料才能搜尋
  while (left<=right)
   {
    middle=(left+right)/2; //目前資料中的中間位置
    if (num==data[middle]) //搜尋資料=中間元素
       break;
    else if (num > data[middle])
       left= middle+1; //左邊資料位置=資料中間位置+1
    else
       right=middle-1; //右邊資料位置=資料中間位置-1
   }
  if (left<=right) //左邊資料位置<=右邊資料位置，表示有搜尋到資料
    cout << num << "位於資料中的第"
         << middle+1 << "個位置\n" ; 
  else
    cout << num << "不在資料中\n" ;

  system("PAUSE");	
  return 0;
 }
