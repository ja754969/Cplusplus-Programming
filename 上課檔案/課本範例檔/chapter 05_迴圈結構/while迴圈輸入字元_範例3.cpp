#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main()
 {   
  int number=0;
  cout << "�@�Ӧr���@�Ӧr����J(�����Enter��~����):";
  while (getche() != '\r')	
    number = number + 1;

  cout << "\n�@��J" << number << "�Ӧr��\n" ;

  system("pause");
  return 0;
 }	
