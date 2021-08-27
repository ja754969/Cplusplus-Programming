#include <iostream>
#include <cstdlib>
using namespace std;
int biggest(int *,int); //宣告函式
int main()
 {
  int num[5],i;
  for (i=0;i<5;i++)
   {
    cout <<"輸入第" << i+1 << "個整數:" ;
    cin  >> num[i] ;
   }  
  cout << "最大者=" << biggest(&num[0],5) << '\n';
  system("pause");
  return 0;
 }
int biggest(int *d,int n) //定義函式
 {
  int i,big;
  big=*d;
  for (i=1;i<n;i++)
    if (big<*(d+i))
     big=*(d+i);

  return big;
 }
