#include <iostream>
#include <cstdlib>
#include <cctype> 
using namespace std;
main(){
	char ch1,ch2;
	cout << "��J�^��r�� : ";
	cin >> ch1;
	ch2 = toupper(ch1);
	cout << ch1 << "���j�g��" << ch2 << '\n';
	
	system("pause");
	return 0; 
}
