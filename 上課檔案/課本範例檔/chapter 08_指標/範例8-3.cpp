#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {  
  int i,j,num[2][3]={1,3,-1,6,4,7};
  int *ptr;
  ptr=num[0]; //�� ptr=&num[0][0];
  //ptr���Vnum�}�C���Ĥ@�Ӥ�������}

  for (i=0;i<6;i++)
   {
    cout << *ptr << '\t' ;
    ptr++;
    //��ܱNptr���Vnum�}�C���U�@�Ӥ�������}
   }
  cout << '\n' ;        
   
  system("PAUSE");	
  return 0;
 }
