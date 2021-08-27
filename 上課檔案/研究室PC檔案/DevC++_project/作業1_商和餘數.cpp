#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main(){
	int a,b;
	cout << "a:";
	cin >> a;
	cout << "b:";
	cin >> b;
	cout << a << "/" << b <<"的商為  "<<a/b <<"\n";
	cout << a << "/" << b <<"的餘數為"<<a%b <<"\n";
	system("pause");
	return 0;
}
