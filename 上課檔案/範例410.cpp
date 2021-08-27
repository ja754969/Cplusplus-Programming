#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int year;  
  cout << "請輸入西元年份:" ;
  cin >> year ;   
  if (year % 400 == 0) //年份為400的倍數
    cout << "西元" << year << "年是閏年\n" ;
  else
    if (year % 4 == 0) //年份為4的倍數
	   if (year % 100 != 0) //年份不為100的倍數
          cout << "西元" << year << "年是閏年\n" ;
       else     
          cout << "西元" << year << "年不是閏年\n" ;
    else
       cout << "西元" << year << "年不是閏年\n" ;
 
  system("pause");
  return 0;
 }

