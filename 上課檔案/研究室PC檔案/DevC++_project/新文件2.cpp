//範例14-4 承範例14-3
// 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  

//---------------------------------------------------------     
//---------------------------------------------------------    
  //宣告一個資料型為ifstream的資料串流輸入物件變數readfile
  //做為讀取檔案之用 
  ifstream readfile;  
    
  //以唯讀的方式,開啟test.txt檔案 
  readfile.open("test.txt",ios::in);
  if (readfile.fail())
   {
    cout << "test.txt檔案無法開啟!\n" ;      
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }  
   
  string data;
  cout << "test.txt文字檔內容為:\n";
  
  //readfile所代表的檔案之游標不在檔尾,繼續讀取資料      
  while (!readfile.eof())
   {
     getline(readfile,data);     
     cout << data ;         
     if (!readfile.eof())
        cout << '\n' ;         
   } 
      
  //清除readfile所代表的檔案之游標在檔尾的狀態      
  readfile.clear();
  
  //關閉readfile所代表的檔案
  readfile.close();  
  if (readfile.fail())
   {
    cout << "test.txt檔案無法關閉!\n" ; 
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }
  
  system("pause");
  return 0;
 }
