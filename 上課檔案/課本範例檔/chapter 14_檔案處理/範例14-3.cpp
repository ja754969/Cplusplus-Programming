#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  //宣告一個資料型為ofstream的資料串流輸出物件變數appendfile
  //做為寫入檔案之用
  ofstream appendfile;  
  
  cout << "要寫入資料的文字檔名稱:test.txt\n" ;
      
  //以寫入的方式,開啟檔案test.txt,並將新增的資料寫到檔案尾部
  appendfile.open("test.txt",ios::app);
  if (appendfile.fail())
   {
    cout << "test.txt檔案無法開啟!\n" ;      
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }  
  
  string data;  
  cout << "輸入要寫入的資料(以Enter鍵作為結束):\n" ;  
  getline(cin,data);
  appendfile << data << '\n' ;
  if (appendfile.fail())
   {
    cout << "寫入時,出現錯誤:\n" ;
    exit(1);
   }
  
  //關閉appendfile所代表的檔案
  appendfile.close();  
  if (appendfile.fail())
   {
    cout << "test.txt檔案無法關閉!\n" ; 
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }
    
  system("pause");
  return 0;
 }
