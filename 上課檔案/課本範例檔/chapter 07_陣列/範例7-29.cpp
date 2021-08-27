#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
 {  
  int num1,num2;
  int result,answer;
  char op;

  //將目前時間轉成無號數整數
  srand((unsigned) time(NULL));

  cout << "回答數學四則運算（+，-，*，/）的問題\n" ;
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
     cout << "答對\n" ;
  else
     cout << "答錯\n" ;     
  
  system("PAUSE");	
  return 0;
 }
