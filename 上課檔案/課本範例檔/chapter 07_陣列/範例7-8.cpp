#include <iostream>
#include <string> 
using namespace std;
int main()
 {  
  string str1,str2;
  cout << "��J�r��1:" ;
  getline(cin , str1);
  cout << "��J�r��2:" ;
  getline(cin , str2);   
  if (str1 > str2)
    cout << str1 << " �j�� " << str2 << endl ;
  else if (str1 == str2)
    cout << str1 << " ���� " << str2 << endl ;  
  else
    cout << str1 << " �p�� " << str2 << endl ;  
  system("pause");
  return 0; 
 }
