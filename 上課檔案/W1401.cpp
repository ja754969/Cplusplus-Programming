//�d��10-4 �����ؤ� 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip> 
#include <string> 
using namespace std;
float ttransform(float);
int main(){ 
  float c;
  cout << "��J���ū� :�@";
  cin >> c;
  
  cout.precision(1);
  cout.setf(ios::fixed);
  
  cout << "���"<<c<<"�׵���ؤ�"<<ttransform(c)<<"��\n";
   
  
  
  system("pause");
  return 0;
 }
 
 float ttransform(float c){
 	c=c*9/5+32;
 	return c;
 }
