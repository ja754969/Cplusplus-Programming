#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
 {  
  int i,j,num[2][3][2]={1,3,-1,6,4,7,0,1,2,-5,9,11};
  int *ptr;
  ptr=num[0][0]; //�� ptr=&num[0][0][0];
  //ptr���Vnum�}�C���Ĥ@�Ӥ�������}

  for (i=0;i<12;i++)
   {
    cout << setw(5) << *ptr ;
    ptr++;
    //��ܱNptr���Vnum�}�C���U�@�Ӥ�������}
   }
  cout << '\n' ;        
   
  system("PAUSE");	
  return 0;
 }
