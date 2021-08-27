#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main(){
	int i;
	int sum = 0;
	for(i=1;i<=5;i++) 
		sum += pow(2,i); //
	cout << "1+2+...+6=" << sum << endl;
	system("pause");
	return 0;
}
