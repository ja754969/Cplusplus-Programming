//�d��7-29 �ƾǥ|�h�B��^�� 
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
  //�N�ثe�ɶ��ഫ���L�Ÿ����
  
  cout<<"�^���ƾǥ|�h�B�� : \n";
  num1 = 1+rand()%100; //���ͤ���1��100�������üƸ�� 
  num2 = 1+rand()%100;
  
  switch (1+rand()%4){ //����1��4��������ƶüƸ�� 
  	case 1: //�p�G�O 4 �A���wop����  
  		op = '+';
  		result = num1+num2;
  		break;
	case 2: //�p�G�O 2 �A���wop����  
		op = '-';
		result = num1-num2;
		break;
	case 3: //�p�G�O 3 �A���wop���� 
		op = '*';
		result = num1*num2;
		break;
	case 4: //�p�G�O 4 �A���wop���� 
		op = '/';
		result = num1/num2;
		break;
  } 
  cout<<num1<<op<<num2<<'=';
  cin>>answer;
  
  if (answer==result){
	cout<<"����\n";
	
  }
  else{
  	cout<<"����\n";
  }
  
  system("pause");
  return 0;
 }
