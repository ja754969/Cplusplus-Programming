#include <iostream>
#include <cstdlib>

using namespace std;
int main(){ //�u�ʷj�M�k 
	int n; //��Ƶ���
	cout<<"�п�J��Ƶ��� : ";
	cin>>n; 
	int data[n] ; //{12,6,26,2,58}
	int i,num;
	//int n
	//cout<<��J���� 
	for (int i = 0;i<n;i++){
		cout << "��J��"<<i+1<<"����� :�@";
		cin >> data[i];
	}
	cout << "��J�n�j�M����� : ";
	cin >> num;
	
	for (i=0;i<n;i++){
		if (num==data[i]){
			cout<<num<<"����Ƥ�����"<<i+1<<"�Ӧ�m\n";
			break; 
		}
		
	} 
	if (i==n){
			cout<<num<<"���b��Ƥ�\n";
		}
		
	system("pause");
	return 0; 
}
