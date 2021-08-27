#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main(){
	int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; //
	int B[3][1] = {3,7,10};
	int C[3][1] = {0,0,0};
	cout << "C = \n";
	for (int i=0;i<3;i++) {
		for (int j=0;j<1;j++){
			for (int k=0;k<3;k++){
				//C[0][0] = A[0][0]*B[0][0]+A[0][1]*B[1][0]+A[0][2]*B[2][0]
				//C[1][0] = A[1][0]*B[0][0]+A[1][1]*B[1][0]+A[1][2]*B[2][0]   
				//C[2][0] = A[2][0]*B[0][0]+A[2][1]*B[1][0]+A[2][2]*B[2][0]
				C[i][j]+=A[i][k]*B[k][j];
					
			}
			
		cout << C[i][j];
		cout<<"\n";
		}
		
	}

	
	system("pause");
	return 0; 
}
