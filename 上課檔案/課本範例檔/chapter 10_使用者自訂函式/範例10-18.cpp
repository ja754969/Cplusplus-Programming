#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int landmine[8][8]={0,1,1,1,0,0,0,0,
                    0,1,-1,3,2,2,1,1,
                    1,2,3,-1,-1,2,-1,1,
                   -1,1,2,-1,3,2,1,1,
                    1,1,1,1,1,0,0,0,
                    0,0,0,0,1,1,1,0,
                    0,0,0,0,1,-1,2,1,
                    0,0,0,0,1,1,2,-1};
int guess[8][8]={0};
//紀錄每個位置是否猜過,0:未猜過 1:猜過

int check[8][8]={0};
//紀錄每個位置是否為第1次檢查. 0:第1次1:第2次

void display(int,int); //宣告顯示地雷遊戲圖形位置資料之函式
int main()
 {
  int i,j,k;
  int row,col;//要猜的位置:列,行

  //畫出8*8的地雷遊戲圖形
  cout << "\t踩地雷遊戲:\n" ;
  cout << "  | 0 1 2 3 4 5 6 7\n" ;
  cout << "--|----------------\n" ;
  k=0;
  for (i=0;i<8;i++)
   {
    cout <<setw(2) << k++ << "|" ;
    for (j=0;j<8;j++)
      cout << "■" ;
    cout << '\n' ;
   }  
  //畫出8*8的地雷遊戲圖形
 
  while (1)
   {
    cout << "輸入要踩的位置x,y(以空白隔開)(0<=x<=7,0<=y<=7):" ;
    cin >> row >> col ;
    if (!(row>=0 && row<=7 && col>=0 && col<=7))
     {
      cout << "位置錯誤,重新輸入!\a\n" ;
      continue;
     }

    if (check[row][col]!=0)
     {
      cout << "位置(" << row<< ',' <<col
           << "已經猜過了,重新輸入!\a\n" ;
      continue;
     }

    display(row,col); //遞迴函式
   }
  system("pause");
  return 0;
 }

//定義顯示地雷遊戲圖形位置資料之函式(遞迴函式)
void display(int row,int col)
 {
  int i,j,k;
  guess[row][col]=1;
  check[row][col]++;
  //當點到的位置(row,col)的值是0時,且此位置是第1次檢查時
  //顯示其周圍的資料
  if (landmine[row][col]==0 && check[row][col]==1)
   {
    //顯示位置(row,col)右邊的位置(row,col+1)的值
    if (col+1<=7)
       display(row,col+1);

    //顯示位置(row,col)左邊的位置(row,col-1)的值
    if (col-1>=0)
      display(row,col-1);

    //顯示位置(row,col)上面的位置(row-1,col)的值
    if (row-1>=0)
      display(row-1,col);

    //顯示位置(row,col)下面的位置(row+1,col)的值
    if (row+1<=7)
      display(row+1,col);

    //顯示位置(row,col)右上角的位置(row-1,col+1)的值
    if (row-1>=0 && col+1<=7)
      display(row-1,col+1);

    //顯示位置(row,col)右下角的位置(row+1,col+1)的值
    if (row+1<=7 && col+1<=7)
      display(row+1,col+1);

    //顯示位置(row,col)左上角的位置(row-1,col-1)的值
    if (row-1>=0 && col-1>=0)
      display(row-1,col-1);

    //顯示位置(row,col)左下角的位置(row+1,col-1)的值
    if (row+1<=7 && col-1>=0)
      display(row+1,col-1);
   }
   
  system("cls");
  //重畫8*8的地雷遊戲資料圖形
  cout << "\t踩地雷遊戲:\n" ;
  cout << "  | 0 1 2 3 4 5 6 7\n" ;
  cout << "--|----------------\n" ;
  k=0;
  for (i=0;i<8;i++)
   {   
    cout << setw(2) << k++ << "|" ;
    for (j=0;j<8;j++)
      if (guess[i][j]==1)
        if (landmine[i][j]==-1)
          cout << "* ";
        else
           cout << setw(2) << landmine[i][j] ;
      else
        if (landmine[i][j]==-1 && landmine[row][col]==-1)
            cout << "* " ;
        else
           cout << "■" ;
    printf("\n");
   }  
  //重畫8*8的地雷遊戲資料圖形
  

  //檢查位置(row,col)是否是地雷
  if (landmine[row][col]==-1)
   {
    cout << "你踩到(" << row << ',' 
         << col << ")的地雷了!\n";
    system("pause");
    exit(0);
   }
  else
   {
    //檢查每一個不是地雷的位置,若都已猜過,則表示過關
    for (i=0;i<8;i++)
     {
      for (j=0;j<8;j++)
        if (landmine[i][j]!=-1 && guess[i][j]!=1)
          break;
      if (j<8)
        break;
     }

    //i=8,表示每一個不是地雷的位置,若都已猜過
    if (i==8)
     {
      cout << "恭喜你過關了!\n" ;
      system("pause");
      exit(0);
     }
   }
 }
