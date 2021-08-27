#include <iostream>
#include <cstdlib>
using namespace std;
float transform(float); //ㄏノ﹚ㄧΑ
int main()
 {
  auto float c;
  cout << "块尼ん放:" ;
  cin >> c ;
 
  //计
  cout.precision(1);
  cout.setf(ios::fixed);
  //计 
 
  cout << "尼ん" << c << "=地ん" 
      << transform(c) << "\n" ;
 
  system("pause");
  return 0;
 }

float transform(float c) //﹚竡ㄏノ﹚ㄧΑ
 {
  c=c*9/5+32;
  return c;
 }
