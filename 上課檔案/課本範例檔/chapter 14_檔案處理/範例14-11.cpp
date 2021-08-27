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

  //宣告movie為一有3個元素的struct cinema結構陣列變數
  struct cinema movie[3]; 
    
  //宣告一個資料型為ifstream的資料串流輸入物件變數readbinaryfile 
  //做為讀取檔案之用
  ifstream readbinaryfile;  
 
  //以二進制讀取的開檔模式,開啟movie.bin
  readbinaryfile.open("movie.bin",ios::in|ios::binary);
  if (readbinaryfile.fail())
   {
    cout << "movie.bin檔案無法開啟!\n" ;      
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }   
   
  int tcount; //讀取電影資訊結構記錄的筆數
  int i,cursor_pos; //目前電影資訊記錄檔的游標位置
  do  
   {
    system("cls");
    cout << "輸入要讀取電影資訊結構記錄的筆數(最多3筆):" ;  
    cin >> tcount;
    
    //目前電影資訊記錄檔的游標位置
    cursor_pos=readbinaryfile.tellg();
    
    //一次讀取tcount筆cimena結構型態的資料
    //並存入movie結構陣列變數
    readbinaryfile.read((char *)&movie,sizeof(struct cinema)*tcount);
    
    //資料串流輸入物件變數readbinaryfile所代表的檔案之游標不在檔尾 
    if (!readbinaryfile.eof())
      {
       cout << "電影資訊結構記錄:\n" ;
       cursor_pos=readbinaryfile.tellg(); 
       for (i=0;i<tcount;i++)
          cout << "電影名稱:" << movie[i].name << '\t'
               << "上映日期:" << movie[i].date << '\n' 
               << "上映廳處:" << movie[i].place << '\t'
               << "票價:" << movie[i].price << "\n\n" ;            
      }
    else
      {
       //cout << "電影資訊結構記錄:\n" ;       
       while (1)
        {
         //清除readbinaryfile所代表的檔案之游標在檔尾的狀態      
         readbinaryfile.clear();
         readbinaryfile.seekg(cursor_pos,ios::beg);
         tcount--;
         if (tcount>0)
           {
            readbinaryfile.read((char *)&movie,sizeof(struct cinema)*tcount);       
            if (!readbinaryfile.eof())    
              {
               cout << "電影資訊結構記錄:\n" ;
               for (i=0;i<tcount;i++)
                  cout << "電影名稱:" << movie[i].name << '\t'
                       << "上映日期:" << movie[i].date << '\n' 
                       << "上映廳處:" << movie[i].place << '\t'
                       << "票價:" << movie[i].price << "\n\n" ;            
               break;
              }               
           }
         else
           {
            cout << "已無電影資訊結構記錄\n" ;                  
            break;
           }
        }
      }
    cout << "是否繼續讀取電影資訊結構記錄? (y/n):" ;
   } while (toupper(getche()) == 'Y' && i<3);
  
  cout << '\n' ;
  
  
  readbinaryfile.clear();  
  
  //關閉readbinaryfile所代表的檔案  
  readbinaryfile.close();  
  if (readbinaryfile.fail())
   {
    cout << "movie.bin檔案無法關閉!\n" ; 
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   } 
    
  system("PAUSE");
  return 0; 
 }
