#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int i,j,k=1;
 
  //�ʺA�t�m3x2���G���}�Cptr���O����
  float **ptr = new float *[3];
  for (i=0 ; i<3 ; i++)
    ptr[i] = new float [2];
  //�ʺA�t�m3x2���G���}�Cptr���O����
  
  for (i=0 ; i<3 ; i++)
    for (j=0 ; j<2 ; j++)
     {
      ptr[i][j]=k;
      k++;
      cout << "ptr[" << i << "][" << j << "]=" 
           << ptr[i][j] << endl ;
     }
     
  //�^���ʺA�t�m���G���}�Cptr���O����   
  for (i=0 ; i<3 ; i++)
    delete [] ptr[i];
  delete [] ptr; 
  ptr=NULL;
  //�^���ʺA�t�m���G���}�Cptr���O����
  
  system("PAUSE");
  return 0; 
 }
