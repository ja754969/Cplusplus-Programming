#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {  
  int m[7],total=0,i; //只能使用m[0],m[1],…,m[6]
  for (i=0;i<7;i++) //累計7天的花費
   {
    cout << "輸入星期" << i+1 << "的花費:" ;
    cin >> m[i] ;
    total=total+ m[i];
   }

  cout <<"一星期總花費:" << total
       << '\n' ;        
   
  system("PAUSE");	
  return 0;
 }
