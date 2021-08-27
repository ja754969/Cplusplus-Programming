#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
struct student
 {
  char sex;
  char name[7];
 };
 
//輸出名字相同最多的男生與女生之名字 
void find_name(int , int);

//宣告一個資料型為ifstream的資料串流輸入物件變數readfile 
//做為讀取檔案之用
ifstream readfile; 
int main()
 {  
  //以讀取的開檔模式,開啟大學聯考考生姓名資料檔.txt
  readfile.open("大學聯考考生姓名資料檔.txt",ios::in);
  if (readfile.fail())
   {
    cout << "大學聯考考生姓名資料檔.txt無法開啟!\n" ;      
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   }   
  
  //宣告enroll為student結構變數
  struct student enroll; //錄取的學生

  int boy=0,girl=0; //男生,女生人數
  
  while (1) 
   {
    //一次讀取1筆student結構型態的資料
    //並存入enroll結構變數    
    readfile >> enroll.sex >> enroll.name ;
    if (!readfile.eof())
      if (enroll.sex=='1')
         boy++;
      else
         girl++;
    else
      break;
   }
   
  //清除readfile所代表的檔案之游標在檔尾的狀態       
  readfile.clear();
  
  readfile.seekg(0,ios::beg);  
  find_name(boy,girl);
  
  readfile.clear();  
 
  //關閉readfile所代表的檔案  
  readfile.close();  
  if (readfile.fail())
   {
    cout << "大學聯考考生姓名資料檔.txt無法關閉!\n" ; 
    system("pause");
    exit(1);//exit(1)函式作用為強迫結束程式
   } 
    
  system("PAUSE");
  return 0; 
 }

void find_name(int boy,int girl)
 {
  int i;
   
  //定義student_firstname(名字及人數)的結構資料型態
  struct student_firstname
   {
    string name;
    int number;
   };

  //動態宣告一維陣列結構變數,記錄最多的男生的名字及人數  
  struct student_firstname *boylist = new struct student_firstname [boy];
 
  //動態宣告一維陣列結構變數,記錄最多的女生的名字及人數  
  struct student_firstname *girllist = new struct student_firstname [girl];

  struct student enroll;
  int boy_num=0,girl_num=0;
  char temp[5];

  //人數最多的男生及女生名字
  string boy_most_name,girl_most_name;
  //最多的男生及女生人數
  int boy_most_number,girl_most_number;

  while (1) 
   {
    //一次讀取2個資料
    //並存入enroll結構的成員變數 sex及 name
    readfile >> enroll.sex >> enroll.name ;
    if (!readfile.eof())
      if (enroll.sex=='1') //表示男生 
        {
         //取出enroll.name第2個Byte之後的內容(即名字)           
         //存入 boylist結構陣列的成員變數 name 
         boylist[boy_num].name=enroll.name+2;         
         if (boy_num==0) //表示第一個男生
          {
           boylist[boy_num].number=1;
           boy_num=1; 
          }
         else
          {
           for (i=boy_num-1;i>=0;i--)
             if (boylist[boy_num].name==boylist[i].name)              
                break;
           
           //如果這個男生的名字與之前男生的名字相同
           //則之前男生的名字所對應的人數+1
           //否則這個男生的名字所對應的人數設為1(表示第一次出現)
           //並且將不同名字的男生人數+1
           if (i>=0)
              boylist[i].number++;
           else
             {
              boylist[boy_num].number=1;
              boy_num++; 
             }
          }             
        }
      else
        {         
         //取出enroll.name第2個Byte之後的內容(即名字) 
         //存入 girllist結構陣列的成員變數 name 
         girllist[girl_num].name=enroll.name+2;         
         if (girl_num==0) //表示第一個女生 
           {
            girllist[girl_num].number=1;
            girl_num=1;
           }
         else
           {
            for (i=girl_num-1;i>=0;i--)
              if (girllist[girl_num].name==girllist[i].name)
                break;
            
            //如果這個女生的名字與之前女生的名字相同
            //則之前女生的名字所對應的人數+1
            //否則這個女生的名字所對應的人數設為1(表示第一次出現)
            //並且將不同名字的女生人數+1 
            if (i>=0)
              girllist[i].number++;
            else
              {
               girllist[girl_num].number=1;
               girl_num++;
              }
           }          
        }
    else
      break;
   }
   
  boy_most_name=boylist[0].name;
  boy_most_number=boylist[0].number;  
  for (i=1;i<boy_num;i++)
    if (boy_most_number<=boylist[i].number)
     {
      boy_most_number=boylist[i].number;
      boy_most_name=boylist[i].name; 
     }     
  cout << "人數最多的男生為" << boy_most_name << "共有" << boy_most_number << "個.\n" ;
  
  girl_most_name=girllist[0].name;
  girl_most_number=girllist[0].number;
  for (i=1;i<girl_num;i++)
    if (girl_most_number<=girllist[i].number)
     {
      girl_most_number=girllist[i].number;
      girl_most_name=girllist[i].name;
     }
  cout << "人數最多的女生為" << girl_most_name << "共有" << girl_most_number << "個.\n" ;
 }
