#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <conio.h>
using namespace std;
void display(string *, int , int );
int main()
 {
  int i,j;

  //拉霸圖案
  string picture[9]={"７",":)","▓","●","﹩","＠","★","◆","◎"};

  //存放電腦亂數產生的9個圖案
  string position[3][3];

  //拉霸轉動的起始時間點(滴答數)及停止時間點(滴答數)
  clock_t start_clock,end_clock;

  float spend=0; //拉霸轉動的時間(秒)
  srand((unsigned)time(NULL));

  //電腦亂數產生的9個圖案存入position
  for (i=0;i<3;i++)
    for (j=0;j<3;j++)
      position[i][j]=picture[rand()%9];

  display(&position[0][0],3,3); 

  while (1)
   {
    cout << "\n模擬拉霸遊戲(按Y開始,按N結束):" ;
    if (toupper(getche())=='N')
      break;

    start_clock=clock();
    //取得程式從目前執行到此函數
    //所經過的滴答數(ticks)

    spend =(double) (end_clock-start_clock)/CLK_TCK;

    while (1)
     {
      system("cls");
    
      //下面指令,讓人感覺第1行轉動最慢
      //將第1行第2列的資料變成第1行第3列的資料
      //將第1行第1列的資料變成第1行第2列的資料
      for (i=2;i>=1;i--)
        position[i][0]=position[i-1][0];

      //產生第1行第1列的資料
      position[0][0]=picture[rand()%9];

      //下面指令,讓人感覺第2行轉動比第1行快一點
      //將第2行第2列的資料變成第2行第3列的資料
      position[2][1]=position[1][1];

      //產生第2行第2,1列的資料
      for (i=1;i>=0;i--)
        position[i][1]=picture[rand()%9];

      //下面指令,讓人感覺第3行轉動最快
      //重新產生第3行第1,2,3列的資料
      for (i=0;i<3;i++)
        position[i][2]=picture[rand()%9];

      display(&position[0][0],3,3); //寫法1
   
      _sleep(100); 
      //停頓一下,可以看到好像圖案在轉動 
      
      end_clock=clock();
      //取得程式從開始執行到此函數
      //所經過的滴答數(ticks)

      spend =(double) (end_clock-start_clock)/CLK_TCK;
      
      if (spend>=5) //轉動時間>=5秒,停止轉動
        break;
     }

    //判斷第2列是否都一樣,若一樣,則 Bingo
    for (j=0;j<2;j++)
      if (position[1][j]!=position[1][j+1])
        break;
    if (j==2)
      cout << "恭喜您BINGO了!\n" ;
   }
  
  cout << '\n' ;
  system("pause");
  return 0;
 }

void display(string *position , int m , int n)
 {
  int i,j;
  system("cls");
  for (i=0;i<m;i++)
   {
    for (j=0;j<n;j++)
      cout << *(position+i*n+j) << ' ' ;
      //position+i*n+j是記憶體位址
      //*(position+i*n+j)相當於position[i][j]

    cout << "\n\n";
   }
  cout << "\n第1行轉動最慢,第2行轉動較快,第3行轉動最快\n" ;
 }
