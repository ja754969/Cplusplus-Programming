#include <iostream>
#include <cstdlib>
#include <cctype> 
using namespace std;
main(){
	char ch;
	cout << "��J�r��";
	cin >> ch;
	if (isspace(ch) != 0){
		cout << ch << "�O�ťզr��\n"; 
	}
	else{
		cout << ch << "���O�ťզr��\n";
	}
	system("pause");
	return 0;
}
