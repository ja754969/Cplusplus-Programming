#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  string str,backup_str,delimiter;  
  int str_len,delimiter_len,findplace; 
  int i,j;
  cout << "��J�n�Q���Ϊ��r��:" ;
  getline(cin,str);
  backup_str=str;
  cout << "��J�����I���r��:" ;
  getline(cin,delimiter);
  
  str_len=str.length();
  delimiter_len=delimiter.length();
  for (i=0;i<=str_len-1;i++)     
    for (j=0;j<=delimiter_len-1;j++)
      {        
       findplace=delimiter.find(str[i]);       
       if (findplace != -1)
        {
         cout << str.substr(0,i)
              << '\n';
         str=str.substr(i+1);
         str_len=str.length();
         i=-1;         
        }
       break;
      } 
  
  system("PAUSE");	
  return 0;
 }
