#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <ctime>
using namespace std;

//紀錄每個位置(row,col)是否為蛇的一部份,還是食物
//0:位置(row,col)是空的 1:位置(row,col)是蛇的一部份
//2:位置(row,col)是食物
//Θ:蛇頭 ▄:蛇身 ●:食物

int position[25][25]={0};
//紀錄蛇的每一部份位置(row,col)
//蛇最常625節(=25*25,含頭部份)

int snake_body[625][2];

//宣告重畫25*25資訊圖之函式
void print_graphy(void);

//宣告蛇往上移動之函式
void up(int *,int *,int *,int *,int *);

//宣告蛇往下移動之函式
void down(int *,int *,int *,int *,int *);

//宣告蛇往左移動之函式
void left(int *,int *,int *,int *,int *);

//宣告蛇往右移動之函式
void right(int *,int *,int *,int *,int *);

//宣告產生食物位置之函式
void generate_food(int *,int *,int *);

int main()
 {
  int i,j,k;
  int snake_head_row,snake_head_col;//蛇頭位置(列,行)

  //記錄蛇的每一部份的位置
  //snake_body[i][0];記錄蛇的2第i部份的row位置
  //snake_body[i][1];記錄蛇的2第i部份的col位置
  
  int len;  //蛇長
  int food_row,food_col; //食物位置(列,行)
  char move_direction; //蛇移動方向

  //設定每一位置值為-1,表示無蛇的狀態
  for (i=0;i<625;i++)
    for (j=0;j<2;j++)
      snake_body[i][j]=-1;

  srand((unsigned)time(NULL));

  snake_head_row=rand()%25;
  snake_head_col=rand()%25;

  //蛇的起始位置只有蛇頭
  position[snake_head_row][snake_head_col]=1;
  snake_body[0][0]=snake_head_row; //蛇頭的row位置
  snake_body[0][1]=snake_head_col; //蛇頭的col位置
  len=1;

  //產生食物位置
  generate_food(&len,&food_row,&food_col);

  //畫25*25資訊圖
  print_graphy();

  while (1)
   {
    move_direction=getch();
    if (move_direction!=0)
     {
      switch (move_direction)
       {
        case 72: //按 ↑
          up(&len,&snake_head_row,&snake_head_col,&food_row,&food_col);
          break;
        case 80: //按 ↓
          down(&len,&snake_head_row,&snake_head_col,&food_row,&food_col);
          break;
        case 75: //按 ←
          left(&len,&snake_head_row,&snake_head_col,&food_row,&food_col);
          break;
        case 77: //按 →
          right(&len,&snake_head_row,&snake_head_col,&food_row,&food_col);
       }
      print_graphy();

      //判斷是否是否走錯方向
      //只要蛇頭撞到蛇身,即蛇頭與蛇的某一節身體有相同的位置
      //代表走錯方向,遊戲結束
      for (i=1;i<len;i++)
        if (snake_body[i][0]==snake_body[0][0] && 
            snake_body[i][1]==snake_body[0][1])
          {
           cout << "走錯方向,遊戲結束.\n" ;
           break;
          }
        if (i<len)
          break;
     }
   }
  system("pause");
  return 0;
 }

//定義重畫25*25資訊圖之函式
void print_graphy(void)
 {
  int i,j,k;
  system("cls"); //清除螢幕畫面
  cout << "貪食蛇遊戲(按↑,↓,←,→移動,只要蛇頭撞到蛇身,遊戲結束)\n" ;
  k=0;
  for (i=0;i<=24;i++)
   {
    for (j=0;j<=24;j++)
      if (position[i][j]==1)
        if (snake_body[0][0]==i && snake_body[0][1]==j)
          cout << "Θ" ;
        else
          cout << "▓" ;
      else if (position[i][j]==2)
        cout << "●" ;
      else
        cout << "  " ;
    
    cout << '\n' ;
   }
 }

