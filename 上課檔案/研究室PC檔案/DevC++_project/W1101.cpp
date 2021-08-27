#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int m[7],total = 0;
	for (int i = 0;i<7;i++){
		cout << "輸入星期" << i+1 << "的花費 :　";
		cin >> m[i];
		total = total +m[i];
		 
	}
	cout << "一星期總花費 :　"<<total << '\n';
	
	system("pause");
	return 0; 
}
