#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int i;
	int sum=0;
	for(i=1;i<=6;i++) 
		sum += i;
	cout << "1+2+...+6=" << sum << endl;
	system("pause");
	return 0;
}
