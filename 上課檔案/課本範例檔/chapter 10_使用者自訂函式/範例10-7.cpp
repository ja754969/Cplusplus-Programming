#include <iostream>
#include <cstdlib>
using namespace std;
int biggest(int *,int); //�ŧi�禡
int main()
 {
  int num[5],i;
  for (i=0;i<5;i++)
   {
    cout <<"��J��" << i+1 << "�Ӿ��:" ;
    cin  >> num[i] ;
   }  
  cout << "�̤j��=" << biggest(&num[0],5) << '\n';
  system("pause");
  return 0;
 }
int biggest(int *d,int n) //�w�q�禡
 {
  int i,big;
  big=*d;
  for (i=1;i<n;i++)
    if (big<*(d+i))
     big=*(d+i);

  return big;
 }
