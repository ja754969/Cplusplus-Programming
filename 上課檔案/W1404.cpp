//�d��10-8 ��m�x�} 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip> 
using namespace std;
void transpose(int *,int,int); //�ŧi 
int main(){ 
  int num[2][3];
  cout << "��J2*3�x�}:\n";
  for (int i=0;i<2;i++){
  	for (int j=0;j<3;j++){
  		cout << "��"<<i<<"�C�A��"<<j<<"�檺�� : ";
		cin>>num[i][j];
		 
	  }
	  
  }
  cout<<"��l��2*3�x�} : \n";
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
 
 void transpose(int *d,int m,int n){ //�w�q�禡 
	int i,j;
	cout << "��m���ܦ�3*2�x�} : \n";
	for (j=0;j<3;j++){
		for (i=0;j<m;i++){
			cout << *(d+1*n+j);
		}
		cout << '\n';
	}
 }
