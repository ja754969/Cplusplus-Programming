#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "function.h"
using namespace std;
float c; //办跑计 
int main()
 {
  cout << "块尼ん放:" ; 
  cin >> c ;
  
  //计
  cout.precision(1);
  cout.setf(ios::fixed);
  //计 
 
  cout << "尼ん" << c << "=地ん" 
      << transform() << "\n" ;
  
  system("pause");
  return 0;
 }	
