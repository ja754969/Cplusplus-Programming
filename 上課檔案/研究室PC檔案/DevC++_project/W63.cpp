#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int x = 2,y = -3;
	if (x > 0 && y > 0){
		cout << "(" << x <<","<< y <<")" << "位在第1象限" << endl; 
	}
	else if (x < 0 && y > 0){
		cout << "(" << x <<","<< y <<")" << "位在第2象限" << endl; 
	}
	else if (x < 0 && y < 0){
		cout << "(" << x <<","<< y <<")" << "位在第3象限" << endl; 
	}
	else if (x > 0 && y < 0){
		cout << "(" << x <<","<< y <<")" << "位在第4象限" << endl; 
	}
	else{
		cout << "錯誤" << endl;
	}
	system("pause");
    return 0;
}
