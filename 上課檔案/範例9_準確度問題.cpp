#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  float  a=1.2345678901234567890f;
  double b;
  cout.precision(20);
  cout.setf(ios::fixed);     //砞﹚计计20 
  cout << "a=" << a << '\n' ;  
  //1.23456788063049320000
   
  a=12.345678901234567890f;
  cout << "a=" << a << '\n' ;
  //12.34567928314209000000
     
  b=1.2345678901234567890;
  cout << "b=" << b << '\n' ;  
  //1.23456789012345670000
   
  b=123.45678901234567890;
  cout << "b=" << b << '\n' ;
  //123.45673901234568000000   
         
  system("pause");
  return 0;
  //ぃ琌–疊翴计常非絋纗癘拘砰い┮穦Τ粇畉  
 }
