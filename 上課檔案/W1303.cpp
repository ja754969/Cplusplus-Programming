//�d��8-1 �@������ 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip> 
using namespace std;
int main()
 { 
  int var,*ptr;
  ptr = &var; //ptr�ҫ��V���O�����} 
  var=5;
  *ptr=*ptr+2;//ptr�ҫ��V���O�����}������Ƨ��ܡAvar����Ƥ]�H������ 
  cout<<"var="<<var<<'\n';
  cout<<"*ptr="<<*ptr<<'\n';
  
  
  system("pause");
  return 0;
 }
