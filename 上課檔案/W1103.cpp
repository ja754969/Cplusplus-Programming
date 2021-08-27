#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; //
	int B[3][1] = {3,7,10};
	int C[3][1]= {0,0,0};
	int a,b,c1,c2,c3;
	for (int i=0;i<3;i++) {
		for (int j=0;j<1;j++){
			for (int k=0;k<3;k++){
				//a = A[i][k];
				//b = B[k][j];
				//ab1 = a*b;
				C[i][j]+=A[i][k]*B[k][j];
					
			}
			
		cout << C[i][j];
		cout<<"\n";
		}
		
	}
	//c1 = C[0][0];
	//c2 = C[1][0];
	//c3 = C[3][0];
	//cout << c1 <<'\n'<<c2<<'\n'<<c3<<'\n';
	
	system("pause");
	return 0; 
}
