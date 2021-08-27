#include <iostream>
#include <cstdlib>

using namespace std;
int main(){ //線性搜尋法 
	int n; //資料筆數
	cout<<"請輸入資料筆數 : ";
	cin>>n; 
	int data[n] ; //{12,6,26,2,58}
	int i,num;
	//int n
	//cout<<輸入次數 
	for (int i = 0;i<n;i++){
		cout << "輸入第"<<i+1<<"筆資料 :　";
		cin >> data[i];
	}
	cout << "輸入要搜尋的資料 : ";
	cin >> num;
	
	for (i=0;i<n;i++){
		if (num==data[i]){
			cout<<num<<"位於資料中的第"<<i+1<<"個位置\n";
			break; 
		}
		
	} 
	if (i==n){
			cout<<num<<"不在資料中\n";
		}
		
	system("pause");
	return 0; 
}
