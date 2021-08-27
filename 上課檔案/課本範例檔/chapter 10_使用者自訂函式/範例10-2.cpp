#include <iostream>
#include <cstdlib>
using namespace std;
void sum(int,int,int); //宣告函式
int main()
 {
  sum(1,10,1); //呼叫函式
  sum(1,99,2); //呼叫函式
  sum(4,97,3); //呼叫函式
 
  system("PAUSE");	
  return 0;
 }
 
void sum(int m,int n,int add) //定義函式
 {
  int i,total=0;
  for(i=m;i<=n;i=i+add)
    total = total +i;
  
  cout << m << '+' << m+add << "+...+" 
       << n-add << '+' << n << '=' 
       << total << '\n' ;
 }
