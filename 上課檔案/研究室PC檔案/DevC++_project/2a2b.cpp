#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main() {
  int a1 = 2,a2 = 0,a3 = 1 ,a4 = 9; 
  int n,n1,n2,n3,n4;
  int A,B;
  while (A!= 4 && B!= 4){
  
  	cout << "請輸入一個四位數字 : ";
  	cin >> n;
  	n1 = int(n/1000);
  	n2 = int((n-n1*1000)/100);
  	n3 = int((n-n1*1000-n2*100)/10);
  	n4 = int(n-n1*1000-n2*100-n3*10);
  	//cout << n1 << n2 << n3 << n4;
  	A = 0;B = 0;
  	if (n1 == a1){
  		A+=1;
  	}
  	else if (n2 == a1||n3 == a1||n4 == a1){
  		B+=1;
  	}
  	else{
  		
  	}
  	if (n2 == a2){
  		A+=1;
  	}
  	else if (n1 == a2||n3 == a2||n4 == a2){
  		B+=1;
  	}
  	else{
  		
  	}
  	if (n3 == a3){
  		A+=1;
  	}
  	else if (n1 == a3||n2 == a3||n4 == a3){
  		B+=1;
  	}
  	else{
  		
  	}
  	if (n4 == a4){
  		A+=1;
  	}
  	else if (n1 == a4||n2 == a4||n3 == a4){
  		B+=1;
  	}
  	else{
  		
  	}
  	cout <<A<<"A"<<B<<"B\n";
  }
  cout <<"答對!"<< n1 << n2 << n3 << n4 << '\n';
  system("pause");
  return 0; 
}
