//�d��8-7 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip> 
#include <string> 
using namespace std;
int main()
 { 
  int i,j;
  char *name[3]={"�p��","����","�j��"};
  char *temp;
  cout << "�Ƨǫe:";
  for (i=0;i<3;i++){
  	cout<<name[i]<<' ';
  }
  cout<<"\n";
  
  for (i=1;i<=2;i++){
  	for (j=0;j<3-i;j++){
  		if ((string) name[j] > (string) name[j+1]){
  			temp = name[j];
  			name[j] = name[j+1];
  			name[j+1] = temp;
		  }
	  }
  }
  cout<<"�Ƨǫ�:";
  for (i=0;i<3;i++){
  	cout<<name[i]<<' ';
  } 
  cout<<"\n";
  
  
  system("pause");
  return 0;
 }
