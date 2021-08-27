#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void hanoi(int,int,int,int);
int main()
 {
  int n;
  cout << "輸入河內塔遊戲(Tower of Hanoi)的圓環個數:" ;
  cin >> n ;

  //將n個圓環從木釘1經由木釘2搬到木釘3
  hanoi(n,1,3,2);

  system("pause");
  return 0;
 }

void hanoi(int circle,int source,int target,int temp)
 {
  static int no=1;
  if (circle>=2)
   {
    //將(circle-1)個圓環
    //從來源木釘經由目的木釘搬到過渡木釘
    hanoi(circle-1,source,temp,target);
   
    cout << "第" << setw(3) << no++ << "次:圓環" 
         << circle << " 從 柱子" << source 
         << "搬到 柱子" << target << '\n' ;

    //將(circle-1)個圓環
    //從過渡木釘經由來源木釘搬到目的木釘
    hanoi(circle-1,temp,target,source);
   }
  else
   {
    cout << "第" << setw(3) << no++ << "次:圓環" 
         << circle << " 從 柱子" << source 
         << "搬到 柱子" << target << '\n' ;
   }
 }
