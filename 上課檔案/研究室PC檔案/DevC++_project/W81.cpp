#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int time;
	int cost;
	float hr;
	cout << "�����ɼ�(hr) : ";
	cin >> hr;
    time = hr*60; 
	switch (time)
	{
		case 0 ... 60:
			cost = 30;
			break;
		case 61 ... 120:
			cost = 30 + 40;
			break;
		case 121 ... 180:
			cost = 30 + 40*2;
			break;
		case 181 ... 240:
			cost = 30 + 40*2 + 50;
			break;
		case 241 ... 300:
			cost = 30 + 40*2 + 50*2;
			break;
		default:
			cost = 30 + 40*2 + 50*2 + 60*((int) hr-4);
    }
	cout <<"�����ɶ� : "<<time <<"����\n"
	     <<"�����O�� : "<<cost <<"��\n"; 
	system("pause");
	return 0;
} 
