#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int n,i=1;
  float length=100,distance=0;
  cout << "輸入n:";
  cin >> n;
  while (i<=n)
   {
    distance = distance +length;
    length = length / 2;        
    distance = distance +length;
    i++;
   }
  distance = distance -length;
  cout << "第" << n 
       << "次落地時，球經過的距離=" 
       << distance << '\n';
  cout << "球第" << n 
       << "次反彈的高度=" 
       << length << '\n';
  system("pause");
    
  return 0;
 }	
