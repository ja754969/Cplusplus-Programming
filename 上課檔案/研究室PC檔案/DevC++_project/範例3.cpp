#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main()
 {
  int i;
  char password[8];// �x�s�̦h7��r�����K�X
  cout <<"��J�r���K�X(�̦h7��):" ;
  for (i=0;i<7;i++)
   {
    password[i] = getch(); //�q��L��J�r���A�����|���
    if (password[i]=='\r') // '\r'����k����(�YEnter��)
      break;
    cout << '*' ;
   }

  password[i]='\0';
  //�N'\0'�����r���s�J�̫�줸�A��password�����r��

  cout << "\n��J���r���K�X��" 
       <<password << '\n' ;
   
  system("PAUSE");	
  return 0;
 }
