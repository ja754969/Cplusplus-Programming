#include <iostream>
#include <fstream>
#include <cstdlib>
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
  cout << "電影資訊結構記錄:\n" ;
  int i=1;

  //顯示所有的電影資訊 
  while (1) 
   {
    //一次讀取1筆cimena結構型態的資料
    //並存入movie結構變數
    readbinaryfile.read((char *)&movie,sizeof(struct cinema));
    
    //資料串流輸入物件變數readbinaryfile所代表的檔案之游標不在檔尾 
    if (!readbinaryfile.eof())
       cout << i << ".電影名稱:" << movie.name << '\n' ;            
    else
       break;
    i++;
   }
   
  //清除readbinaryfile所代表的檔案之游標在檔尾的狀態      
  readbinaryfile.clear();  
  
  cout << "輸入要看之電影名稱的序號:" ;    
  int no; //電影名稱序號
  cin >> no ;
  
  //將檔案指標移動到距離檔頭
  //sizeof(struct cinema)*(no-1) byte的位置
  readbinaryfile.seekg(sizeof(struct cinema)*(no-1),ios::beg);  
  
  //一次讀取1筆cimena結構型態的資料
  //並存入movie結構變數
  readbinaryfile.read((char *)&movie,sizeof(struct cinema));
    
  //資料串流輸入物件變數readbinaryfile所代表的檔案之游標不在檔尾 
  if (!readbinaryfile.eof())
     cout << "電影名稱:" << movie.name << '\t'
          << "上映日期:" << movie.date << '\n' 
          << "上映廳處:" << movie.place << '\t'
          << "票價:" << movie.price << '\n' ;            
  else
     cout << "查無電影資料:\n" ;
     
  //清除readbinaryfile所代表的檔案之游標在檔尾的狀態      
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
