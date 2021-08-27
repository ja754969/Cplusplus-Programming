#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>
#include <conio.h>
using namespace std;
int main()
 {  
  //定義cinema結構資料型態
  struct cinema
   {  
    char name[10];     // 電影名稱
    char date[9];        // 上映日期
    char place[7];       // 上映廳處 
    int price;           // 票價 
   };

  //宣告movie為struct cinema結構變數
  struct cinema movie; 

    
  //宣告一個資料型為ofstream的資料串流輸出物件變數writebinaryfile 
  //做為寫入檔案之用
  ofstream writebinaryfile;  
 
  //以二進制寫入的開檔模式,開啟movie.bin
  writebinaryfile.open("movie.bin",ios::out|ios::binary);
  if (writebinaryfile.fail())
   {
    cout << "movie.bin檔案無法開啟!\n" ;      
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   } 
  
  cout << "建立電影資訊結構記錄:" ;
  do
   {
    cout << "\n電影名稱:" ;
    cin >> movie.name ;
    cout << "上映日期:" ;
    cin >> movie.date ;
    cout << "上映廳處:" ;
    cin >> movie.place ;
    cout << "票價:" ;
    cin >> movie.price ;

    //一次寫入1筆cinema結構型態的資料到
    //資料串流輸出物件變數writebinaryfile所代表的檔案內
    writebinaryfile.write((char *)&movie,sizeof(struct cinema));

    cout << "是否繼續輸入? (y/n):" ;
   }while (toupper(getche()) == 'Y' );
    
  // 注意：getche宣告在conio.h
  // 　　　toupper宣告在ctype.h

  cout << '\n' ;
  
  //關閉writebinaryfile所代表的檔案  
  writebinaryfile.close();  
  if (writebinaryfile.fail())
   {
    cout << "movie.bin檔案無法關閉!\n" ; 
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   } 
    
  system("PAUSE");
  return 0; 
}
