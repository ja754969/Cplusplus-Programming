#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 { 
  int num,total=0;
  cout << "�s��N��Ƥ@�Ӥ@�ӿ�J�A����0�~������J:\n" ;
  while (1)
   {
    cin >> num ;
    if (num==0)
      break;
    total=total+num;
   }
  cout << "�`�M=" << total << '\n' ;

  system("pause");
  return 0;
 }	
