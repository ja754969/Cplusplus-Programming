#include <iostream>
#include <cstdlib>
#include <cctype> 
using namespace std;
main(){
	char ch1,ch2;
	cout << "輸入英文字元 : ";
	cin >> ch1;
	ch2 = toupper(ch1);
	cout << ch1 << "的大寫為" << ch2 << '\n';
	
	system("pause");
	return 0; 
}
