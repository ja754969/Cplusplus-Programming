#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
 {  
  char pic[2]={'O','X'};
  int pos[3][3]={{-1,-1,-1},{-1,-1,-1},{-1,-1,-1}};
  //#號圖形的資料內容,-1表示目前無沒填資料

  int row,col; //輸入座標
  int num=1; //輸入次數
  int i,j,k;
  int over=0;
  cout << "模擬#遊戲\n";

  //畫出3*3的#號圖形
  cout << " 0 1 2\n" ;
  cout << "0 | |" ;
  cout << '\n' ;
  cout << " -----" ;
  cout << '\n' ;
  cout << "1 | |" ;
  cout << '\n' ;
  cout << " -----" ;
  cout << '\n' ;
  cout << "2 | |" ;
  cout << '\n' ;
  //畫出3*3的#號圖形

  while (1)
   {
    for (i=0;i<2;i++)
     {
      cout << "第1個人以O為記號，第2個人以X為記號\n";
      cout << "第" << i+1 << "個人填選" << pic[i] << "的";
      cout << "位置列(row),行(col)(以空白隔開)(row=0,1或2 col=0,1,或2):";

      //2:表示輸入兩個符合格式的資料
      cin >> row >> col ;      

      if (!(row>=0 && row<=2 && col>=0 && col<=2))
       {
        cout << "無(" << row << ',' << col <<")位置,重新輸入!\a\n" ;
        i--;
        continue;
       }
 
      if (pos[row][col]!=-1)
       {
        cout << "位置("<< row << ',' << col << ")已經有棋子了,重新輸入!\a\n" ;
        i--;
        continue;
       }
      pos[row][col]=i;

      system("cls");
      //每下過一次,重新畫出3*3 #號圖形內的資訊
      cout << "模擬#遊戲\n" ;
      cout << " 0 1 2\n" ;
      for (j=0;j<5;j++)
       {                    
        if (j%2==0)
          cout << j/2;           
        else
          cout << ' ';

        for (k=0;k<5;k++)
         {
          if (j%2==0 && k%2==0) //填O,X資料的位置
           {
            if (pos[j/2][k/2]!=-1) //第1,3,5列為O,X 資料
              cout << pic[pos[j/2][k/2]] ;
            else
              cout << ' ';
           }
          else if (j%2!=0) //第2,4列
            cout << '-' ;
          else if (k%2!=0) //第2,4行
            cout << "|" ;
         }
        cout << '\n' ;
        //每下過一次,重新畫出3*3 #號圖形內的資訊
       }

      //判斷同一列的O,X 資料是否相同
      for (row=0;row<3;row++)
        if (pos[row][0]!=-1)
          if (pos[row][0]==pos[row][1] && pos[row][1]==pos[row][2])
           {
            cout << "第" << pos[row][0]+1 <<"個人贏了\n" ;
            over=1;
            break;
           }
      if (over==1)
        break;

      //判斷同一行的O,X 資料是否相同
      for (col=0;col<3;col++)
        if (pos[0][col]!=-1)
          if (pos[0][col]==pos[1][col] && pos[1][col]==pos[2][col])
           {
            cout << "第" << pos[0][col]+1 << "個人贏了\n" ;
            over=1;
            break;
           }
      if (over==1)
        break;
  
      //判斷左對角線的O,X 資料是否相同
      if (pos[0][0]!=-1)
        if (pos[0][0]==pos[1][1] && pos[1][1]==pos[2][2])
         {
          cout << "第" << pos[0][0]+1 << "個人贏了\n" ;
          over=1;
          break;
         }

      //判斷右對角線的O,X 資料是否相同
      if (pos[0][2]!=-1)
        if (pos[0][2]==pos[1][1] && pos[1][1]==pos[2][0])
          {
           cout << "第" << pos[0][2]+1 << "個人贏了\n" ;
           over=1;
           break;
          }
      num++;
  
      //判斷是否已輸入9次
      if (num==10)
       {
        cout << "平手\n" ;
        over=1;
        break;
       }
     }
    if (over==1)
       break;
   }
  system("PAUSE");	
  return 0;
 }
