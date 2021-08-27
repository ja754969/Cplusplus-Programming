#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;
int main()
 {
  int i,total=0;

  struct teacher
   {
    int code;
    string name;
   };

  struct subject
   {
    int code;
    string name;
    struct teacher teacher;
   };

  struct major_rec
   {
    string name;
    struct subject subject;
    int score;
   };

  struct major_rec data[2];

  data[0].name="莊智淵";
  data[0].subject.code=11;
  data[0].score=90;
  data[0].subject.name="程式設計";
  data[0].subject.teacher.code=7;
  data[0].subject.teacher.name="邏輯林";

  data[1].name="莊智淵"; //此指令可有可無
  data[1].subject.code=21;
  data[1].score=92;
  data[1].subject.name="微積分 ";
  data[1].subject.teacher.code=9;
  data[1].subject.teacher.name="代數陳";

  cout << data[0].name << "同學本學期修課記錄如下:\n" ;
  cout << "科目代號 科目名稱\t成績\t教師代號\t教師姓名\n" ;
  for (i=0;i<2;i++)
   {
    cout << data[i].subject.code << "\t " 
         << data[i].subject.name<<"\t " << data[i].score << '\t' 
         << data[i].subject.teacher.code << "\t\t"
         << data[i].subject.teacher.name << '\n' ;
    total=total+data[i].score;
   }
  //設定顯示小數1位
  cout.precision(1);
  cout.setf(ios::fixed);
  //設定顯示小數1位
  cout << "平均成績為" << (float)total/2 << '\n' ;
   
  system("pause");
  return 0;
 }
