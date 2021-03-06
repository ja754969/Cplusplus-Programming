#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
using namespace std;
int main()
 { 
  int i,j;
  int bmp;
  clock_t start_clock,end_clock;
  float spend;  //小綠人已行走的時間(秒)
  
  //使用3維陣列並以2進制方式記錄圖案   
  int green_walker[11][16][16]={
            
   //bmp:0 第1張靜止紅綠燈之小綠人
   { {0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0},     
     {0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0},
     {0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0},
     {0,0,0,0,1,0,1,1,1,0,1,0,0,0,0,0},
     {0,0,0,0,1,0,1,1,1,0,1,0,0,0,0,0},
     {0,0,0,0,1,0,1,1,1,0,1,0,0,0,0,0},
     {0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0},
     {0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0},
     {0,0,0,0,1,1,1,0,1,1,1,0,0,0,0,0} },  

   //bmp:1 第2張紅綠燈之小綠人
   { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,1,0,1,0,0,0,0,0,0},
     {0,0,0,0,1,0,1,1,0,0,1,0,0,0,0,0},
     {0,0,0,1,0,0,1,1,0,0,1,0,0,0,0,0},
     {0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,0,0,0,1,1,1,0,0,0,0},
     {0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0},
     {0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0},
     {0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} }, 

   //bmp:2 第3張紅綠燈之小綠人
   { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,0},
     {0,0,0,0,1,1,1,1,0,1,0,0,0,0,0,0},
     {0,0,0,1,0,0,1,1,0,1,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,0,0,0,1,1,0,0,0,0,0},
     {0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0},
     {0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0},
     {0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0} },

   //bmp:3 第4張紅綠燈之小綠人 
   { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,1,0,1,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0},
     {0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0},
     {0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0},
     {0,0,0,1,1,1,0,0,0,0,0,0,1,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0} },

   //bmp:4 第5張紅綠燈之小綠人 
   { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,1,0,1,0,0,0,0,0,0},
     {0,0,0,0,1,0,1,1,0,1,0,0,0,0,0,0},
     {0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,0,0,0,1,1,0,0,0,0,0},
     {0,0,0,0,0,1,0,0,0,0,0,1,1,0,0,0},
     {0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0},
     {0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} },

   //bmp:5 第6張紅綠燈之小綠人 
   { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0} }, 

   //bmp:6 第7張紅綠燈之小綠人 
   { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,1,0,1,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,1,0,0,1,0,0,0,0,0},
     {0,0,0,0,1,0,1,1,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,0,0,0,1,1,1,0,0,0,0},
     {0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0},
     {0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} }, 

   //bmp:7 第8張紅綠燈之小綠人 
   { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0},
     {0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0},
     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} }, 

   //bmp:8 第9張紅綠燈之小綠人 
   { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,1,0,1,0,0,0,0,0,0},
     {0,0,0,0,1,0,1,1,0,0,1,0,0,0,0,0},
     {0,0,0,1,0,0,1,1,0,0,1,0,0,0,0,0},
     {0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,0,0,0,1,1,0,0,0,0,0},
     {0,0,0,0,0,1,0,0,0,0,1,1,0,0,0,0},
     {0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0},
     {0,0,0,1,1,0,0,0,0,0,1,0,0,0,0,0} }, 

   //bmp:9 第10張紅綠燈之小綠人 
   { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,0},
     {0,0,0,0,1,1,1,1,0,1,0,0,0,0,0,0},
     {0,0,0,1,0,0,1,1,0,1,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0},
     {0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0},
     {0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0},
     {0,0,0,0,0,1,1,0,0,0,0,1,0,0,0,0},
     {0,0,0,0,0,0,1,0,0,0,1,1,0,0,0,0},
     {0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0} },     
   };

  //顯示第0張圖 
  for (i=0;i<16;i++)
   {   
    for (j=0;j<16;j++)      
      if (green_walker[0][i][j]==1)
         cout << "■" ;
      else
         cout << "  " ;
      cout << '\n' ;        
   }
   
  _sleep(1000); //暫停或延遲1(=1000/1000) 秒鐘 
  
  start_clock=clock();
  //取得程式從目前執行到此函數
  //所經過的滴答數(ticks)
   
  while (1)
   {   
    for (bmp=1;bmp<=9;bmp++)
     {
      system("CLS");     
      //顯示第bmp張圖 
      for (i=0;i<16;i++)
       {    
        if (spend>=30)
          if (bmp%2==1)
            cout << "  " ; 
        
        for (j=0;j<16;j++)      
           if (green_walker[bmp][i][j]==1)
            cout << "■" ; 
          else
           cout << "  " ;
        cout << '\n' ;        
       } 
           
      end_clock=clock();
      //取得程式從開始執行到此函數
      //所經過的滴答數(ticks)
       
      spend =(double) (end_clock-start_clock)/CLK_TCK;
      //從小綠人開始執行到目前所經過的時間(秒) 
     
      if (spend<=30)      //慢走(第0~第30秒),每0.65秒播一張圖案 
         _sleep(650);   
      else if (spend<=45) //快走(第30~第45秒),每0.25秒播一張圖案 
         _sleep(250);
      else if (spend<=60) //跑走(第45~第60秒),每0.0625秒播一張圖案 
         _sleep(62.5);
      else
        break;
     }
    if (spend>=60)  //一分鐘後  
      break;  
   }
  
  system("CLS");
  //顯示第0張圖 
  for (i=0;i<16;i++)
   {   
    for (j=0;j<16;j++)      
      if (green_walker[0][i][j]==1)
        cout << "■" ; 
      else
        cout << "  " ;
    cout << '\n' ;        
   }
  //顯示第0張圖 
   
  system("PAUSE");	
  return 0;
 }
