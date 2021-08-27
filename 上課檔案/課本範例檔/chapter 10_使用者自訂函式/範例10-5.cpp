#include <iostream>
#include <cstdlib>
using namespace std;
void transform(float *); //ㄧΑ
int main()
 {
 float c;
 cout << "块尼ん放:" ;
 cin >> c ;
 
 //计
 cout.precision(1);
 cout.setf(ios::fixed);
 //计 
  
 cout << "尼ん" << c << "=地ん" ;
 transform(&c) ;
 cout << c << "\n" ;
 
 system("pause");
 return 0;
 }

void transform(float *f) //﹚竡ㄧΑ
 {
  *f=*f * 9 / 5 + 32;
 }
