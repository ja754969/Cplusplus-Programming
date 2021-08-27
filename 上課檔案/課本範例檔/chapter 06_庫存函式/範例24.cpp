#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
 {  
  time_t *t,tt;
  t=&tt;

  //1970/1/1 00:00:00ヘ玡┮竒筁计
  //琌ヘ玡PC╰参丁
  tt=time(NULL);

  cout << "ヘ玡PC╰参丁:"
       << ctime(t)  ;
  //ctime(t)盢PC╰参丁锣传Θ26じぇ﹃
   
  system("pause");    
  return 0;
 }	
