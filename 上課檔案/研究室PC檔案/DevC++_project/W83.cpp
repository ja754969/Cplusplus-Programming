#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int len=1000;
	int num = 0;
	while (len>=5){
		len -= 0.5*len;
		num += 1;
	}
	cout << "»Ý­n°Å" << num << "¦¸\n";  
	system("pause");
	return 0;
} 
