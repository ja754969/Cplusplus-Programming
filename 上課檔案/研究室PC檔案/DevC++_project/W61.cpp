#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int bill;
	cout << "�п�J�ʪ��� : ";
	cin >> bill;
	//cout.precision(0);     //�]�w�p�Ʀ��0�� 
    //cout.setf(ios::fixed); //�]�w�p�Ʀ��0�� (�|�ˤ��J����) 
	cout << "§����B : "<< (bill/10000)*1000<<" ��" << endl;
	system("pause");
    return 0;
}
