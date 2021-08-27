#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {  
  int w1,w2,w3,w4,w5,w6,w7,total=0;
  cout <<"輸入星期一的花費:" ;
  cin >> w1;
  cout <<"輸入星期二的花費:" ;
  cin >> w2;
  cout <<"輸入星期三的花費:" ;
  cin >> w3;
  cout <<"輸入星期四的花費:" ;
  cin >> w4;
  cout <<"輸入星期五的花費:" ;
  cin >> w5;
  cout <<"輸入星期六的花費:" ;
  cin >> w6;
  cout <<"輸入星期日的花費:" ;
  cin >> w7;
  total=w1+w2+w3+w4+w5+w6+w7;
  cout <<"一星期總花費:" << total
       << '\n' ;        
   
  system("PAUSE");	
  return 0;
 }
