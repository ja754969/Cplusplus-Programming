#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {  
  int money[2][4]; //2間分公司，四季的營業額
  int total=0; //一年的總營業額
  int i,j;
  for (i=0;i<2;i++) //2間分公司
   {
    for (j=0;j<4;j++) //四季
     {
      cout << "第" << i+1 << "間分公司的第" 
           << j+1 << "季營業額:" ;
      cin >> money[i][j] ;
      total+=money[i][j]; //總營業額累計
     }
   }
  cout << "這家企業一年的總營業額:" 
       << total << '\n' ;
      
  system("PAUSE");	
  return 0;
 }
