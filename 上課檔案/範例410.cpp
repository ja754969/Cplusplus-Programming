#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int year;  
  cout << "�п�J�褸�~��:" ;
  cin >> year ;   
  if (year % 400 == 0) //�~����400������
    cout << "�褸" << year << "�~�O�|�~\n" ;
  else
    if (year % 4 == 0) //�~����4������
	   if (year % 100 != 0) //�~������100������
          cout << "�褸" << year << "�~�O�|�~\n" ;
       else     
          cout << "�褸" << year << "�~���O�|�~\n" ;
    else
       cout << "�褸" << year << "�~���O�|�~\n" ;
 
  system("pause");
  return 0;
 }

