#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
 {  
  int num1,num2;
  int result,answer;
  char op;

  //�N�ثe�ɶ��ন�L���ƾ��
  srand((unsigned) time(NULL));

  cout << "�^���ƾǥ|�h�B��]+�A-�A*�A/�^�����D\n" ;
  num1=1+rand()%100;
  num2=1+rand()%100;
  switch (1+rand()%4)
   {
    case 1:
      op= '+';
      result=num1+num2;
      break;
    case 2:
      op= '-';
      result=num1-num2;
      break;
    case 3:
      op= '*';
      result=num1*num2;
      break;
    case 4:
      op= '/';
      result=num1/num2;
   }
  cout << num1 << op 
       << num2 <<'=';
  cin >> answer;
  
  if (answer == result)
     cout << "����\n" ;
  else
     cout << "����\n" ;     
  
  system("PAUSE");	
  return 0;
 }
