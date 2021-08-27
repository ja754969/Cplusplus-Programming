//範例14-1 唯讀開啟文字檔，並關閉
//文字檔名稱 : test.txt 
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
  
  string filename;
  cout << "輸入要開啟的文字檔名稱:" ;
  cin >> filename;
    
  //以唯讀的方式,開啟檔案 
  readfile.open(filename.c_str(),ios::in);
  if (readfile.fail())
   {
    cout << filename << "檔案無法開啟!\n" ;      
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }  
  cout << filename << "檔案已開啟!\n" ;
  
  //關閉readfile所代表的檔案
  readfile.close();  
  if (readfile.fail())
   {
    cout << filename << "檔案無法關閉!\n" ; 
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }
  cout << filename << "檔案已關閉!\n" ;
  system("pause");
  return 0;
 }
