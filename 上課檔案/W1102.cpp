#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int i;
	char password[8]; //�̦h�x�s7��r���K�X
	cout << "��J�K�X(�̦h7��) :�@";
	for (int i=0;i<7;i++){
		password[i] = getch();
		if (password[i]=='\r'){
			break;
		}
		cout << '*';
		
	}
	
	password[i]='\0';
	
	cout << "\n��J�r���K�X��"<<password<<'\n'; 
	
	system("pause");
	return 0; 
}
