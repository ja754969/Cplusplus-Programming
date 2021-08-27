//範例13-1 動態配置記憶體給5個元素的一維整數陣列變數使用 
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
 {
  int i;
  
  //動態配置有5個元素的一維陣列ptr之記憶體
  int *ptr = new int[5];
  
  for (i=0 ; i<5 ; i++)
   {
    ptr[i]=i+1;
    cout << "ptr[" << i << "]=" << ptr[i] << endl ;
   }
  delete [] ptr; //回收動態配置的一維陣列ptr之記憶體
  ptr=NULL; //回收動態配置的一維陣列ptr之記憶體
  
  system("PAUSE");
  return 0; 
 }
