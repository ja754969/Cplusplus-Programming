//範例10-4 攝氏轉華氏 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip> 
#include <string> 
using namespace std;
float ttransform(float);
int main(){ 
  float c;
  cout << "輸入攝氏溫度 :　";
  cin >> c;
  
  cout.precision(1);
  cout.setf(ios::fixed);
  
  cout << "攝氏"<<c<<"度等於華氏"<<ttransform(c)<<"度\n";
   
  
  
  system("pause");
  return 0;
 }
 
 float ttransform(float c){
 	c=c*9/5+32;
 	return c;
 }
