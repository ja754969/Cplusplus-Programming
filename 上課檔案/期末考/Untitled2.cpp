//�ʺA�t�m�x�} 
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int i,j,k=1;
 
  //�ʺA�t�m3x2���G���}�Cptr���O����
  float **ptr = new float *[10];
  for (i=0 ; i<10 ; i++)
    ptr[i] = new float [3];
  //�ʺA�t�m3x2���G���}�Cptr���O����
  
  for (i=0 ; i<10 ; i++)
    for (j=0 ; j<3 ; j++)
     {
      ptr[i][j]=k;
      k++;
      cout << "ptr[" << i << "][" << j << "]=" 
           << ptr[i][j] << endl ;
     }
     
  //�^���ʺA�t�m���G���}�Cptr���O����   
  for (i=0 ; i<10 ; i++)
    delete [] ptr[i];
  delete [] ptr; 
  ptr=NULL;
  //�^���ʺA�t�m���G���}�Cptr���O����
  
  system("PAUSE");
  return 0; 
 }
