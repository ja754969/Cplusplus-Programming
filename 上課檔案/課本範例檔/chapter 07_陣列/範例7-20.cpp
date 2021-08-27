#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {
  string str ;
  int pos,n ;
  cout << "輸入要被刪除資料的字串:" ; 
  getline(cin,str) ; 
  cout << "輸入要被刪除的資料之起始位元組:" ;
  cin >> pos ;
  cout << "輸入要被刪除的資料之位元組數:" ;
  cin >> n ;
  cout << str << "的資料被刪除後,\n變成";
  str.erase(pos,n);  
  cout << str << '\n' ; 
  system("PAUSE");	
  return 0;
 }
