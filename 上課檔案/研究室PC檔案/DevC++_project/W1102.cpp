#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int i;
	char password[8]; //最多儲存7位字元密碼
	cout << "輸入密碼(最多7位) :　";
	for (i=0;i<7;i++){
		password[i] = getch();
		if (password[i]=='\r'){ 
			break;
		} 
		cout << '*';
		
	}
	
	password[i]='\0';  
	
	cout << "\n輸入文字密碼為"<<password<<'\n'; 
	
	system("pause");
	return 0; 
}
