#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
 {  
  string str;
  float digit;
  cout << "块﹃:" ;
  cin >> str ;
  digit=atof(str.c_str()) ;  
  //str.c_str() : 盢string篈﹃ン跑计str
  //锣传Θchar篈じ皚盽计

  cout << "\"" << str << '\"' 
       << "玡疊翴计" << digit << '\n' ;
 
  system("PAUSE");	
  return 0;
 }
