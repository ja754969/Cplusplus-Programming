#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  string name[2]={"王建民", "陳偉殷"};
  int win[2][2][3]; //2人，2年各3個月的勝場數
  int total_win[2]={0}; //2人的總勝場數初始值都為0
  int i,j,k;
  for (i=0;i<2;i++) //2人
   {
    cout << "輸入" << name[i]
         << "過去兩年5月~7月的勝場數\n" ;
    for (j=0;j<2;j++) //2年
     {
      for (k=0;k<3;k++) //3個月(5月~7月)
       {
        cout << "第" << j+1<< "年" 
             << k+5 << "月的勝場數:" ;
        cin >> win[i][j][k] ; 
        total_win[i]+=win[i][j][k]; //累計個人的總勝場數
       }
      }
    }
   for (i=0;i<2;i++)    
     cout << name[i] <<"每個月的平均勝場數:"      
          << (float)total_win[i]/6 << '\n' ;
  
  system("PAUSE");	
  return 0;
 }
