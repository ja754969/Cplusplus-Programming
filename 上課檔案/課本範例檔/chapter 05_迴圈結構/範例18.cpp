#include <iostream>
#include <cstdlib>
using namespace std;
int main()
 {
  int n;
  int one_num=0,zero_num=0;
  cout << "��J�@�����n:" ;
  cin >> n ;
  cout << n << "�ন2�i���ƫ�,";
  while (n != 0)
   {
    //n & 1 : ���n�P1��mask�B�n�B��(�Y,�줸�B(&)�B��)
    //�Y2�i���m�W���ȻP1�ۦP�A�h���G��1,�_�h��0
    if ((n & 1)==1)
       one_num++;
    else
       zero_num++;
   
    //���H2,�Y�h��2�i���ܪk���Ӧ��
    n=n>>1;
   }
  cout << "�䤤�@��" << one_num 
       << "��1��" << zero_num
       << "��0\n" ;
  
  system("pause");    
  return 0;
 }	
