#include<iostream>
#include<cstdlib>
#include <iomanip>
using namespace std;
int main(){
	int num=19;
	cout.fill('0');
	cout << setw(4) << num<<'\n'; //�H4byte�e�����num
	cout.setf(ios::left);
	cout << setw(4) << num << '\n';
	system("pause");
	return 0; 
}
