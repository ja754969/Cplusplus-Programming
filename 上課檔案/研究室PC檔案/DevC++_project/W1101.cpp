#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int m[7],total = 0;
	for (int i = 0;i<7;i++){
		cout << "��J�P��" << i+1 << "����O :�@";
		cin >> m[i];
		total = total +m[i];
		 
	}
	cout << "�@�P���`��O :�@"<<total << '\n';
	
	system("pause");
	return 0; 
}
