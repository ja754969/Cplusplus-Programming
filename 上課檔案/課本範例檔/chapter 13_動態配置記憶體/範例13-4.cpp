#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int i,j,k;
  char x='a';
  //動態配置3x2x4的三維陣列ptr之記憶體
  char ***ptr = new char **[3];
  for (i=0 ; i<3 ; i++)
   {
    ptr[i] = new char *[2];
    for (j=0 ; j<2 ; j++)
      ptr[i][j] = new char [4];
   }
  //動態配置3x2x4的三維陣列ptr之記憶體
  
  for (i=0 ; i<3 ; i++)
    for (j=0 ; j<2 ; j++)
      for (k=0 ; k<4 ; k++)
       {
        ptr[i][j][k]=x;
        x++;
        cout << "ptr[" << i << "][" << j << "][" 
             << k << "]=" << ptr[i][j][k] << endl ;
     }
     
  //回收動態配置的三維陣列ptr之記憶體   
  for (i=0 ; i<3 ; i++)
   {
    for (j=0 ; j<2 ; j++)
       delete [] ptr[i][j];     
     delete [] ptr[i];
   }
  delete [] ptr; 
  ptr=NULL;
  //回收動態配置的三維陣列ptr之記憶體
  
  system("PAUSE");
  return 0; 
 }
