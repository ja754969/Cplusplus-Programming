#include <iostream>
#include <cstdlib>
using namespace std;
#define HOUR 24
#define CHINESE "����"
#define MYWAIT cout << "�еy��...\n"
#define PRINTSTAR for(i=1;i<=3;i++)\
                   {\
                    for (j=1;j<=i;j++)\
                      cout << '*' ;\
                    cout << '\n' ;\
                   }

#define LEAP(y) if ((y) % 400 == 0 ||\
                   ((y) % 100 != 0 && (y) % 4==0))\
                   cout << "�褸" << y << "�~�O�|�~.\n" ;\
                else\
                   cout << "�褸" << y << "�~���O�|�~.\n" ;

#define F(X)2*X
#define MYNAME(name) cout << "my name is " << name << '\n'
int main()
 {
  int i,j;
  cout << "�@�Ѧ�" << HOUR << "�p��.\n" ;
  cout << "�ϥΪ��y����" << CHINESE << ".\n" ;
  MYNAME("Mike"); 
  PRINTSTAR;
  LEAP (2012) ;
  MYWAIT;
  cout << "F(2)=" << F(2) << '\n' ;
    
  system("PAUSE");	
  return 0;
 }
