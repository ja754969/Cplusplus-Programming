#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
	int n; //資料筆數
	cout<<"請輸入資料筆數 : ";
	cin>>n; 
	int data[n] ; //{12,6,26,2,58}
	int i,j;
	int temp;
	//int n
	//cout<<輸入次數 
	for (int i = 0;i<n;i++){
		cout << "輸入第"<<i+1<<"筆資料 :　";
		cin >> data[i];
	}
	cout<<"排序前的資料:";
	for (i=0;i<n;i++){
		cout<<data[i]<<' ';
		
	}
	cout<<'\n';
	for (i=1;i<=4;i++){ //步驟 1 2 3 4
		for (j=0;j<n-i;j++) {//比較 4 3 2 1
			if (data[j]>data[j+1]){
				temp = data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
				
			}
		} 
	}
	
	cout<<"排序後的資料:";
	for (i=0;i<5;i++){
		cout<<data[i]<<' ';
	}
	cout<<'\n';
	
	system("pause");
	return 0; 
}
