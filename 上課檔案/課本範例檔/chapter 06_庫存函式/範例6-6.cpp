#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
 {
  double hour,money;
  cout << "輸入路邊停車時數:" ;
  cin >> hour ;
  money=ceil(hour)*20;  
  cout << "路邊停車" << hour
       << "時,共" << money
       << "元\n";
  
  system("pause");    
  return 0;
 }	
