#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {  
  int i,num[5]={1,3,-1,6,4};
  int *ptr;

  ptr=num; //或 ptr=&num[0];
  //ptr指向num陣列的第一個元素的位址

  for (i=0;i<5;i++)
   {
    cout << *ptr << '\t';
    ptr++;
    //表示將ptr指向num陣列的下一個元素的位址
   }
  cout << '\n' ;        
   
  system("PAUSE");	
  return 0;
 }
