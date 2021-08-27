#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  //宣告一個資料型為ofstream的資料串流輸物件變數writefile 
  //做為寫入檔案之用
  ofstream writefile;  
  
  cout << "要寫入資料的文字檔名稱:learn_c++.txt\n" ;
  
  //以寫入的方式,開啟檔案learn_c++.txt
  writefile.open("learn_c++.txt",ios::out);
  if (writefile.fail())
   {
    cout << "learn_c++.txt檔案無法開啟!\n" ;      
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }  
  
  string data;  
  cout << "輸入學習程式設計的心得報告(要結束時,請在該列的最前面按Ctrl+Z鍵):\n" ;
  while(1)
   {
    getline(cin,data);      
          
    //判斷鍵盤是否在檔尾,即輸入資料結束 
     if (cin.eof()) 
      break;
      
    writefile << data << '\n';
    if (writefile.fail())
      {
       cout << "寫入時,出現錯誤:\n" ;
       break;
      }       
   }     
  
  //關閉writefile所代表的檔案
  writefile.close();  
  if (writefile.fail())
   {
    cout << "learn_c++.txt檔案無法關閉!\n" ; 
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }
  
  //宣告一個資料型為ifstream的資料串流輸入物件變數readfile
  //做為讀取檔案之用 
  ifstream readfile;  
  
  //以唯讀的方式,開啟learn_c.txt檔案 
  readfile.open("learn_c++.txt",ios::in);
  if (readfile.fail())
   {
    cout << "learn_c++.txt檔案無法開啟!\n" ;      
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }  
  
  cout << "learn_c++.txt文字檔內容為:\n";
  
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
    cout << "learn_c++.txt檔案無法關閉!\n" ; 
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }  
   
  system("pause");
  return 0;
 }
