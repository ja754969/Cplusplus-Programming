//�d��13-1 �ʺA�t�m�O���鵹5�Ӥ������@����ư}�C�ܼƨϥ� 
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
 {
  int i;
  
  //�ʺA�t�m��5�Ӥ������@���}�Cptr���O����
  int *ptr = new int[5];
  
  for (i=0 ; i<5 ; i++)
   {
    ptr[i]=i+1;
    cout << "ptr[" << i << "]=" << ptr[i] << endl ;
   }
  delete [] ptr; //�^���ʺA�t�m���@���}�Cptr���O����
  ptr=NULL; //�^���ʺA�t�m���@���}�Cptr���O����
  
  system("PAUSE");
  return 0; 
 }
