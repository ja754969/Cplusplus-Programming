#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int i;
  float num=0.0;
  for (i = 1 ; i <= 3 ; i++)
   {
    cout << "0.1+" ;
    num=num+0.1;
   }
  cout << "\b ";
  if (num == 0.3)
    cout << "�P 0.3 �۵�\n" ;
  else
    cout << "�P 0.3 ���۵�\n" ;
  
  system("pause");
  return 0;
 }	
