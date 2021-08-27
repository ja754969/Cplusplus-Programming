#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  //宣告一個資料型為ofstream的資料輸出串流物件變數writefile
  //做為寫入檔案之用
  ofstream writefile;  

  //以寫入的方式,開啟檔案,開啟檔案animal.txt    
  writefile.open("animal.txt",ios::out);
  if (writefile.fail())
   {
    cout << "animal.txt檔案無法開啟!\n" ;      
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }  
    
  writefile << "動物\t年齡\t身高\n" ;
  int i;
  string name;  
  int age,height;
  for (i=1;i<=3;i++)
   {
    cout << "輸入第" << i 
         << "種動物名稱，年齡及身高(以空白鍵作區隔):\n" ;                
    cin >> name >> age >> height ;
    writefile << name << '\t' << age << '\t' << height << '\n';
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
    cout << "animal.txt檔案無法關閉!\n" ; 
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   } 
  
  system("pause");
  return 0;
 }
