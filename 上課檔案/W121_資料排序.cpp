#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
	int n; //��Ƶ���
	cout<<"�п�J��Ƶ��� : ";
	cin>>n; 
	int data[n] ; //{12,6,26,2,58}
	int i,j;
	int temp;
	//int n
	//cout<<��J���� 
	for (int i = 0;i<n;i++){
		cout << "��J��"<<i+1<<"����� :�@";
		cin >> data[i];
	}
	cout<<"�Ƨǫe�����:";
	for (i=0;i<n;i++){
		cout<<data[i]<<' ';
		
	}
	cout<<'\n';
	for (i=1;i<=4;i++){ //�B�J 1 2 3 4
		for (j=0;j<n-i;j++) {//��� 4 3 2 1
			if (data[j]>data[j+1]){
				temp = data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
				
			}
		} 
	}
	
	cout<<"�Ƨǫ᪺���:";
	for (i=0;i<5;i++){
		cout<<data[i]<<' ';
	}
	cout<<'\n';
	
	system("pause");
	return 0; 
}
