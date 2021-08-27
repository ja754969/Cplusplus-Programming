#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  //宣告一個資料型態為fstream的資料輸入/輸出串流物件變數read_writefile
  //做為讀取/寫入檔案之用
  fstream read_writefile;  
 
  //以可讀取可寫入的開檔模式,開啟檔案animal.txt
  //新增的資料會寫到檔尾
  read_writefile.open("animal.txt",ios::in|ios::out);
  if (read_writefile.fail())
   {
    cout << "animal.txt檔案無法開啟!\n" ;      
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }  
  string name;  
  int age,height;  
  
  getline(read_writefile,name) ;
  
  float total_age=0,total_height=0;
  int i;  
  for (i=1;i<=3;i++)
   {         
    read_writefile >> name >> age >> height ;
    if (read_writefile.fail())
      {
       cout << "讀取時,出現錯誤:\n" ;
       break;
      }
    total_age=total_age+age;
    total_height=total_height+height;       
   }
   
  //設定顯示小數一位 
  cout.precision(1);
  cout.setf(ios::fixed);   
  //設定顯示小數一位
 
  cout << "平均年齡:" << total_age/3
       << "\t平均身高:" << total_height/3  << '\n' ;
      
  //將檔案的游標移到檔尾 
  read_writefile.seekg(0,ios::end) ; 
  
  read_writefile << "平均年齡:" << total_age/3
                 << "\t平均身高:" << total_height/3 << '\n' ;
      
  //清除read_writefile所代表的檔案之游標在檔尾的狀態      
  read_writefile.clear();
                  
  //關閉read_writefile所代表的檔案
  read_writefile.close();  
  if (read_writefile.fail())
   {
    cout << "animal.txt檔案無法關閉!\n" ; 
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   } 
  
  system("pause");
  return 0;
 }

