//�g�@�{���A��X�U�C��ٹϧΡC
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int i,j;
  int max;
  cout << "�п�J��ٳ̤j��(����) : ";
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
