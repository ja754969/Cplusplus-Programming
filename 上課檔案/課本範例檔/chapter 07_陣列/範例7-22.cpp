#include <iostream>
#include <cstdlib>
#include <string> 
using namespace std;
int main()
 {
  string str;
  int i,len;
  cout << "��J�r��:" ;
  cin >> str ;   
  len=str.length() ;
  cout << str <<"�r�������ܬ�:" ;
  for (i= len-1 ; i>=0 ; i--)
    cout << str[i] ;
    cout << '\n' ; 
  system("pause");
  return 0; 
 }
