//寫一程式，輸出下列對稱圖形。
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int i,j;
  int max;
  cout << "請輸入對稱最大值(偶數) : ";
  cin >> max;
  for (i=1;i<=max;i++)
   {
   	for (j=1;j<=abs(i-(max+1)/2);j++){
   		cout << " ";
	   }
    for (j=1;j<=max-2*abs(i-(max+1)/2);j++){
		cout << '*' ;
	} 
    cout << '\n';
   }
  
  system("pause");    
  return 0;
 }	