//定義蛇往上移動之函式
void up(int *len, int *snake_head_row,
        int *snake_head_col,int *food_row, int *food_col)
 {
  int i;
  if (snake_body[0][0]>=1)
   {
    if (snake_body[0][0]-1==*food_row && snake_body[0][1]==*food_col)
     {
      //吃到食物,蛇的長度+1
      (*len)++;

      //重新設定蛇每一節的位置
      for (i=*len-1;i>=1;i--)
       {
        snake_body[i][0]=snake_body[i-1][0];
        snake_body[i][1]=snake_body[i-1][1];
       }

      //重設新的蛇頭位置
      *snake_head_row=*food_row;
      position[*snake_head_row][*snake_head_col]=1;

      //重設蛇頭的row位置,蛇頭的col位置沒變
      snake_body[0][0]=*snake_head_row;

      //產生新的食物位置
      generate_food(len,food_row,food_col);
     }
    else
     {
      //設定蛇尾位置值為-1,表示去掉蛇尾,即蛇的最後一節
      position[snake_body[*len-1][0]][snake_body[*len-1][1]]=0;
      //snake_body[*len-1][0]=-1;
      //snake_body[*len-1][1]=-1;
      //設定蛇尾位置值為-1,表示去掉蛇尾,即蛇的最後一節

      //將蛇的位置值往上移
      for (i=*len-1;i>=1;i--)
       {
        snake_body[i][0]=snake_body[i-1][0];
        snake_body[i][1]=snake_body[i-1][1];
       }
      //將蛇的位置值往上移

      //重設蛇頭的位置
      (*snake_head_row)--;
      snake_body[0][0]=*snake_head_row;
      snake_body[0][1]=*snake_head_col;
      position[*snake_head_row][*snake_head_col]=1;
      //重設蛇頭的位置
     }
   }
 }

//定義蛇往下移動之函式
void down(int *len, int *snake_head_row,
          int *snake_head_col,int *food_row,int *food_col)
 {
  int i;
  if (snake_body[0][0]<=23)
   {
    if (snake_body[0][0]+1==*food_row && snake_body[0][1]==*food_col)
     {
      //吃到食物,蛇的長度+1  
      (*len)++;

      //重新設定蛇每一節的位置
      for (i=*len-1;i>=1;i--)
       {
        snake_body[i][0]=snake_body[i-1][0];
        snake_body[i][1]=snake_body[i-1][1];
       }

      //重設新的蛇頭位置
      *snake_head_row=*food_row;
      position[*snake_head_row][*snake_head_col]=1;

      //重設蛇頭的row位置,蛇頭的col位置沒變
      snake_body[0][0]=*snake_head_row;

      //產生新的食物位置
      generate_food(len,food_row,food_col);
     }
    else
     {
      //設定蛇尾位置值為-1,表示去掉蛇尾,即蛇的最後一節
      position[snake_body[*len-1][0]][snake_body[*len-1][1]]=0;
      snake_body[*len-1][0]=-1;
      snake_body[*len-1][1]=-1;
      //設定蛇尾位置值為-1,表示去掉蛇尾,即蛇的最後一節

      //將蛇的位置值往下移
      for (i=*len-1;i>=1;i--)
       {
        snake_body[i][0]=snake_body[i-1][0];
        snake_body[i][1]=snake_body[i-1][1];
       }
      //將蛇的位置值往下移

      //重設蛇頭的位置
      (*snake_head_row)++;
      snake_body[0][0]=*snake_head_row;
      snake_body[0][1]=*snake_head_col;
      position[*snake_head_row][*snake_head_col]=1;
      //重設蛇頭的位置
     }
   }
 }

