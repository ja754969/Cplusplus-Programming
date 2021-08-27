#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
 {  
  int i,j,num[2][3][2]={1,3,-1,6,4,7,0,1,2,-5,9,11};
  int *ptr;
  ptr=num[0][0]; //或 ptr=&num[0][0][0];
  //ptr指向num陣列的第一個元素的位址

  for (i=0;i<12;i++)
   {
    cout << setw(5) << *ptr ;
    ptr++;
    //表示將ptr指向num陣列的下一個元素的位址
   }
  cout << '\n' ;        
   
  system("PAUSE");	
  return 0;
 }
