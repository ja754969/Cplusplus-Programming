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
    char date[9];      // 上映日期
    char place[7];     // 上映廳處 
    int  price;        // 票價 
   };

  //宣告movie為一有3個元素的struct cinema結構陣列變數
  struct cinema movie[3]; 

    
  //宣告一個資料型為ofstream的資料串流輸出物件變數appbinaryfile 
  //做為寫入檔案之用
  ofstream appbinaryfile;  
 
  //以二進制新增的開檔模式,開啟movie.bin 
  appbinaryfile.open("movie.bin",ios::app|ios::binary);
  if (appbinaryfile.fail())
   {
    cout << "movie.bin檔案無法開啟!\n" ;      
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }    
  
  int i=0;  
  cout << "一次最多建立3筆電影資訊結構記錄:" ;  
  do
   {
    cout << '\n' << i+1 << ".電影名稱:" ;
    cin >> movie[i].name ;
    cout << "上映日期:" ;
    cin >> movie[i].date ;
    cout << "上映廳處:" ;
    cin >> movie[i].place ;
    cout << "票價:" ;
    cin >> movie[i].price ;
    i++;
    cout << "\n是否繼續輸入? (y/n):" ;
   } while (toupper(getche()) == 'Y' && i<3);

   cout << '\n' ;

  //一次寫入i筆cinema結構型態的資料到
  //資料串流輸出物件變數appbinaryfile所代表的檔案內    
  appbinaryfile.write((char *)&movie[0],sizeof(struct cinema)*i);
 
  //關閉appbinaryfile所代表的檔案  
  appbinaryfile.close();  
  if (appbinaryfile.fail())
   {
    cout << "movie.bin檔案無法關閉!\n" ; 
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   } 
    
  system("PAUSE");
  return 0; 
 }
