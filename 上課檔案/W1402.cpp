//�d��10-3 �[�`��� 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip> 
#include <string> 
using namespace std;
int sum(int,int,int); //�Y�A���A���j�� 
int main(){ 
  cout<<"1+2+...+9+10="<<sum(1,10,1)<<'\n';
  cout<<"1+3+...+97+99="<<sum(1,99,2)<<'\n';
  cout<<"4+7+...+97+99="<<sum(4,99,3)<<'\n';
   
  system("pause");
  return 0;
 }
 
 int sum(int m,int n,int add){ //�w�q�禡 
	int i,total=0;
	for (i=m;i<n;i=i+add){
		total=total+i;
	}
 	return total;
 }
