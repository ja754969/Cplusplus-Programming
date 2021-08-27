#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int bill;
	cout << "請輸入購物金 : ";
	cin >> bill;
	//cout.precision(0);     //設定小數位數0位 
    //cout.setf(ios::fixed); //設定小數位數0位 (四捨五入到整數) 
	cout << "禮券金額 : "<< (bill/10000)*1000<<" 元" << endl;
	system("pause");
    return 0;
}
