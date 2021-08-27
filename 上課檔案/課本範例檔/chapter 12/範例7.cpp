#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int i,j;
  struct tel_book
   {
    string name;
    int age;
    string tel;
   };

  struct tel_book student[3]={
         {"王五",19,"06-2512"},
         {"張三",18,"04-2321"},
         {"李四",18,"02-2226"} };

  struct tel_book temp; // 暫存temp結構

  cout << "排序前的資料:\n" ;
  for (i=0;i<3;i++)
   {
    cout << student[i].name << ' ' << student[i].age
         << ' ' << student[i].tel << "\n" ;
   }

  for (i=1;i<=2;i++) //執行2(=3-1)個步驟
    for (j=0;j<3-i;j++) //第i步驟,執行3-i次比較
      //年齡較大者排在後面
      if (student[j].age>student[j+1].age)
       {
        temp=student[j];
        student[j]=student[j+1];
        student[j+1]=temp;
       }
      //若年齡相同
      else if (student[j].age==student[j+1].age)
        //再依據電話排列
        if (student[j].tel > student[j+1].tel)
         {
          temp=student[j];
          student[j]=student[j+1];
          student[j+1]=temp;
         }
        //若左邊的資料>右邊的資料，則
        //將student[j]與student[j+1]的
        //所有成員之內容互換。

  cout << "排序後的資料:\n" ;
  for (i=0;i<3;i++)
   {
    cout << student[i].name << ' ' << student[i].age
         << ' ' << student[i].tel << "\n" ;
   }      
   
  system("pause");
  return 0;
 }
