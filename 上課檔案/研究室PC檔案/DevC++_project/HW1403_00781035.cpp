#include <iostream>
#include <cstdlib>
using namespace std;
 int main(){
 	int num[25] = {6,7,8,9,10,11,12,13,14,
	 15,16,17,18,19,20,21,22,23,24,25,26,27,
	 28,29,30}; 
 	int i,j,k;
 	int layer,n;
 	cout << "輸入電影座位金字塔層數: "; //7
 	cin >> layer;
 	cout << "第幾排開始? : "; //3
 	cin>>n;
 	cout<<"\n";
 	
 	k = n-1; //3-1 
	// k 用在第二個 j 迴圈 
 	for (i = (n-1)*(n-1)+1;i <= layer;i++){
 		for (j=1;j<=(layer-i)*2;j++){ 
 			cout << ' ';
 		} 
		
		//2平方~4平方 
		for (j=k*k+1;j<=(k+1)*(k+1);j++){
			cout << num[j-1];
		}
		cout << '\n';
		k++;
	}	
 }
