#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int a=0,b=1,c;
	c=a++ +b;         //先c=a++ +b再 a++ 
	cout <<"a="<<a<<","<<"c="<<c<<'\n';
	int a1=0,b1=1,c1;
	c1=++a1 +b1;      //先++a1再 c1=++a1 +b1
	cout <<"a1="<<a1<<","<<"c1="<<c1<<'\n';
	int a2=0,b2=1,c2;
	c2=a2-- +b2;         //先c2=a2-- +b2再 a2++ 
	cout <<"a2="<<a2<<","<<"c2="<<c2<<'\n';
	int a3=0,b3=1,c3;
	c3=--a3 +b3;         //先c3=a3-- +b3再 a3++ 
	cout <<"a3="<<a3<<","<<"c3="<<c3<<'\n';
	system("PAUSE");
	return 0;
}

