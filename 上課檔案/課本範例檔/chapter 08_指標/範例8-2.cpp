#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {  
  int i,num[5]={1,3,-1,6,4};
  int *ptr;

  ptr=num; //�� ptr=&num[0];
  //ptr���Vnum�}�C���Ĥ@�Ӥ�������}

  for (i=0;i<5;i++)
   {
    cout << *ptr << '\t';
    ptr++;
    //��ܱNptr���Vnum�}�C���U�@�Ӥ�������}
   }
  cout << '\n' ;        
   
  system("PAUSE");	
  return 0;
 }
