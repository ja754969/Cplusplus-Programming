#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
 {
  double liter,money;
  cout << "輸入汽油公升數:" ;
  cin >> liter ; 
  money=round(liter*31.3);
  cout << "汽油" << liter 
       << "公升,共" << money 
       << "元\n";
  
  system("pause");    
  return 0;
 }	
