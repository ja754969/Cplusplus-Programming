#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int income,tax;
	cout << "請輸入綜合所得淨額:"; 
	cin >> income;
	if (income >= 0 && income <= 520000){
		cout << "應納稅額:" << income*0.05 - 0 << "元\n"; 
	} 
	else if (income >= 520001 && income <= 1170000){
		cout << "應納稅額:" << income*0.12 - 36400 << "元\n"; 
	}
	else if (income >= 1170001 && income <= 2350000){
		cout << "應納稅額:" << income*0.20 - 130000 << "元\n"; 
	}
	else if (income >= 2350001 && income <= 4400000){
		cout << "應納稅額:" << income*0.30 - 365000 << "元\n"; 
	}
	else if (income >= 4400001 && income <= 110000000){
		cout << "應納稅額:" << income*0.40 - 850000 << "元\n"; 
	}
	else if (income > 110000000){
		cout << "應納稅額:" << income*0.45 - 1305000 << "元\n"; 
	}
	else{
		cout << "負債\n";
	}
	system("pause");
	return 0;
} 
