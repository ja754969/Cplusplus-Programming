#include <iostream>
#include <cstdlib>
using namespace std;
void sum(int,int,int); //�ŧi�禡
int main()
 {
  sum(1,10,1); //�I�s�禡
  sum(1,99,2); //�I�s�禡
  sum(4,97,3); //�I�s�禡
 
  system("PAUSE");	
  return 0;
 }
 
void sum(int m,int n,int add) //�w�q�禡
 {
  int i,total=0;
  for(i=m;i<=n;i=i+add)
    total = total +i;
  
  cout << m << '+' << m+add << "+...+" 
       << n-add << '+' << n << '=' 
       << total << '\n' ;
 }
