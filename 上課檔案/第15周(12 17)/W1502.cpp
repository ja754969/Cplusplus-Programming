//範例14-2 開啟文字檔，並輸出內容和所佔空間(Byte) 
//文字檔名稱 : test.txt 
//從檔案中讀取一個字元，讀完後檔案游標移往下一個字元所在位址 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  //宣告一個資料型為ifstream的資料串流輸入物件變數readfile
  //做為讀取檔案之用 
  ifstream readfile;
    
  //以唯讀的方式,開啟檔案 
  readfile.open("test.txt",ios::in);
  if (readfile.fail()) //判斷是否在readfile所代表的檔案尾部 
   {
    cout << "test.txt檔案無法開啟!\n" ;      
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }  
  
  char ch;
  int filespace=0; //計算檔案所佔的空間(byte)
  cout << "test.txt文字檔內容為:\n";
  while (1)
   {
     ch=readfile.get(); //從test.txt中讀取一個字元 
     
     //判斷否在readfile所代表的檔案之尾部 
     if (readfile.eof()){
        break;	 
	 } 
     cout << ch ;    
     filespace ++;    
   }
   // 一個中文字有2個Byte
  cout << '\n' << "test.txt文字檔所佔的空間為";
  cout << filespace << "Bytes(包括換列字元)\n" ;
  
   
  //清除readfile所代表的檔案之游標在檔尾的狀態    
  //這樣執行readfile.close(); 關檔時才不會有問題 
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
