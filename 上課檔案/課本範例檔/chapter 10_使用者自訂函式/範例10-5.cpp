#include <iostream>
#include <cstdlib>
using namespace std;
void transform(float *); //宣告函式
int main()
 {
 float c;
 cout << "輸入攝氏溫度:" ;
 cin >> c ;
 
 //小數１位
 cout.precision(1);
 cout.setf(ios::fixed);
 //小數１位 
  
 cout << "攝氏" << c << "度=華氏" ;
 transform(&c) ;
 cout << c << "度\n" ;
 
 system("pause");
 return 0;
 }

void transform(float *f) //定義函式
 {
  *f=*f * 9 / 5 + 32;
 }
