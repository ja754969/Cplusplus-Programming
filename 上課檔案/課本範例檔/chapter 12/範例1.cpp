#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {
  struct student
   {
    string code;    //學號 
    string name;    //姓名
    int  age;       //年齡
    string tel;     //電話
    string address; //住址
    void inputdata(void)
     {
      cout << "輸入學號:" ;
      getline(cin,code) ;
      cout << "輸入姓名:" ;
      getline(cin,name) ;
      cout << "輸入年齡:" ;
      cin >> age ;    
      
      cin.sync() ; 
      //清除留在鍵盤緩衝區的資料(參考3-2資料輸入)                
      
      cout << "輸入電話:" ;
      getline(cin,tel) ;
      cout << "輸入住址:" ;
      getline(cin,address) ;         
     }
     
    void printdata(void)
     {
      cout << code << '\t'
           << name << '\t'
           << age << '\t' 
           << tel << '\t'
           << address << endl;          
     }
   };
  
  struct student first={
         "123201","林書豪",25,"095888xxxx","美國"};
  struct student second[2]={
         {"123202","曾雅妮",24,"095888xxxx","臺灣"},
         {"993201","盧彥勳",27,"095168xxxx","臺灣"}};

  //結構指標變數three指向結構變數first
  struct student *three=&first;
  int i;
  cout << "學號\t姓名\t年齡\t電話\t\t住址" << endl ;
     
  first.printdata(); //印出first結構變數的成員內容
  
  //印出second[0],second[1]結構陣列變數的成員內容
  for (i=0;i<=1;i++)    
    second[i].printdata();

  //印出three結構指標變數的成員內容
  three->printdata();
  
  system("pause");
  return 0; 
 }
