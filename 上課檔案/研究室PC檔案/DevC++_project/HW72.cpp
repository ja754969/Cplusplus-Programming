#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int top = 20;
	int up = 3,down = 1;
	int crawl = 0;       //��������Z�� 
	int day = 0;
	while (crawl <  top){
		if ((crawl + up) < top){
			crawl = crawl + up - down;
			day += 1;
		}
		else if ((crawl + up) >= top){
			crawl += up;
			day += 1;
		} 
		else{
			day += 0;
		}
	}
	cout << "��������𳻪��Ѽ� :" << day << endl;
	system("pause");
	return 0;
} 
