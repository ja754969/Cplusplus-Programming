#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int top = 20;
	int up = 3,down = 1;
	int crawl = 0;       //½½¤ûª¦¦æ¶ZÂ÷ 
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
	cout << "½½¤ûª¦¨ì¾ð³»ªº¤Ñ¼Æ :" << day << endl;
	system("pause");
	return 0;
} 
