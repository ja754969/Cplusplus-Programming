#include <iostream>
#include <cstdlib>
using namespace std;
#define HOUR 24
#define CHINESE "中文"
#define MYWAIT cout << "請稍後...\n"
#define PRINTSTAR for(i=1;i<=3;i++)\
                   {\
                    for (j=1;j<=i;j++)\
                      cout << '*' ;\
                    cout << '\n' ;\
                   }

#define LEAP(y) if ((y) % 400 == 0 ||\
                   ((y) % 100 != 0 && (y) % 4==0))\
                   cout << "西元" << y << "年是閏年.\n" ;\
                else\
                   cout << "西元" << y << "年不是閏年.\n" ;

#define F(X)2*X
#define MYNAME(name) cout << "my name is " << name << '\n'
int main()
 {
  int i,j;
  cout << "一天有" << HOUR << "小時.\n" ;
  cout << "使用的語言為" << CHINESE << ".\n" ;
  MYNAME("Mike"); 
  PRINTSTAR;
  LEAP (2012) ;
  MYWAIT;
  cout << "F(2)=" << F(2) << '\n' ;
    
  system("PAUSE");	
  return 0;
 }
