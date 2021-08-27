#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  string name[2]; //2個學生的姓名
  int score[2][3]; //2個學生的3科成績
  int total[2]={0}; //2個學生的總成績
  int i,j;
  for (i=0;i<2;i++) //2個學生
   {
    cout << "輸入第" << i+1 << "個學生的姓名:" ;
    cin >> name[i] ;
    for (j=0;j<3;j++) //3科
     {
      cout << "第" << j+1 << "科成績:" ;
      cin >> score[i][j] ;
      total[i]+= score[i][j]; //累計
     }
   }
  for (i=0;i<2;i++) //2個學生
     cout << name[i] << "的總成績:"
          << total[i] << '\n' ;
  
  system("PAUSE");	
  return 0;
 }
