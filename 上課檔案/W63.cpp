#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int x = 2,y = -3;
	if (x > 0 && y > 0){
		cout << "(" << x <<","<< y <<")" << "��b��1�H��" << endl; 
	}
	else if (x < 0 && y > 0){
		cout << "(" << x <<","<< y <<")" << "��b��2�H��" << endl; 
	}
	else if (x < 0 && y < 0){
		cout << "(" << x <<","<< y <<")" << "��b��3�H��" << endl; 
	}
	else if (x > 0 && y < 0){
		cout << "(" << x <<","<< y <<")" << "��b��4�H��" << endl; 
	}
	else{
		cout << "���~" << endl;
	}
	system("pause");
    return 0;
}
