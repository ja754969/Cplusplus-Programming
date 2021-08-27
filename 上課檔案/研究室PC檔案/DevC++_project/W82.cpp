#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <cmath>
using namespace std;
int main(){
	int pay = 50000;
	int total;
	for (int i=0;i<=19;i++){
		pay = pay * (1+0.01*i); 
	}
	cout << "20年後月薪為: " << pay <<"元\n"; 
	system("pause");
	return 0;
} 
