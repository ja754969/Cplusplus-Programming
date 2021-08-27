//範例7-29 數學四則運算回答 
#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int main()
 { 
  int num1,num2;
  int result,answer;
  char op;
  
  srand((unsigned) time(NULL));
  //將目前時間轉換成無符號整數
  
  cout<<"回答數學四則運算 : \n";
  num1 = 1+rand()%100; //產生介於1到100之間的亂數資料 
  num2 = 1+rand()%100;
  
  switch (1+rand()%4){ //產生1到4之間的整數亂數資料 
  	case 1: //如果是 4 ，指定op為除  
  		op = '+';
  		result = num1+num2;
  		break;
	case 2: //如果是 2 ，指定op為除  
		op = '-';
		result = num1-num2;
		break;
	case 3: //如果是 3 ，指定op為除 
		op = '*';
		result = num1*num2;
		break;
	case 4: //如果是 4 ，指定op為除 
		op = '/';
		result = num1/num2;
		break;
  } 
  cout<<num1<<op<<num2<<'=';
  cin>>answer;
  
  if (answer==result){
	cout<<"答對\n";
	
  }
  else{
  	cout<<"答錯\n";
  }
  
  system("pause");
  return 0;
 }