//定義蛇往左移動之函式
void left(int *len, int *snake_head_row,
           int *snake_head_col,int *food_row,int *food_col)
 {
  int i;
  if (snake_body[0][1]>=1)
   {
    if (snake_body[0][1]-1==*food_col && snake_body[0][0]==*food_row)
     {
      //吃到食物,蛇的長度+1
      (*len)++;

      //重新設定蛇每一節的位置
      for (i=*len-1;i>=1;i--)
       {
        snake_body[i][0]=snake_body[i-1][0];
        snake_body[i][1]=snake_body[i-1][1];
       }
 
      //重設新的蛇頭位置
      *snake_head_col=*food_col;
      position[*snake_head_row][*snake_head_col]=1;
 
      //重設蛇頭的row位置,蛇頭的col位置沒變
      snake_body[0][1]=*snake_head_col;
 
      //產生新的食物位置
      generate_food(len,food_row,food_col);
     }
    else
     {
      //設定蛇尾位置值為-1,表示去掉蛇尾,即蛇的最後一節
      position[snake_body[*len-1][0]][snake_body[*len-1][1]]=0;
      snake_body[*len-1][0]=-1;
      snake_body[*len-1][1]=-1;
      //設定蛇尾位置值為-1,表示去掉蛇尾,即蛇的最後一節
 
      //將蛇的位置值往左移
      for (i=*len-1;i>=1;i--)
       {
        snake_body[i][0]=snake_body[i-1][0];
        snake_body[i][1]=snake_body[i-1][1];
       }
      //將蛇的位置值往左移
 
      //重設蛇頭的位置
      (*snake_head_col)--;
      snake_body[0][0]=*snake_head_row;
      snake_body[0][1]=*snake_head_col;
      position[*snake_head_row][*snake_head_col]=1;
      //重設蛇頭的位置
     }
   }
 }
 
 //定義蛇往右移動之函式
void right(int *len,int *snake_head_row,
           int *snake_head_col,int *food_row,int *food_col)
 {
  int i;
  if (snake_body[0][1]<=23)
   {
    if (snake_body[0][1]+1==*food_col && snake_body[0][0]==*food_row)
     {
      //吃到食物,蛇的長度+1
      (*len)++;
 
      //重新設定蛇每一節的位置
      for (i=*len-1;i>=1;i--)
       {
        snake_body[i][0]=snake_body[i-1][0];
        snake_body[i][1]=snake_body[i-1][1];
       }
 
      //重設新的蛇頭位置
      *snake_head_col=*food_col;
      position[*snake_head_row][*snake_head_col]=1;
 
      //重設蛇頭的row位置,蛇頭的col位置沒變
      snake_body[0][1]=*snake_head_col;
 
      //產生新的食物位置
      generate_food(len,food_row,food_col);
     }
    else
     {
      //設定蛇尾位置值為-1,表示去掉蛇尾,即蛇的最後一節
      position[snake_body[*len-1][0]][snake_body[*len-1][1]]=0;
      snake_body[*len-1][0]=-1;
      snake_body[*len-1][1]=-1;
      //設定蛇尾位置值為-1,表示去掉蛇尾,即蛇的最後一節
 
      //將蛇的位置值往右移
      for (i=*len-1;i>=1;i--)
       {
        snake_body[i][0]=snake_body[i-1][0];
        snake_body[i][1]=snake_body[i-1][1];
       }
      //將蛇的位置值往右移
 
      //重設蛇頭的位置
      (*snake_head_col)++;
      snake_body[0][0]=*snake_head_row;
      snake_body[0][1]=*snake_head_col;
      position[*snake_head_row][*snake_head_col]=1;
      //重設蛇頭的位置
     }
   }
 }
 
//定義產生食物位置之函式
void generate_food(int *len,int *food_row,int *food_col)
 {
  int i;
  while (1)
   {
    *food_row=rand()%25;
    *food_col=rand()%25;
 
    //位置(food_row,food_col)若被蛇所佔據,則無法設定成食物的新位置
    //位置(food_row,food_col)與蛇所佔據的所有位置比較
    for (i=0;i<*len;i++)
      if (snake_body[i][0]==*food_row && snake_body[i][1]==*food_col)
        break;
    
    if (i==*len)
      break;
    
   }
  position[*food_row][*food_col]=2;
 }
