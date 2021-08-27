#include <iostream>
#include <cstdlib>
using namespace std;   
int main()
{ 
 int a=0,b=1,c;
 c=a++ + b; //先處理c=a＋b;，然後再處理a++;
 cout << "a=" << a << " , " 
     << "c=" << c << '\n'; 
 system("PAUSE");	
 return 0;
}
