#include <iostream>
#include <cstdlib>

using namespace std;
int main(){ //二分搜尋 
	int n; //資料筆數
	cout<<"請輸入資料筆數 : ";
	cin>>n; 
	int data[n] ; //{12,6,26,2,58}
	int num;
	int left,middle,right;
	//cout<<輸入次數 
	for (int i = 0;i<n;i++){
		cout << "輸入第"<<i+1<<"筆資料 :　";
		cin >> data[i];
	}
	cout<<"輸入要搜尋的資料 : ";
	cin >> num;
	left=0;
	right=n-1;
	
	while (left<=right){
		middle = (left+right)/2;
		if (num==data[middle]){
			break;
		}
		else if (num > data[middle]){
			left=middle+1;
		}
		else{
			right=middle-1;
		}
	}
	
	if (left<=right){
		cout<<num<<"位於資料中的第"<<middle+1<<"個位置\n";
		 
	} 
	else{
		cout<<num<<"不在資料中\n";
		
	}
	
	system("pause");
	return 0; 
}
