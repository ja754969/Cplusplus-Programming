//範例10-8 轉置矩陣 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip> 
using namespace std;
void transpose(int *,int,int); //宣告 
int main(){ 
  int num[2][3];
  cout << "輸入2*3矩陣:\n";
  for (int i=0;i<2;i++){
  	for (int j=0;j<3;j++){
  		cout << "第"<<i<<"列，第"<<j<<"行的值 : ";
		cin>>num[i][j];
		 
	  }
	  
  }
  cout<<"原始的2*3矩陣 : \n";
  for (int i=0;i<2;i++){
  	for (int j=0;j<3;j++){
  		cout<<num[i][j];
	  }
	cout<<'\n';
  }
  
  transpose(&num[0][0],2,3);
  
  system("pause");
  return 0;
 }
 
 void transpose(int *d,int m,int n){ //定義函式 
	int i,j;
	cout << "轉置後變成3*2矩陣 : \n";
	for (j=0;j<3;j++){
		for (i=0;j<m;i++){
			cout << *(d+1*n+j);
		}
		cout << '\n';
	}
 }
