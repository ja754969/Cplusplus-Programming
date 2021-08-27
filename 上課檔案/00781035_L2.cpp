#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int a=0,b=1,c;
	c=a++ +b;         ////先c=a++ +b再 a++ 
	cout <<"a="<<a<<","<<"c="<<c<<'\n';
	int a1=0,b1=1,c1;
	c1=++a1 +b1;      //先++a再 c1=++a1 +b1
	cout <<"a1="<<a1<<","<<"c1="<<c1<<'\n';
	system("PAUSE");
	return 0;
}

