#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int time;
	int cost;
	cout << "�����ɼ� : ";
	cin >> time;
	if (time == 1){
		time += 1;
	}
	switch ((time+1)/1)
	{
		case 0:
			cost = 30;
			break;
		case 1:
			cost = 30;
			break;
		case 2:
			cost = 30 + 40;
			break;
		case 3:
			cost = 30 + 40*2;
			break;
		case 4:
			cost = 30 + 40*2 + 50;
			break;
		case 5:
			cost = 30 + 40*2 + 50*2;
			break;
		default:
			cost = 30 + 40*2 + 50*2 + 60*(time-5);
	}
	cout << "�����O�� : "<<cost; 
	system("pause");
	return 0;
} 
