#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int income,tax;
	cout << "�п�J��X�ұo�b�B:"; 
	cin >> income;
	if (income >= 0 && income <= 520000){
		cout << "���ǵ|�B:" << income*0.05 - 0 << "��\n"; 
	} 
	else if (income >= 520001 && income <= 1170000){
		cout << "���ǵ|�B:" << income*0.12 - 36400 << "��\n"; 
	}
	else if (income >= 1170001 && income <= 2350000){
		cout << "���ǵ|�B:" << income*0.20 - 130000 << "��\n"; 
	}
	else if (income >= 2350001 && income <= 4400000){
		cout << "���ǵ|�B:" << income*0.30 - 365000 << "��\n"; 
	}
	else if (income >= 4400001 && income <= 110000000){
		cout << "���ǵ|�B:" << income*0.40 - 850000 << "��\n"; 
	}
	else if (income > 110000000){
		cout << "���ǵ|�B:" << income*0.45 - 1305000 << "��\n"; 
	}
	else{
		cout << "�t��\n";
	}
	system("pause");
	return 0;
} 
