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
	cout << "20�~����~��: " << pay <<"��\n"; 
	system("pause");
	return 0;
} 
