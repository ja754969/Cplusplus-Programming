#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int i;
	char password[8]; //最多儲存7位字元密碼
	cout << "輸入密碼(最多7位) :　";
	for (int i=0;i<7;i++){
		password[i] = getch();
		if (password[i]=='\r'){
			break;
		}
		cout << '*';
		
	}
	
	password[i]='\0';
	
	cout << "\n輸入字元密碼為"<<password<<'\n'; 
	
	system("pause");
	return 0; 
}
