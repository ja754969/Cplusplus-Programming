#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int i,j,k=1;
 
  //動態配置3x2的二維陣列ptr之記憶體
  float **ptr = new float *[3];
  for (i=0 ; i<3 ; i++)
    ptr[i] = new float [2];
  //動態配置3x2的二維陣列ptr之記憶體
  
  for (i=0 ; i<3 ; i++)
    for (j=0 ; j<2 ; j++)
     {
      ptr[i][j]=k;
      k++;
      cout << "ptr[" << i << "][" << j << "]=" 
           << ptr[i][j] << endl ;
     }
     
  //回收動態配置的二維陣列ptr之記憶體   
  for (i=0 ; i<3 ; i++)
    delete [] ptr[i];
  delete [] ptr; 
  ptr=NULL;
  //回收動態配置的二維陣列ptr之記憶體
  
  system("PAUSE");
  return 0; 
 }
