//範例8-4 一重指標、三維陣列 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip> 
using namespace std;
int main()
 { 
  int num[2][3][2] = {-1,3,1,6,4,7,0,1,2,-5,9,11};
  int *ptr;
  ptr = num[0][0]; 
  
  for (int i=0;i<12;i++){
  	cout<<setw(5)<< *ptr;
  	ptr++;
  } 
  //cout<<'\n'<< num <<'\n'<<*ptr<<'\n'<<ptr;
  
  system("pause");
  return 0;
 }
