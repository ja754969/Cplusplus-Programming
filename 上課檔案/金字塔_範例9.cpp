#include <iostream>
#include <cstdlib>
using namespace std;
 int main(){
 	int i,j;
 	for (i=1;i<=5;i++){
 		for (j=1;j<=5-i;j++)
 			cout << ' ';
 		
		for (j=1;j<=2*i-1;j++)
			cout << '*';
			
		cout << '\n';
	 }
 }
