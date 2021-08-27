#include <iostream>
#include <cstdlib>
using namespace std;   
int main()
{ 
 int a=0,b=1,c;
 c=--a + b; //先處理a--;，然後再處理c=a＋b;
 cout << "a=" << a << " , " 
     << "c=" << c << '\n' ; 
 system("PAUSE");	
 return 0;
}
