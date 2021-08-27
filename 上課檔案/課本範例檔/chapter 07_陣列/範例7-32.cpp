#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  string str,backup_str,delimiter;  
  int str_len,delimiter_len,findplace; 
  int i,j;
  cout << "輸入要被分割的字串:" ;
  getline(cin,str);
  backup_str=str;
  cout << "輸入分界點的字串:" ;
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
