//寫一程式，輸出下列對稱圖形。
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
 {
  int i,j;
  int max;
  cout << "請輸入對稱最大值(偶數) : ";
  cin >> max;
  for (i=1;i<=max-1;i++)
   {
   	for (j=1;j<=abs(1-(max)/2)-abs(i-(max)/2);j++){
		cout << " " ;
	}
   	for (j=1;j<=2*(abs(i-(max/2))+1);j++){
   		cout << "*";
	}
    cout << '\n';
   }
  
  system("pause");    
  return 0;
 }	
