#include <iostream>
#include <cstdlib>

using namespace std;
int main(){ //�G���j�M 
	int n; //��Ƶ���
	cout<<"�п�J��Ƶ��� : ";
	cin>>n; 
	int data[n] ; //{12,6,26,2,58}
	int num;
	int left,middle,right;
	//cout<<��J���� 
	for (int i = 0;i<n;i++){
		cout << "��J��"<<i+1<<"����� :�@";
		cin >> data[i];
	}
	cout<<"��J�n�j�M����� : ";
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
		cout<<num<<"����Ƥ�����"<<middle+1<<"�Ӧ�m\n";
		 
	} 
	else{
		cout<<num<<"���b��Ƥ�\n";
		
	}
	
	system("pause");
	return 0; 
}
